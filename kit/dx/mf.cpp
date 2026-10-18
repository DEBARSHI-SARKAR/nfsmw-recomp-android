// mf.cpp - Media Foundation playback, over the FFmpeg reader in mf_media.cpp.
//
// A game that plays its cinematics through Media Foundation builds the graph
// the SDK samples build: resolve a URL into a media source, ask the source to
// describe its streams, put a source node and a renderer activate for each
// selected stream into a topology, hand that topology to a media session, and
// then drive the session from an IMFAsyncCallback armed with BeginGetEvent.
//
// None of that describes decoding, so none of it is implemented literally.
// The topology is recorded rather than resolved, the renderer activates are
// names and nothing more, and the session plays the source it was given
// straight through mf::Media: video is presented with host_present and audio
// is streamed to a host channel, both advanced from the frame pump.
//
// What the player actually observes is the event sequence, so that is what
// this reproduces exactly: its callback is armed with BeginGetEvent and
// collected with EndGetEvent, and the session posts MESessionTopologyStatus
// (MF_TOPOSTATUS_READY), MESessionTopologySet,
// MESessionStarted, MESessionPaused, MESessionStopped, MESessionEnded and
// MESessionClosed as they happen, because a player's state machine is written
// against that order and stalls on a missing one.
//
// Object model, one host object per COM object as everywhere in dx/:
//   K_MF_SOURCE_RESOLVER         makes a media source out of a URL
//   K_MF_MEDIA_SOURCE            one open file and its decoder
//   K_MF_PRESENTATION_DESCRIPTOR its streams, and the duration
//   K_MF_STREAM_DESCRIPTOR       one stream; K_MF_MEDIA_TYPE_HANDLER its type
//   K_MF_TOPOLOGY / _NODE        recorded; the session reads the source back
//   K_MF_ACTIVATE                a renderer the player asked for by name
//   K_MF_MEDIA_SESSION           playback state and the event queue
//   K_MF_MEDIA_EVENT             one queued event
//   K_MF_ASYNC_RESULT            how that event reaches the player's Invoke
//   K_MF_CLOCK                   the presentation clock the player asks for
//   K_MF_VIDEO_DISPLAY           IMFVideoDisplayControl on the renderer
#include "com.h"
#include "dx.h"
#include "dxtypes.h"
#include "host_api.h"
#include "mf_media.h"
#include "../runtime/guest.h"
#include "../platform/os.h"
#include "../runtime/imports.h"
#include "../runtime/display_seam.h"
#include "../runtime/memory.h"
#include "../runtime/win32.h"

#include <chrono>
#include <cmath>
#include <cstring>
#include <deque>
#include <iterator>
#include <map>
#include <memory>
#include <string>
#include <vector>

namespace {

// ---------------------------------------------------------------------------
// HRESULTs and event types Media Foundation adds to the DirectX set.
// ---------------------------------------------------------------------------
const uint32_t MF_E_ATTRIBUTENOTFOUND = 0xC00D36E6u;
const uint32_t MF_E_INVALIDINDEX = 0xC00D36D6u;
const uint32_t MF_E_NO_EVENTS_AVAILABLE = 0xC00D3E80u;
const uint32_t MF_E_UNSUPPORTED_BYTESTREAM_TYPE = 0xC00D36C4u;

// MediaEventType. The session events are one contiguous run, which is how a
// player's handler switches on them.
enum {
    ME_SESSION_TOPOLOGY_SET = 101,
    ME_SESSION_TOPOLOGIES_CLEARED = 102,
    ME_SESSION_STARTED = 103,
    ME_SESSION_PAUSED = 104,
    ME_SESSION_STOPPED = 105,
    ME_SESSION_CLOSED = 106,
    ME_SESSION_ENDED = 107,
    // Not part of that run: the topology reports its own readiness, and a
    // player does its renderer setup only when this arrives.
    ME_SESSION_TOPOLOGY_STATUS = 111,
    // Raised when the presentation runs out, before the session reports itself
    // ended. This is the one a player acts on.
    ME_END_OF_PRESENTATION = 211,
};

// MF_TOPOSTATUS, carried on that event as MF_EVENT_TOPOLOGY_STATUS.
enum { MF_TOPOSTATUS_READY = 100 };

// MF_OBJECT_TYPE
enum { MF_OBJECT_MEDIASOURCE = 0 };

// MFSESSIONCAP_*: start, seek, pause and rate control. A player reads this to
// decide which of its transport buttons mean anything.
const uint32_t kSessionCaps = 0x1u | 0x2u | 0x4u | 0x8u;

// RECOMP_MF_TRACE=1 narrates one session: what opened, what the topology
// named, every event posted and collected, and whether the video is keeping
// up with the clock. A playback failure here is quiet by nature - the player
// simply waits for an event that never arrives - so this is how to see which
// step did not happen.
bool mf_tracing() {
    static const bool on = recomp_env("MF_TRACE") != nullptr;
    return on;
}
#define MF_TRACE(...)                                                                              \
    do {                                                                                           \
        if (mf_tracing())                                                                          \
            LOGW(__VA_ARGS__);                                                                     \
    } while (0)

// ---------------------------------------------------------------------------
// GUIDs
// ---------------------------------------------------------------------------
struct Guid {
    uint8_t b[16];
};
// The last eight bytes are given in reading order, which is how a GUID is
// written down; the first three fields are little-endian, which is how one is
// stored.
constexpr Guid guid_of(uint32_t a, uint16_t b, uint16_t c, uint64_t tail) {
    return Guid{{(uint8_t)a, (uint8_t)(a >> 8), (uint8_t)(a >> 16), (uint8_t)(a >> 24), (uint8_t)b,
                 (uint8_t)(b >> 8), (uint8_t)c, (uint8_t)(c >> 8), (uint8_t)(tail >> 56),
                 (uint8_t)(tail >> 48), (uint8_t)(tail >> 40), (uint8_t)(tail >> 32),
                 (uint8_t)(tail >> 24), (uint8_t)(tail >> 16), (uint8_t)(tail >> 8),
                 (uint8_t)tail}};
}
bool guid_eq(const Guid &x, const Guid &y) {
    return memcmp(x.b, y.b, 16) == 0;
}
// Data1 alone identifies every GUID this layer knows, and is what a trace
// line can be read against the constants above without a formatter.
uint32_t guid_tag(const Guid &g) {
    return (uint32_t)g.b[0] | ((uint32_t)g.b[1] << 8) | ((uint32_t)g.b[2] << 16) |
           ((uint32_t)g.b[3] << 24);
}

bool guid_read(uint32_t addr, Guid *out) {
    if (!addr || !gm_valid(addr, 16))
        return false;
    memcpy(out->b, gm_ptr(addr), 16);
    return true;
}

const Guid IID_IUnknown = guid_of(0x00000000, 0x0000, 0x0000, 0xC000000000000046ull);
const Guid IID_IMFMediaSession = guid_of(0x90377834, 0x21D0, 0x4DEE, 0x8214BA2E3E6C1127ull);
const Guid IID_IMFMediaEventGenerator = guid_of(0x2CD0BD52, 0xBCD5, 0x4B89, 0xB62CEADC0C031E7Dull);
const Guid IID_IMFGetService = guid_of(0xFA993888, 0x4383, 0x415A, 0xA930DD472A8CF6F7ull);
const Guid IID_IMFVideoDisplayControl = guid_of(0xA490B1E4, 0xAB84, 0x4D31, 0xA1B2181E03B1077Aull);
const Guid IID_IMFAudioStreamVolume = guid_of(0x76B1BBDB, 0x4EC8, 0x4F36, 0xB10670A9316DF593ull);
const Guid IID_IMFClock = guid_of(0x2EB1E945, 0x18B8, 0x4139, 0x9B1AD5D584818530ull);
const Guid IID_IMFPresentationClock = guid_of(0x868CE85C, 0x8EA9, 0x4F55, 0xAB82B009A910A805ull);
const Guid IID_IMFTopologyNode = guid_of(0x83CF873A, 0xF6DA, 0x4BC8, 0x823FBACFD55DC430ull);
const Guid IID_IMFMediaSource = guid_of(0x279A808D, 0xAEC7, 0x40C8, 0x9C6B0A7A57A51C88ull);

// Services a player asks the session for by name.
const Guid MF_EVENT_TOPOLOGY_STATUS = guid_of(0x30C5018D, 0x9A53, 0x454B, 0xAD9E6D5F8FA7C43Bull);
const Guid MR_VIDEO_RENDER_SERVICE = guid_of(0x1092A86C, 0xAB1A, 0x459A, 0xA336831FBC4D11FFull);
const Guid MR_STREAM_VOLUME_SERVICE = guid_of(0xF8B5FA2F, 0x32EF, 0x46F5, 0xB1721321212FB2C4ull);

// Major types, and the one presentation attribute a player reads.
const Guid MFMediaType_Audio = guid_of(0x73647561, 0x0000, 0x0010, 0x800000AA00389B71ull);
const Guid MFMediaType_Video = guid_of(0x73646976, 0x0000, 0x0010, 0x800000AA00389B71ull);
const Guid MF_PD_DURATION = guid_of(0x6C990D33, 0xBB8E, 0x477A, 0x85980D5D96FCD88Aull);

// ---------------------------------------------------------------------------
// Attributes. Every Media Foundation object that derives from IMFAttributes
// shares one store, keyed by object id, because the thirty attribute slots are
// the same code for all of them.
// ---------------------------------------------------------------------------
struct AttrValue {
    enum Kind { U32, U64, DBL, GUIDV, UNK, STR } kind = U32;
    uint32_t u32 = 0;
    uint64_t u64 = 0;
    double dbl = 0;
    Guid guid{};
    uint32_t unk = 0; // a guest interface pointer, held without a reference
    std::string str;
};
struct Attrs {
    std::vector<std::pair<Guid, AttrValue>> items;
    AttrValue *find(const Guid &k) {
        for (auto &kv : items)
            if (guid_eq(kv.first, k))
                return &kv.second;
        return nullptr;
    }
    AttrValue &at(const Guid &k) {
        if (AttrValue *v = find(k))
            return *v;
        items.push_back({k, AttrValue{}});
        return items.back().second;
    }
};
std::map<uint32_t, Attrs> &attrs() {
    static auto *m = new std::map<uint32_t, Attrs>();
    return *m;
}

// ---------------------------------------------------------------------------
// Host state, one table per kind, keyed by object id - the pattern the other
// media shims use, so ComObj keeps no Media Foundation fields.
// ---------------------------------------------------------------------------
struct SourceState {
    mf::Media media;
    std::string url, host_path;
    bool opened = false;
};
std::map<uint32_t, std::unique_ptr<SourceState>> &sources() {
    static auto *m = new std::map<uint32_t, std::unique_ptr<SourceState>>();
    return *m;
}
SourceState *source_of(uint32_t id) {
    auto it = sources().find(id);
    return it == sources().end() ? nullptr : it->second.get();
}

struct StreamState {
    uint32_t source_obj = 0;
    uint32_t handler_obj = 0;
    uint32_t stream_id = 0;
    bool video = false;
    bool selected = true;
};
std::map<uint32_t, StreamState> &streams() {
    static auto *m = new std::map<uint32_t, StreamState>();
    return *m;
}

struct PdState {
    uint32_t source_obj = 0;
    std::vector<uint32_t> stream_objs;
};
std::map<uint32_t, PdState> &pds() {
    static auto *m = new std::map<uint32_t, PdState>();
    return *m;
}

// A media type handler and a media type both answer "which major type", and
// both are reached from the stream descriptor, so one record serves them.
std::map<uint32_t, uint32_t> &handler_stream() { // handler or media type -> stream descriptor
    static auto *m = new std::map<uint32_t, uint32_t>();
    return *m;
}

struct NodeState {
    uint32_t node_type = 0;
    uint32_t object_view = 0; // whatever SetObject was given
    uint32_t source_obj = 0;  // recognised through SetUnknown
    uint32_t pd_obj = 0, sd_obj = 0;
    uint64_t id = 0;
};
std::map<uint32_t, NodeState> &nodes() {
    static auto *m = new std::map<uint32_t, NodeState>();
    return *m;
}

std::map<uint32_t, std::vector<uint32_t>> &topologies() { // topology -> node ids
    static auto *m = new std::map<uint32_t, std::vector<uint32_t>>();
    return *m;
}

struct EventState {
    uint32_t type = 0;
    uint32_t status = S_OK;
};
std::map<uint32_t, EventState> &events() {
    static auto *m = new std::map<uint32_t, EventState>();
    return *m;
}

struct ResultState {
    uint32_t event_obj = 0;
    uint32_t state_unk = 0;
};
std::map<uint32_t, ResultState> &results() {
    static auto *m = new std::map<uint32_t, ResultState>();
    return *m;
}

struct SessionState {
    uint32_t source_obj = 0;
    uint32_t topology_obj = 0;
    uint32_t clock_obj = 0;
    uint32_t video_obj = 0, volume_obj = 0;
    uint32_t hwnd = 0;

    // The player's callback, armed by BeginGetEvent and spent by one Invoke.
    uint32_t callback = 0, callback_state = 0;
    bool armed = false;
    bool delivering = false;
    std::deque<uint32_t> queue; // event object ids, in the order they happened

    enum State { IDLE, RUNNING, PAUSED, STOPPED, CLOSED, SHUTDOWN } state = IDLE;
    bool media_done = false; // the decoder reached the end of the file
    bool ended_posted = false;

    // Playback.
    double clock0 = 0;   // wall clock the current run started at
    double position = 0; // seconds played before the current run
    int32_t channel = -1;
    bool audio_started = false, audio_unavailable = false;
    std::vector<int16_t> pcm;
    size_t pcm_pos = 0;
    mf::VideoFrame cur, next;
    bool have_next = false, have_cur = false;
    std::vector<uint32_t> screen;
};
std::map<uint32_t, std::unique_ptr<SessionState>> &sessions() {
    static auto *m = new std::map<uint32_t, std::unique_ptr<SessionState>>();
    return *m;
}
SessionState *session_of(uint32_t id) {
    auto it = sessions().find(id);
    return it == sessions().end() ? nullptr : it->second.get();
}

double now_seconds() {
    using clock = std::chrono::steady_clock;
    static const clock::time_point t0 = clock::now();
    return std::chrono::duration<double>(clock::now() - t0).count();
}

// ---------------------------------------------------------------------------
// Small shim helpers
// ---------------------------------------------------------------------------
// Hands `o` out through `iface` with the AddRef COM requires of an out-param.
bool out_view(X86 *c, uint32_t out, ComObj *o, ComIface iface) {
    if (!out || !gm_valid(out, 4)) {
        com_ret(c, E_POINTER);
        return false;
    }
    uint32_t v = o ? com_view(o, iface) : 0;
    if (!v) {
        wr32(out, 0);
        com_ret(c, o ? E_OUTOFMEMORY : E_FAIL);
        return false;
    }
    com_addref(o);
    wr32(out, v);
    com_ret(c, S_OK);
    return true;
}
bool put32(uint32_t addr, uint32_t v) {
    if (!addr || !gm_valid(addr, 4))
        return false;
    wr32(addr, v);
    return true;
}
bool put64(uint32_t addr, uint64_t v) {
    if (!addr || !gm_valid(addr, 8))
        return false;
    wr32(addr, (uint32_t)v);
    wr32(addr + 4, (uint32_t)(v >> 32));
    return true;
}
// A guest UTF-16 string. Only the BMP, and only what a file name needs.
std::string wide_string(uint32_t addr, size_t max_chars = 0x1000) {
    std::string s;
    if (!addr)
        return s;
    for (size_t i = 0; i < max_chars; ++i) {
        if (!gm_valid(addr + (uint32_t)(i * 2), 2))
            break;
        uint16_t ch = rd16(addr + (uint32_t)(i * 2));
        if (!ch)
            break;
        s.push_back(ch < 0x80 ? (char)ch : '?');
    }
    return s;
}

// ---------------------------------------------------------------------------
// IUnknown and IMFAttributes, shared by every table below.
// ---------------------------------------------------------------------------
#define MF_IUNKNOWN_SLOTS                                                                          \
    {"QueryInterface", 3, com_QueryInterface}, {"AddRef", 1, com_AddRef}, {                        \
        "Release", 1, com_Release                                                                  \
    }

Attrs *attrs_arg(X86 *c) {
    ComObj *o = com_this_arg(c);
    return o ? &attrs()[o->id] : nullptr;
}
// The key is always the first argument after `this`, by pointer.
bool attr_key(X86 *c, Guid *key) {
    return guid_read(arg(c, 1), key);
}

void attr_unimpl(X86 *c) {
    com_ret(c, E_NOTIMPL);
}
void attr_ok(X86 *c) {
    com_ret(c, S_OK);
}

void attr_GetUINT32(X86 *c) {
    Attrs *a = attrs_arg(c);
    Guid k;
    AttrValue *v = a && attr_key(c, &k) ? a->find(k) : nullptr;
    if (!v || !put32(arg(c, 2), v->u32)) {
        com_ret(c, v ? E_POINTER : MF_E_ATTRIBUTENOTFOUND);
        return;
    }
    com_ret(c, S_OK);
}
void attr_GetUINT64(X86 *c) {
    Attrs *a = attrs_arg(c);
    Guid k;
    AttrValue *v = a && attr_key(c, &k) ? a->find(k) : nullptr;
    if (!v || !put64(arg(c, 2), v->u64)) {
        com_ret(c, v ? E_POINTER : MF_E_ATTRIBUTENOTFOUND);
        return;
    }
    com_ret(c, S_OK);
}
void attr_GetDouble(X86 *c) {
    Attrs *a = attrs_arg(c);
    Guid k;
    AttrValue *v = a && attr_key(c, &k) ? a->find(k) : nullptr;
    if (!v) {
        com_ret(c, MF_E_ATTRIBUTENOTFOUND);
        return;
    }
    uint64_t bits;
    memcpy(&bits, &v->dbl, 8);
    com_ret(c, put64(arg(c, 2), bits) ? S_OK : E_POINTER);
}
void attr_GetGUID(X86 *c) {
    Attrs *a = attrs_arg(c);
    Guid k;
    AttrValue *v = a && attr_key(c, &k) ? a->find(k) : nullptr;
    uint32_t out = arg(c, 2);
    if (!v) {
        com_ret(c, MF_E_ATTRIBUTENOTFOUND);
        return;
    }
    if (!out || !gm_valid(out, 16)) {
        com_ret(c, E_POINTER);
        return;
    }
    memcpy(gm_ptr(out), v->guid.b, 16);
    com_ret(c, S_OK);
}
void attr_GetUnknown(X86 *c) {
    Attrs *a = attrs_arg(c);
    Guid k;
    AttrValue *v = a && attr_key(c, &k) ? a->find(k) : nullptr;
    if (!v || !v->unk) {
        put32(arg(c, 3), 0);
        com_ret(c, MF_E_ATTRIBUTENOTFOUND);
        return;
    }
    // The stored pointer is one of ours, so hand it back as it was given.
    if (ComObj *o = com_this(v->unk))
        com_addref(o);
    com_ret(c, put32(arg(c, 3), v->unk) ? S_OK : E_POINTER);
}
void attr_GetItem(X86 *c) {
    Attrs *a = attrs_arg(c);
    Guid k;
    com_ret(c, a && attr_key(c, &k) && a->find(k) ? S_OK : MF_E_ATTRIBUTENOTFOUND);
}
void attr_GetItemType(X86 *c) {
    Attrs *a = attrs_arg(c);
    Guid k;
    AttrValue *v = a && attr_key(c, &k) ? a->find(k) : nullptr;
    if (!v) {
        com_ret(c, MF_E_ATTRIBUTENOTFOUND);
        return;
    }
    // MF_ATTRIBUTE_TYPE: UINT32 1, UINT64 2, DOUBLE 3, GUID 0x48, STRING 0x1f,
    // BLOB 0x1011, IUNKNOWN 13.
    static const uint32_t kTypes[] = {1u, 2u, 3u, 0x48u, 13u, 0x1fu};
    com_ret(c, put32(arg(c, 2), kTypes[v->kind]) ? S_OK : E_POINTER);
}
void attr_GetStringLength(X86 *c) {
    Attrs *a = attrs_arg(c);
    Guid k;
    AttrValue *v = a && attr_key(c, &k) ? a->find(k) : nullptr;
    if (!v) {
        com_ret(c, MF_E_ATTRIBUTENOTFOUND);
        return;
    }
    com_ret(c, put32(arg(c, 2), (uint32_t)v->str.size()) ? S_OK : E_POINTER);
}
void attr_GetString(X86 *c) {
    Attrs *a = attrs_arg(c);
    Guid k;
    AttrValue *v = a && attr_key(c, &k) ? a->find(k) : nullptr;
    uint32_t buf = arg(c, 2), cap = arg(c, 3);
    if (!v) {
        com_ret(c, MF_E_ATTRIBUTENOTFOUND);
        return;
    }
    if (!buf || cap == 0 || !gm_valid(buf, cap * 2)) {
        com_ret(c, E_POINTER);
        return;
    }
    gm_put_wstr(buf, v->str, cap * 2);
    put32(arg(c, 4), (uint32_t)v->str.size());
    com_ret(c, S_OK);
}
void attr_SetUINT32(X86 *c) {
    Attrs *a = attrs_arg(c);
    Guid k;
    if (!a || !attr_key(c, &k)) {
        com_ret(c, E_INVALIDARG);
        return;
    }
    AttrValue &v = a->at(k);
    v.kind = AttrValue::U32;
    v.u32 = arg(c, 2);
    com_ret(c, S_OK);
}
void attr_SetUINT64(X86 *c) {
    Attrs *a = attrs_arg(c);
    Guid k;
    if (!a || !attr_key(c, &k)) {
        com_ret(c, E_INVALIDARG);
        return;
    }
    AttrValue &v = a->at(k);
    v.kind = AttrValue::U64;
    v.u64 = (uint64_t)arg(c, 2) | ((uint64_t)arg(c, 3) << 32);
    com_ret(c, S_OK);
}
void attr_SetDouble(X86 *c) {
    Attrs *a = attrs_arg(c);
    Guid k;
    if (!a || !attr_key(c, &k)) {
        com_ret(c, E_INVALIDARG);
        return;
    }
    uint64_t bits = (uint64_t)arg(c, 2) | ((uint64_t)arg(c, 3) << 32);
    AttrValue &v = a->at(k);
    v.kind = AttrValue::DBL;
    memcpy(&v.dbl, &bits, 8);
    com_ret(c, S_OK);
}
void attr_SetGUID(X86 *c) {
    Attrs *a = attrs_arg(c);
    Guid k, val;
    if (!a || !attr_key(c, &k) || !guid_read(arg(c, 2), &val)) {
        com_ret(c, E_INVALIDARG);
        return;
    }
    AttrValue &v = a->at(k);
    v.kind = AttrValue::GUIDV;
    v.guid = val;
    com_ret(c, S_OK);
}
void attr_SetString(X86 *c) {
    Attrs *a = attrs_arg(c);
    Guid k;
    if (!a || !attr_key(c, &k)) {
        com_ret(c, E_INVALIDARG);
        return;
    }
    AttrValue &v = a->at(k);
    v.kind = AttrValue::STR;
    v.str = wide_string(arg(c, 2));
    com_ret(c, S_OK);
}
// The one attribute setter with a side effect. A player attaches the media
// source, the presentation descriptor and the stream descriptor to a source
// node this way; recognising the objects themselves is what lets the session
// find its source without depending on which attribute GUID named it.
void attr_SetUnknown(X86 *c) {
    ComObj *self = com_this_arg(c);
    Guid k;
    if (!self || !attr_key(c, &k)) {
        com_ret(c, E_INVALIDARG);
        return;
    }
    uint32_t unk = arg(c, 2);
    AttrValue &v = attrs()[self->id].at(k);
    v.kind = AttrValue::UNK;
    v.unk = unk;
    if (self->kind == K_MF_TOPOLOGY_NODE) {
        NodeState &n = nodes()[self->id];
        if (ComObj *o = com_this(unk)) {
            if (o->kind == K_MF_MEDIA_SOURCE)
                n.source_obj = o->id;
            else if (o->kind == K_MF_PRESENTATION_DESCRIPTOR)
                n.pd_obj = o->id;
            else if (o->kind == K_MF_STREAM_DESCRIPTOR)
                n.sd_obj = o->id;
        }
    }
    com_ret(c, S_OK);
}
void attr_DeleteItem(X86 *c) {
    Attrs *a = attrs_arg(c);
    Guid k;
    if (a && attr_key(c, &k))
        for (size_t i = 0; i < a->items.size(); ++i)
            if (guid_eq(a->items[i].first, k)) {
                a->items.erase(a->items.begin() + (long)i);
                break;
            }
    com_ret(c, S_OK);
}
void attr_DeleteAllItems(X86 *c) {
    if (Attrs *a = attrs_arg(c))
        a->items.clear();
    com_ret(c, S_OK);
}
void attr_GetCount(X86 *c) {
    Attrs *a = attrs_arg(c);
    com_ret(c, put32(arg(c, 1), a ? (uint32_t)a->items.size() : 0u) ? S_OK : E_POINTER);
}

#define MF_ATTRIBUTE_SLOTS                                                                         \
    {"GetItem", 3, attr_GetItem}, {"GetItemType", 3, attr_GetItemType},                            \
        {"CompareItem", 4, attr_unimpl}, {"Compare", 4, attr_unimpl},                              \
        {"GetUINT32", 3, attr_GetUINT32}, {"GetUINT64", 3, attr_GetUINT64},                        \
        {"GetDouble", 3, attr_GetDouble}, {"GetGUID", 3, attr_GetGUID},                            \
        {"GetStringLength", 3, attr_GetStringLength}, {"GetString", 5, attr_GetString},            \
        {"GetAllocatedString", 4, attr_unimpl}, {"GetBlobSize", 3, attr_unimpl},                   \
        {"GetBlob", 5, attr_unimpl}, {"GetAllocatedBlob", 4, attr_unimpl},                         \
        {"GetUnknown", 4, attr_GetUnknown}, {"SetItem", 3, attr_unimpl},                           \
        {"DeleteItem", 2, attr_DeleteItem}, {"DeleteAllItems", 1, attr_DeleteAllItems},            \
        {"SetUINT32", 3, attr_SetUINT32}, {"SetUINT64", 4, attr_SetUINT64},                        \
        {"SetDouble", 4, attr_SetDouble}, {"SetGUID", 3, attr_SetGUID},                            \
        {"SetString", 3, attr_SetString}, {"SetBlob", 4, attr_unimpl},                             \
        {"SetUnknown", 3, attr_SetUnknown}, {"LockStore", 1, attr_ok},                             \
        {"UnlockStore", 1, attr_ok}, {"GetCount", 2, attr_GetCount},                               \
        {"GetItemByIndex", 4, attr_unimpl}, {                                                      \
        "CopyAllItems", 2, attr_unimpl                                                             \
    }

// ---------------------------------------------------------------------------
// Playback
// ---------------------------------------------------------------------------
void present_frame(SessionState &s, const mf::VideoFrame &f) {
    if (f.width <= 0 || f.height <= 0)
        return;
    if (f.argb.size() < (size_t)f.width * (size_t)f.height)
        return;
    // Present at the guest's own display mode, not the file's resolution. A
    // video renderer draws into the window it was handed, and the host maps
    // host pointer coordinates back through whatever was last presented - so a
    // frame of another size moves the cursor mapping as well as the picture,
    // and the smoke host asserts on it outright. The file's aspect is kept and
    // the remainder left black, which is what a renderer letterboxes to.
    uint32_t mw = 0, mh = 0, mbpp = 0;
    win32_display_mode(&mw, &mh, &mbpp);
    if (mw == 0 || mh == 0) {
        mw = (uint32_t)f.width;
        mh = (uint32_t)f.height;
    }
    const int dst_w = (int)mw, dst_h = (int)mh;
    int draw_w = dst_w, draw_h = (int)((int64_t)dst_w * f.height / f.width);
    if (draw_h > dst_h) {
        draw_h = dst_h;
        draw_w = (int)((int64_t)dst_h * f.width / f.height);
    }
    if (draw_w <= 0 || draw_h <= 0)
        return;
    const int ox = (dst_w - draw_w) / 2, oy = (dst_h - draw_h) / 2;
    s.screen.assign((size_t)dst_w * (size_t)dst_h, 0xff000000u);
    for (int y = 0; y < draw_h; ++y) {
        const int sy = (int)((int64_t)y * f.height / draw_h);
        const uint32_t *row = f.argb.data() + (size_t)sy * (size_t)f.width;
        uint32_t *dst = s.screen.data() + (size_t)(y + oy) * (size_t)dst_w + (size_t)ox;
        for (int x = 0; x < draw_w; ++x)
            dst[x] = 0xff000000u | row[(int)((int64_t)x * f.width / draw_w)];
    }
    if (mf_tracing()) {
        // What actually leaves for the host, after the fit: a black buffer here
        // means the conversion is wrong, a lit one means something presents
        // over it afterwards.
        static uint32_t sent = 0;
        if ((sent++ % 60) == 0) {
            size_t lit = 0;
            for (size_t i = 0, n = (size_t)dst_w * (size_t)dst_h; i < n; ++i)
                if ((s.screen[i] & 0x00ffffffu) != 0)
                    ++lit;
            MF_TRACE("mf: present %u %dx%d fit %dx%d at %d,%d lit=%.1f%%", sent, dst_w, dst_h,
                     draw_w, draw_h, ox, oy,
                     100.0 * (double)lit / (double)((size_t)dst_w * (size_t)dst_h));
        }
    }
    // Not host_present: that stages a guest-sized copy and leaves publishing
    // to the DirectDraw recorder's frame sealing, and during a movie the game
    // is not drawing, so nothing ever seals and the staged frames are never
    // shown - a black screen with the soundtrack playing over it. It also only
    // accepts 8 and 16bpp. This path stages RGBA and seals the frame itself,
    // which is what a renderer painting its own window does.
    host_display_present_window(s.screen.data(), dst_w, dst_h);
}

void audio_release(SessionState &s) {
    if (s.channel >= 0) {
        host_audio_stop(s.channel);
        dx_free_audio_channel(s.channel);
        s.channel = -1;
    }
    s.audio_started = false;
    s.pcm.clear();
    s.pcm_pos = 0;
}

// Start the stream on first PCM, then append, exactly as the other file
// players do: one host_audio_play, one conversion to a stream, and
// host_audio_queue for everything after it, so the joins are sample-accurate.
void feed_audio(SessionState &s, SourceState &src) {
    if (s.audio_unavailable || !src.media.has_audio())
        return;
    const int channels = src.media.audio_channels();
    const int rate = src.media.audio_rate();
    if (channels <= 0 || rate <= 0)
        return;
    const uint32_t block = (uint32_t)channels * 2;
    const uint32_t ahead = (uint32_t)rate * block; // one second
    while (s.audio_started ? host_audio_queued_bytes(s.channel) < ahead : true) {
        if (s.pcm_pos == s.pcm.size()) {
            std::vector<int16_t> more = src.media.take_audio();
            if (more.empty())
                return; // nothing decoded yet; the video pass will feed it
            s.pcm = std::move(more);
            s.pcm_pos = 0;
        }
        uint32_t bytes = (uint32_t)((s.pcm.size() - s.pcm_pos) * 2);
        if (!s.audio_started) {
            s.channel = dx_alloc_audio_channel();
            if (s.channel >= 0) {
                HostAudioPlay play{};
                play.channel = s.channel;
                play.pcm = s.pcm.data() + s.pcm_pos;
                play.bytes = bytes;
                play.sample_rate = rate;
                play.channels = channels;
                play.bits = 16;
                host_audio_play(&play);
                s.audio_started = host_audio_stream(s.channel) >= 0;
            }
            if (!s.audio_started) {
                LOGW("mf: host audio streaming unavailable; playing the video silently");
                s.audio_unavailable = true;
                audio_release(s);
                return;
            }
            s.pcm_pos += bytes / 2;
        } else {
            const uint32_t queued = host_audio_queued_bytes(s.channel);
            bytes = bytes < ahead - queued ? bytes : ahead - queued;
            bytes -= bytes % block;
            if (!bytes)
                return;
            int32_t taken = host_audio_queue(s.channel, s.pcm.data() + s.pcm_pos, bytes);
            if (taken <= 0)
                return;
            s.pcm_pos += (size_t)taken / 2;
        }
    }
}

uint32_t session_queue_event(SessionState &s, uint32_t type, uint32_t status) {
    ComObj *e = com_new(K_MF_MEDIA_EVENT);
    if (!e)
        return 0;
    attrs()[e->id] = Attrs{};
    events()[e->id] = EventState{type, status};
    // com_new hands back one reference and that one is the queue's; it goes
    // when the event leaves the queue for the player.
    s.queue.push_back(e->id);
    return e->id;
}

// Hands the player one queued event through the callback it armed. Real Media
// Foundation calls Invoke on a worker thread; here it runs on the guest thread
// that is pumping, which is the only thread allowed to enter guest code.
void session_deliver(X86 *c, SessionState &s) {
    if (s.delivering)
        return;
    s.delivering = true;
    while (s.armed && s.callback && !s.queue.empty()) {
        const uint32_t ev = s.queue.front();
        s.queue.pop_front();
        ComObj *res = com_new(K_MF_ASYNC_RESULT);
        if (!res)
            break;
        results()[res->id] = ResultState{ev, s.callback_state};
        s.armed = false; // one Invoke spends the arming; the player re-arms
        const uint32_t vtable = gm_valid(s.callback, 4) ? rd32(s.callback) : 0;
        MF_TRACE("mf: deliver event type=%u status=%08x", events()[ev].type, events()[ev].status);
        const uint32_t invoke = vtable && gm_valid(vtable + 16, 4) ? rd32(vtable + 16) : 0;
        const uint32_t view = com_view(res, IF_MF_ASYNC_RESULT);
        if (invoke && view)
            guest_call(c, invoke, s.callback, view);
        // The result existed for this one call. The event's queue reference
        // goes with it too: what the player took through EndGetEvent is what
        // keeps the event alive for as long as it holds it.
        com_release(res);
        if (ComObj *done = com_get(ev))
            com_release(done);
    }
    s.delivering = false;
}

// Decodes to the wall clock, presenting the newest frame that is due and
// holding the first one that is not.
void session_advance(SessionState &s) {
    SourceState *src = source_of(s.source_obj);
    if (!src || !src->opened) {
        static bool said = false;
        if (!said) {
            said = true;
            MF_TRACE("mf: nothing to play - source_obj=%u opened=%d", s.source_obj,
                     src ? (int)src->opened : -1);
        }
        return;
    }
    const double t = s.position + (now_seconds() - s.clock0);

    bool show = false;
    if (s.have_next && s.next.pts <= t) {
        s.cur = std::move(s.next);
        s.have_next = false;
        s.have_cur = show = true;
    }
    while (!s.have_next && !s.media_done && src->media.has_video()) {
        mf::VideoFrame f;
        if (!src->media.next_video(&f)) {
            s.media_done = true;
            break;
        }
        if (f.pts <= t) {
            s.cur = std::move(f);
            s.have_cur = show = true;
        } else {
            s.next = std::move(f);
            s.have_next = true;
        }
    }
    feed_audio(s, *src);
    if (!src->media.has_video()) {
        src->media.fill_audio((size_t)src->media.audio_rate());
        if (src->media.finished())
            s.media_done = true;
    }
    if (show && s.have_cur) {
        static uint32_t shown = 0;
        if ((shown++ % 60) == 0 && mf_tracing()) {
            // What the frame actually holds, so a black picture on screen can
            // be told apart from a black picture out of the decoder.
            size_t lit = 0;
            for (uint32_t px : s.cur.argb)
                if ((px & 0x00ffffffu) != 0)
                    ++lit;
            MF_TRACE("mf: frame %u pts=%.2f t=%.2f %dx%d lit=%.1f%%", shown, s.cur.pts, t,
                     (int)s.cur.width, (int)s.cur.height,
                     s.cur.argb.empty() ? 0.0 : 100.0 * (double)lit / (double)s.cur.argb.size());
        }
        present_frame(s, s.cur);
    }

    if (s.media_done && !s.ended_posted && !s.have_next) {
        const bool draining = s.audio_started && host_audio_queued_bytes(s.channel) > 0;
        if (!draining) {
            s.ended_posted = true;
            // MESessionEnded is a statement about the session, and a player is
            // entitled to ignore it - this one does, by name. What ends
            // playback is MEEndOfPresentation: the player stops the session
            // from its handler and posts its own "playback ended" message to
            // the window that owns the film. Without it the film reaches its
            // last frame and nothing happens: no Stop, no Close, and the game
            // waits for a message that is never sent, showing the black the
            // film faded to. Raise it first, as the presentation ending
            // precedes the session ending.
            session_queue_event(s, ME_END_OF_PRESENTATION, S_OK);
            session_queue_event(s, ME_SESSION_ENDED, S_OK);
        }
    }
}

} // namespace

// ---------------------------------------------------------------------------
// The frame pump: every live session advances and then delivers.
// ---------------------------------------------------------------------------
// True while a media session is on screen. A real video renderer owns its own
// window and the game's primary sits behind it; here there is a single screen,
// so the session holds it while it plays and hands it straight back when the
// file ends or playback stops. `have_cur` keeps the screen with the game until
// the first frame is actually ready, so nothing blanks while the file opens.
extern "C" bool mf_owns_the_screen() {
    bool owns = false;
    for (auto &kv : sessions()) {
        const SessionState &s = *kv.second;
        if (s.state == SessionState::RUNNING && !s.media_done && s.have_cur) {
            owns = true;
            break;
        }
    }
    if (mf_tracing()) {
        static uint32_t asked = 0, held = 0;
        ++asked;
        if (owns)
            ++held;
        if ((asked % 500) == 0)
            MF_TRACE("mf: screen asked %u held %u sessions %u", asked, held,
                     (unsigned)sessions().size());
    }
    return owns;
}

void mf_frame_pump(X86 *c) {
    for (auto &kv : sessions()) {
        SessionState &s = *kv.second;
        if (s.state == SessionState::RUNNING)
            session_advance(s);
        session_deliver(c, s);
    }
}

void mf_reset() {
    for (auto &kv : sessions())
        audio_release(*kv.second);
    sessions().clear();
    sources().clear();
    streams().clear();
    pds().clear();
    handler_stream().clear();
    nodes().clear();
    topologies().clear();
    events().clear();
    results().clear();
    attrs().clear();
}

namespace {

// ---------------------------------------------------------------------------
// IMFSourceResolver
// ---------------------------------------------------------------------------
ComObj *make_stream(ComObj *source, bool video, uint32_t id) {
    ComObj *sd = com_new(K_MF_STREAM_DESCRIPTOR);
    if (!sd)
        return nullptr;
    ComObj *handler = com_new(K_MF_MEDIA_TYPE_HANDLER);
    StreamState st;
    st.source_obj = source->id;
    st.video = video;
    st.stream_id = id;
    st.handler_obj = handler ? handler->id : 0;
    streams()[sd->id] = st;
    if (handler)
        handler_stream()[handler->id] = sd->id;
    return sd;
}

void SourceResolver_CreateObjectFromURL(X86 *c) {
    const uint32_t url = arg(c, 1), objtype = arg(c, 4), out = arg(c, 5);
    const std::string guest = wide_string(url);
    if (guest.empty()) {
        put32(out, 0);
        com_ret(c, E_INVALIDARG);
        return;
    }
    const std::string host = win32_host_path(guest, false);
    ComObj *src = com_new(K_MF_MEDIA_SOURCE);
    if (!src) {
        put32(out, 0);
        com_ret(c, E_OUTOFMEMORY);
        return;
    }
    auto state = std::make_unique<SourceState>();
    state->url = guest;
    state->host_path = host;
    std::string why;
    state->opened = state->media.open(host, &why);
    if (!state->opened) {
        LOGW("mf: %s could not be opened (%s)", guest.c_str(), why.c_str());
        com_destroy(src);
        put32(out, 0);
        com_ret(c, MF_E_UNSUPPORTED_BYTESTREAM_TYPE);
        return;
    }
    // The reference is taken before the move: moving the owning pointer does
    // not move what it points at, and reading the map back through a fresh
    // lookup is how the store got lost here once already.
    SourceState &opened = *state;
    sources()[src->id] = std::move(state);
    MF_TRACE("mf: opened %s (%s) %dx%d %.1fs video=%d audio=%d", guest.c_str(), host.c_str(),
             (int)opened.media.width(), (int)opened.media.height(), opened.media.duration(),
             (int)opened.media.has_video(), (int)opened.media.has_audio());
    put32(objtype, MF_OBJECT_MEDIASOURCE);
    out_view(c, out, src, IF_MF_MEDIA_SOURCE);
}

const ComMethod g_source_resolver[] = {
    MF_IUNKNOWN_SLOTS,
    {"CreateObjectFromURL", 6, SourceResolver_CreateObjectFromURL},
    {"CreateObjectFromByteStream", 7, attr_unimpl},
    {"BeginCreateObjectFromURL", 8, attr_unimpl},
    {"EndCreateObjectFromURL", 3, attr_unimpl},
    {"BeginCreateObjectFromByteStream", 9, attr_unimpl},
    {"EndCreateObjectFromByteStream", 3, attr_unimpl},
    {"CancelObjectCreation", 2, attr_unimpl},
};

// ---------------------------------------------------------------------------
// IMFMediaSource
// ---------------------------------------------------------------------------
void Source_CreatePresentationDescriptor(X86 *c) {
    ComObj *self = com_this_arg(c, IF_MF_MEDIA_SOURCE);
    SourceState *src = self ? source_of(self->id) : nullptr;
    if (!src) {
        com_ret(c, E_FAIL);
        return;
    }
    ComObj *pd = com_new(K_MF_PRESENTATION_DESCRIPTOR);
    if (!pd) {
        com_ret(c, E_OUTOFMEMORY);
        return;
    }
    PdState st;
    st.source_obj = self->id;
    uint32_t id = 1;
    if (src->media.has_video())
        if (ComObj *sd = make_stream(self, true, id++))
            st.stream_objs.push_back(sd->id);
    if (src->media.has_audio())
        if (ComObj *sd = make_stream(self, false, id++))
            st.stream_objs.push_back(sd->id);
    pds()[pd->id] = st;
    // The duration, in hundred-nanosecond units, is the one presentation
    // attribute a player reads before it starts.
    AttrValue &d = attrs()[pd->id].at(MF_PD_DURATION);
    d.kind = AttrValue::U64;
    d.u64 = (uint64_t)(src->media.duration() * 1e7);
    out_view(c, arg(c, 1), pd, IF_MF_PRESENTATION_DESCRIPTOR);
}
void Source_GetCharacteristics(X86 *c) {
    // MFMEDIASOURCE_CAN_PAUSE | CAN_SEEK
    com_ret(c, put32(arg(c, 1), 0x2u | 0x1u) ? S_OK : E_POINTER);
}
void Source_ok(X86 *c) {
    com_ret(c, S_OK);
}

const ComMethod g_media_source[] = {
    MF_IUNKNOWN_SLOTS,
    {"GetEvent", 3, attr_unimpl},
    {"BeginGetEvent", 3, Source_ok},
    {"EndGetEvent", 3, attr_unimpl},
    {"QueueEvent", 5, Source_ok},
    {"GetCharacteristics", 2, Source_GetCharacteristics},
    {"CreatePresentationDescriptor", 2, Source_CreatePresentationDescriptor},
    {"Start", 4, Source_ok},
    {"Stop", 1, Source_ok},
    {"Pause", 1, Source_ok},
    {"Shutdown", 1, Source_ok},
};

// ---------------------------------------------------------------------------
// IMFPresentationDescriptor and IMFStreamDescriptor
// ---------------------------------------------------------------------------
void Pd_GetStreamDescriptorCount(X86 *c) {
    ComObj *self = com_this_arg(c, IF_MF_PRESENTATION_DESCRIPTOR);
    const size_t n = self ? pds()[self->id].stream_objs.size() : 0;
    com_ret(c, put32(arg(c, 1), (uint32_t)n) ? S_OK : E_POINTER);
}
void Pd_GetStreamDescriptorByIndex(X86 *c) {
    ComObj *self = com_this_arg(c, IF_MF_PRESENTATION_DESCRIPTOR);
    if (!self) {
        com_ret(c, E_FAIL);
        return;
    }
    PdState &st = pds()[self->id];
    const uint32_t index = arg(c, 1);
    if (index >= st.stream_objs.size()) {
        com_ret(c, MF_E_INVALIDINDEX);
        return;
    }
    ComObj *sd = com_get(st.stream_objs[index]);
    put32(arg(c, 2), streams()[st.stream_objs[index]].selected ? 1u : 0u);
    out_view(c, arg(c, 3), sd, IF_MF_STREAM_DESCRIPTOR);
}
void Pd_SelectStream(X86 *c) {
    ComObj *self = com_this_arg(c, IF_MF_PRESENTATION_DESCRIPTOR);
    if (!self) {
        com_ret(c, E_FAIL);
        return;
    }
    PdState &st = pds()[self->id];
    const uint32_t index = arg(c, 1);
    if (index >= st.stream_objs.size()) {
        com_ret(c, MF_E_INVALIDINDEX);
        return;
    }
    streams()[st.stream_objs[index]].selected = true;
    com_ret(c, S_OK);
}
void Pd_DeselectStream(X86 *c) {
    ComObj *self = com_this_arg(c, IF_MF_PRESENTATION_DESCRIPTOR);
    if (!self) {
        com_ret(c, E_FAIL);
        return;
    }
    PdState &st = pds()[self->id];
    const uint32_t index = arg(c, 1);
    if (index >= st.stream_objs.size()) {
        com_ret(c, MF_E_INVALIDINDEX);
        return;
    }
    streams()[st.stream_objs[index]].selected = false;
    com_ret(c, S_OK);
}

const ComMethod g_presentation_descriptor[] = {
    MF_IUNKNOWN_SLOTS,
    MF_ATTRIBUTE_SLOTS,
    {"GetStreamDescriptorCount", 2, Pd_GetStreamDescriptorCount},
    {"GetStreamDescriptorByIndex", 4, Pd_GetStreamDescriptorByIndex},
    {"SelectStream", 2, Pd_SelectStream},
    {"DeselectStream", 2, Pd_DeselectStream},
    {"Clone", 2, attr_unimpl},
};

void Sd_GetStreamIdentifier(X86 *c) {
    ComObj *self = com_this_arg(c, IF_MF_STREAM_DESCRIPTOR);
    com_ret(c, put32(arg(c, 1), self ? streams()[self->id].stream_id : 0u) ? S_OK : E_POINTER);
}
void Sd_GetMediaTypeHandler(X86 *c) {
    ComObj *self = com_this_arg(c, IF_MF_STREAM_DESCRIPTOR);
    ComObj *h = self ? com_get(streams()[self->id].handler_obj) : nullptr;
    out_view(c, arg(c, 1), h, IF_MF_MEDIA_TYPE_HANDLER);
}

const ComMethod g_stream_descriptor[] = {
    MF_IUNKNOWN_SLOTS,
    MF_ATTRIBUTE_SLOTS,
    {"GetStreamIdentifier", 2, Sd_GetStreamIdentifier},
    {"GetMediaTypeHandler", 2, Sd_GetMediaTypeHandler},
};

// ---------------------------------------------------------------------------
// IMFMediaTypeHandler and IMFMediaType
// ---------------------------------------------------------------------------
bool stream_is_video(ComObj *o) {
    auto it = handler_stream().find(o->id);
    if (it == handler_stream().end())
        return false;
    return streams()[it->second].video;
}
void write_major_type(X86 *c, bool video, uint32_t out) {
    if (!out || !gm_valid(out, 16)) {
        com_ret(c, E_POINTER);
        return;
    }
    memcpy(gm_ptr(out), video ? MFMediaType_Video.b : MFMediaType_Audio.b, 16);
    com_ret(c, S_OK);
}
void Handler_GetMajorType(X86 *c) {
    ComObj *self = com_this_arg(c, IF_MF_MEDIA_TYPE_HANDLER);
    if (!self) {
        com_ret(c, E_FAIL);
        return;
    }
    write_major_type(c, stream_is_video(self), arg(c, 1));
}
void Handler_GetMediaTypeCount(X86 *c) {
    com_ret(c, put32(arg(c, 1), 1u) ? S_OK : E_POINTER);
}
void Handler_GetCurrentMediaType(X86 *c) {
    ComObj *self = com_this_arg(c, IF_MF_MEDIA_TYPE_HANDLER);
    if (!self) {
        com_ret(c, E_FAIL);
        return;
    }
    ComObj *mt = com_new(K_MF_MEDIA_TYPE);
    if (!mt) {
        com_ret(c, E_OUTOFMEMORY);
        return;
    }
    handler_stream()[mt->id] = handler_stream()[self->id];
    out_view(c, arg(c, 1), mt, IF_MF_MEDIA_TYPE);
}
void Handler_GetMediaTypeByIndex(X86 *c) {
    ComObj *self = com_this_arg(c, IF_MF_MEDIA_TYPE_HANDLER);
    if (!self || arg(c, 1) != 0) {
        com_ret(c, self ? MF_E_INVALIDINDEX : E_FAIL);
        return;
    }
    ComObj *mt = com_new(K_MF_MEDIA_TYPE);
    if (!mt) {
        com_ret(c, E_OUTOFMEMORY);
        return;
    }
    handler_stream()[mt->id] = handler_stream()[self->id];
    out_view(c, arg(c, 2), mt, IF_MF_MEDIA_TYPE);
}

const ComMethod g_media_type_handler[] = {
    MF_IUNKNOWN_SLOTS,
    {"IsMediaTypeSupported", 3, attr_ok},
    {"GetMediaTypeCount", 2, Handler_GetMediaTypeCount},
    {"GetMediaTypeByIndex", 3, Handler_GetMediaTypeByIndex},
    {"SetCurrentMediaType", 2, attr_ok},
    {"GetCurrentMediaType", 2, Handler_GetCurrentMediaType},
    {"GetMajorType", 2, Handler_GetMajorType},
};

void MediaType_GetMajorType(X86 *c) {
    ComObj *self = com_this_arg(c, IF_MF_MEDIA_TYPE);
    if (!self) {
        com_ret(c, E_FAIL);
        return;
    }
    write_major_type(c, stream_is_video(self), arg(c, 1));
}

const ComMethod g_media_type[] = {
    MF_IUNKNOWN_SLOTS,
    MF_ATTRIBUTE_SLOTS,
    {"GetMajorType", 2, MediaType_GetMajorType},
    {"IsCompressedFormat", 2, attr_unimpl},
    {"IsEqual", 3, attr_unimpl},
    {"GetRepresentation", 4, attr_unimpl},
    {"FreeRepresentation", 3, attr_unimpl},
};

// ---------------------------------------------------------------------------
// IMFTopology and IMFTopologyNode
// ---------------------------------------------------------------------------
void Topology_AddNode(X86 *c) {
    ComObj *self = com_this_arg(c, IF_MF_TOPOLOGY);
    ComObj *node = com_this(arg(c, 1), IF_MF_TOPOLOGY_NODE);
    if (!self || !node) {
        com_ret(c, E_INVALIDARG);
        return;
    }
    topologies()[self->id].push_back(node->id);
    com_addref(node);
    com_ret(c, S_OK);
}
void Topology_GetNodeCount(X86 *c) {
    ComObj *self = com_this_arg(c, IF_MF_TOPOLOGY);
    com_ret(c, put32(arg(c, 1), self ? (uint32_t)topologies()[self->id].size() : 0u) ? S_OK
                                                                                     : E_POINTER);
}
void Topology_GetNode(X86 *c) {
    ComObj *self = com_this_arg(c, IF_MF_TOPOLOGY);
    if (!self) {
        com_ret(c, E_FAIL);
        return;
    }
    auto &list = topologies()[self->id];
    const uint32_t index = arg(c, 1);
    if (index >= list.size()) {
        com_ret(c, MF_E_INVALIDINDEX);
        return;
    }
    out_view(c, arg(c, 2), com_get(list[index]), IF_MF_TOPOLOGY_NODE);
}
void Topology_Clear(X86 *c) {
    ComObj *self = com_this_arg(c, IF_MF_TOPOLOGY);
    if (self)
        topologies()[self->id].clear();
    com_ret(c, S_OK);
}
void Topology_GetTopologyID(X86 *c) {
    ComObj *self = com_this_arg(c, IF_MF_TOPOLOGY);
    com_ret(c, put64(arg(c, 1), self ? self->id : 0u) ? S_OK : E_POINTER);
}

const ComMethod g_topology[] = {
    MF_IUNKNOWN_SLOTS,
    MF_ATTRIBUTE_SLOTS,
    {"GetTopologyID", 2, Topology_GetTopologyID},
    {"AddNode", 2, Topology_AddNode},
    {"RemoveNode", 2, attr_ok},
    {"GetNodeCount", 2, Topology_GetNodeCount},
    {"GetNode", 3, Topology_GetNode},
    {"Clear", 1, Topology_Clear},
    {"CloneFrom", 2, attr_unimpl},
    {"GetNodeByID", 3, attr_unimpl},
    {"GetSourceNodeCollection", 2, attr_unimpl},
    {"GetOutputNodeCollection", 2, attr_unimpl},
};

void Node_SetObject(X86 *c) {
    ComObj *self = com_this_arg(c, IF_MF_TOPOLOGY_NODE);
    if (!self) {
        com_ret(c, E_FAIL);
        return;
    }
    nodes()[self->id].object_view = arg(c, 1);
    com_ret(c, S_OK);
}
void Node_GetObject(X86 *c) {
    ComObj *self = com_this_arg(c, IF_MF_TOPOLOGY_NODE);
    const uint32_t v = self ? nodes()[self->id].object_view : 0;
    if (!v) {
        put32(arg(c, 1), 0);
        com_ret(c, E_FAIL);
        return;
    }
    if (ComObj *o = com_this(v))
        com_addref(o);
    com_ret(c, put32(arg(c, 1), v) ? S_OK : E_POINTER);
}
void Node_GetNodeType(X86 *c) {
    ComObj *self = com_this_arg(c, IF_MF_TOPOLOGY_NODE);
    com_ret(c, put32(arg(c, 1), self ? nodes()[self->id].node_type : 0u) ? S_OK : E_POINTER);
}
void Node_GetTopoNodeID(X86 *c) {
    ComObj *self = com_this_arg(c, IF_MF_TOPOLOGY_NODE);
    com_ret(c, put64(arg(c, 1), self ? nodes()[self->id].id : 0ull) ? S_OK : E_POINTER);
}
void Node_SetTopoNodeID(X86 *c) {
    ComObj *self = com_this_arg(c, IF_MF_TOPOLOGY_NODE);
    if (self)
        nodes()[self->id].id = (uint64_t)arg(c, 1) | ((uint64_t)arg(c, 2) << 32);
    com_ret(c, S_OK);
}
void Node_count_one(X86 *c) {
    com_ret(c, put32(arg(c, 1), 1u) ? S_OK : E_POINTER);
}

const ComMethod g_topology_node[] = {
    MF_IUNKNOWN_SLOTS,
    MF_ATTRIBUTE_SLOTS,
    {"SetObject", 2, Node_SetObject},
    {"GetObject", 2, Node_GetObject},
    {"GetNodeType", 2, Node_GetNodeType},
    {"GetTopoNodeID", 2, Node_GetTopoNodeID},
    {"SetTopoNodeID", 3, Node_SetTopoNodeID},
    {"GetInputCount", 2, Node_count_one},
    {"GetOutputCount", 2, Node_count_one},
    {"ConnectOutput", 4, attr_ok},
    {"DisconnectOutput", 2, attr_ok},
    {"GetInput", 4, attr_unimpl},
    {"GetOutput", 4, attr_unimpl},
    {"SetOutputPrefType", 3, attr_ok},
    {"GetOutputPrefType", 3, attr_unimpl},
    {"SetInputPrefType", 3, attr_ok},
    {"GetInputPrefType", 3, attr_unimpl},
    {"CloneFrom", 2, attr_unimpl},
};

// ---------------------------------------------------------------------------
// IMFActivate. A renderer is a name here: the session presents and plays.
// ---------------------------------------------------------------------------
void Activate_ActivateObject(X86 *c) {
    ComObj *self = com_this_arg(c, IF_MF_ACTIVATE);
    out_view(c, arg(c, 2), self, IF_MF_ACTIVATE);
}
const ComMethod g_activate[] = {
    MF_IUNKNOWN_SLOTS,
    MF_ATTRIBUTE_SLOTS,
    {"ActivateObject", 3, Activate_ActivateObject},
    {"ShutdownObject", 1, attr_ok},
    {"DetachObject", 1, attr_ok},
};

// ---------------------------------------------------------------------------
// IMFMediaEvent and IMFAsyncResult
// ---------------------------------------------------------------------------
void Event_GetType(X86 *c) {
    ComObj *self = com_this_arg(c, IF_MF_MEDIA_EVENT);
    com_ret(c, put32(arg(c, 1), self ? events()[self->id].type : 0u) ? S_OK : E_POINTER);
}
void Event_GetStatus(X86 *c) {
    ComObj *self = com_this_arg(c, IF_MF_MEDIA_EVENT);
    com_ret(c, put32(arg(c, 1), self ? events()[self->id].status : (uint32_t)E_FAIL) ? S_OK
                                                                                     : E_POINTER);
}
void Event_GetExtendedType(X86 *c) {
    const uint32_t out = arg(c, 1);
    if (!out || !gm_valid(out, 16)) {
        com_ret(c, E_POINTER);
        return;
    }
    memset(gm_ptr(out), 0, 16); // GUID_NULL: no extended type
    com_ret(c, S_OK);
}
// The value is a PROPVARIANT. Nothing the player reads carries one, so this
// clears it to VT_EMPTY rather than inventing a payload.
void Event_GetValue(X86 *c) {
    const uint32_t out = arg(c, 1);
    if (!out || !gm_valid(out, 16)) {
        com_ret(c, E_POINTER);
        return;
    }
    memset(gm_ptr(out), 0, 16);
    com_ret(c, S_OK);
}

const ComMethod g_media_event[] = {
    MF_IUNKNOWN_SLOTS,
    MF_ATTRIBUTE_SLOTS,
    {"GetType", 2, Event_GetType},
    {"GetExtendedType", 2, Event_GetExtendedType},
    {"GetStatus", 2, Event_GetStatus},
    {"GetValue", 2, Event_GetValue},
};

void Result_GetState(X86 *c) {
    ComObj *self = com_this_arg(c, IF_MF_ASYNC_RESULT);
    const uint32_t st = self ? results()[self->id].state_unk : 0;
    if (!st) {
        put32(arg(c, 1), 0);
        com_ret(c, E_POINTER);
        return;
    }
    com_ret(c, put32(arg(c, 1), st) ? S_OK : E_POINTER);
}
void Result_GetStatus(X86 *c) {
    com_ret(c, S_OK);
}
void Result_GetObject(X86 *c) {
    ComObj *self = com_this_arg(c, IF_MF_ASYNC_RESULT);
    ComObj *e = self ? com_get(results()[self->id].event_obj) : nullptr;
    out_view(c, arg(c, 1), e, IF_MF_MEDIA_EVENT);
}
void Result_GetStateNoAddRef(X86 *c) {
    ComObj *self = com_this_arg(c, IF_MF_ASYNC_RESULT);
    set_eax(c, self ? results()[self->id].state_unk : 0u);
}

const ComMethod g_async_result[] = {
    MF_IUNKNOWN_SLOTS,
    {"GetState", 2, Result_GetState},
    {"GetStatus", 1, Result_GetStatus},
    {"SetStatus", 2, attr_ok},
    {"GetObject", 2, Result_GetObject},
    {"GetStateNoAddRef", 1, Result_GetStateNoAddRef},
};

// ---------------------------------------------------------------------------
// IMFMediaSession
// ---------------------------------------------------------------------------
SessionState *session_arg(X86 *c, ComObj **obj = nullptr) {
    ComObj *self = com_this_arg(c);
    if (obj)
        *obj = self;
    if (!self || self->kind != K_MF_MEDIA_SESSION)
        return nullptr;
    return session_of(self->id);
}

void Session_BeginGetEvent(X86 *c) {
    SessionState *s = session_arg(c);
    if (!s) {
        com_ret(c, E_FAIL);
        return;
    }
    s->callback = arg(c, 1);
    s->callback_state = arg(c, 2);
    s->armed = true;
    com_ret(c, S_OK);
}
void Session_EndGetEvent(X86 *c) {
    SessionState *s = session_arg(c);
    ComObj *res = com_this(arg(c, 1), IF_MF_ASYNC_RESULT);
    if (!s || !res) {
        com_ret(c, E_INVALIDARG);
        return;
    }
    ComObj *e = com_get(results()[res->id].event_obj);
    if (!e) {
        com_ret(c, MF_E_NO_EVENTS_AVAILABLE);
        return;
    }
    out_view(c, arg(c, 2), e, IF_MF_MEDIA_EVENT);
}
void Session_GetEvent(X86 *c) {
    SessionState *s = session_arg(c);
    if (!s || s->queue.empty()) {
        com_ret(c, s ? MF_E_NO_EVENTS_AVAILABLE : E_FAIL);
        return;
    }
    ComObj *e = com_get(s->queue.front());
    s->queue.pop_front();
    out_view(c, arg(c, 2), e, IF_MF_MEDIA_EVENT); // takes its own reference
    if (e)
        com_release(e); // and the queue drops hers
}
void Session_QueueEvent(X86 *c) {
    SessionState *s = session_arg(c);
    if (s)
        session_queue_event(*s, arg(c, 1), arg(c, 3));
    com_ret(c, S_OK);
}

void Session_SetTopology(X86 *c) {
    SessionState *s = session_arg(c);
    ComObj *topo = com_this(arg(c, 2), IF_MF_TOPOLOGY);
    if (!s) {
        com_ret(c, E_FAIL);
        return;
    }
    s->source_obj = 0;
    if (topo) {
        s->topology_obj = topo->id;
        for (uint32_t node_id : topologies()[topo->id]) {
            const NodeState &n = nodes()[node_id];
            if (n.source_obj) {
                s->source_obj = n.source_obj;
                break;
            }
        }
    }
    // A topology with no source is one the player built wrongly, and saying so
    // through the event is what it is watching for.
    MF_TRACE("mf: SetTopology topology=%u nodes=%u source=%u", topo ? topo->id : 0u,
             topo ? (unsigned)topologies()[topo->id].size() : 0u, s->source_obj);
    session_queue_event(*s, ME_SESSION_TOPOLOGY_SET, s->source_obj ? S_OK : E_FAIL);
    // Setting the topology is not the same statement as the topology being
    // ready to render, and a player waits for the second one: it asks for
    // IMFVideoDisplayControl, calls SetVideoWindow and sizes the video only
    // from this event's handler, then calls straight through the interface it
    // stored. Without the event that field is never assigned, and the first
    // repaint calls a nil interface - which is a fault in the player's own
    // code, reached only because this layer never said the topology was ready.
    if (s->source_obj)
        if (uint32_t ev = session_queue_event(*s, ME_SESSION_TOPOLOGY_STATUS, S_OK))
            attrs()[ev].at(MF_EVENT_TOPOLOGY_STATUS).u32 = MF_TOPOSTATUS_READY;
    com_ret(c, S_OK);
}
void Session_ClearTopologies(X86 *c) {
    SessionState *s = session_arg(c);
    if (!s) {
        com_ret(c, E_FAIL);
        return;
    }
    s->topology_obj = 0;
    session_queue_event(*s, ME_SESSION_TOPOLOGIES_CLEARED, S_OK);
    com_ret(c, S_OK);
}
void Session_Start(X86 *c) {
    SessionState *s = session_arg(c);
    if (!s) {
        com_ret(c, E_FAIL);
        return;
    }
    if (s->state != SessionState::PAUSED) {
        s->position = 0;
        s->media_done = s->ended_posted = false;
        s->have_cur = s->have_next = false;
    }
    s->clock0 = now_seconds();
    s->state = SessionState::RUNNING;
    MF_TRACE("mf: Start source=%u position=%.2f", s->source_obj, s->position);
    session_queue_event(*s, ME_SESSION_STARTED, S_OK);
    com_ret(c, S_OK);
}
void Session_Pause(X86 *c) {
    SessionState *s = session_arg(c);
    if (!s) {
        com_ret(c, E_FAIL);
        return;
    }
    if (s->state == SessionState::RUNNING) {
        s->position += now_seconds() - s->clock0;
        s->state = SessionState::PAUSED;
        if (s->audio_started)
            host_audio_stop(s->channel);
        s->audio_started = false;
    }
    session_queue_event(*s, ME_SESSION_PAUSED, S_OK);
    com_ret(c, S_OK);
}
void Session_Stop(X86 *c) {
    SessionState *s = session_arg(c);
    if (!s) {
        com_ret(c, E_FAIL);
        return;
    }
    s->state = SessionState::STOPPED;
    s->position = 0;
    audio_release(*s);
    session_queue_event(*s, ME_SESSION_STOPPED, S_OK);
    com_ret(c, S_OK);
}
// Close is the one a player blocks on: it waits for MESessionClosed on an
// event it sets from its own Invoke. The frame pump cannot run while that
// wait holds the guest thread, so the event is delivered here, before Close
// returns, rather than queued for a pump that will not come.
void Session_Close(X86 *c) {
    SessionState *s = session_arg(c);
    if (!s) {
        com_ret(c, E_FAIL);
        return;
    }
    s->state = SessionState::CLOSED;
    audio_release(*s);
    session_queue_event(*s, ME_SESSION_CLOSED, S_OK);
    session_deliver(c, *s);
    com_ret(c, S_OK);
}
void Session_Shutdown(X86 *c) {
    SessionState *s = session_arg(c);
    if (!s) {
        com_ret(c, E_FAIL);
        return;
    }
    s->state = SessionState::SHUTDOWN;
    audio_release(*s);
    s->queue.clear();
    s->callback = 0;
    s->armed = false;
    com_ret(c, S_OK);
}
void Session_GetClock(X86 *c) {
    SessionState *s = session_arg(c);
    if (!s) {
        com_ret(c, E_FAIL);
        return;
    }
    if (!s->clock_obj) {
        if (ComObj *clk = com_new(K_MF_CLOCK))
            s->clock_obj = clk->id;
    }
    out_view(c, arg(c, 1), com_get(s->clock_obj), IF_MF_CLOCK);
}
void Session_GetSessionCapabilities(X86 *c) {
    SessionState *s = session_arg(c);
    com_ret(c, put32(arg(c, 1), s ? kSessionCaps : 0u) ? S_OK : E_POINTER);
}

const ComMethod g_media_session[] = {
    MF_IUNKNOWN_SLOTS,
    {"GetEvent", 3, Session_GetEvent},
    {"BeginGetEvent", 3, Session_BeginGetEvent},
    {"EndGetEvent", 3, Session_EndGetEvent},
    {"QueueEvent", 5, Session_QueueEvent},
    {"SetTopology", 3, Session_SetTopology},
    {"ClearTopologies", 1, Session_ClearTopologies},
    {"Start", 3, Session_Start},
    {"Pause", 1, Session_Pause},
    {"Stop", 1, Session_Stop},
    {"Close", 1, Session_Close},
    {"Shutdown", 1, Session_Shutdown},
    {"GetClock", 2, Session_GetClock},
    {"GetSessionCapabilities", 2, Session_GetSessionCapabilities},
    {"GetFullTopology", 5, attr_unimpl},
};

// ---------------------------------------------------------------------------
// The clock, the video window and the volume: what MFGetService hands out.
// ---------------------------------------------------------------------------
SessionState *owning_session(ComObj *o) {
    for (auto &kv : sessions())
        if (kv.second->clock_obj == o->id || kv.second->video_obj == o->id ||
            kv.second->volume_obj == o->id)
            return kv.second.get();
    return nullptr;
}
uint64_t clock_time_hns(ComObj *o) {
    SessionState *s = owning_session(o);
    if (!s)
        return 0;
    double t = s->position;
    if (s->state == SessionState::RUNNING)
        t += now_seconds() - s->clock0;
    return (uint64_t)(t * 1e7);
}
void Clock_GetTime(X86 *c) {
    ComObj *self = com_this_arg(c);
    com_ret(c, put64(arg(c, 1), self ? clock_time_hns(self) : 0ull) ? S_OK : E_POINTER);
}
void Clock_GetCorrelatedTime(X86 *c) {
    ComObj *self = com_this_arg(c);
    const uint64_t t = self ? clock_time_hns(self) : 0;
    com_ret(c, put64(arg(c, 2), t) && put64(arg(c, 3), t) ? S_OK : E_POINTER);
}
void Clock_GetState(X86 *c) {
    ComObj *self = com_this_arg(c);
    SessionState *s = self ? owning_session(self) : nullptr;
    // MFCLOCK_STATE: INVALID 0, RUNNING 1, STOPPED 2, PAUSED 3.
    uint32_t st = 2;
    if (s && s->state == SessionState::RUNNING)
        st = 1;
    else if (s && s->state == SessionState::PAUSED)
        st = 3;
    com_ret(c, put32(arg(c, 2), st) ? S_OK : E_POINTER);
}
void Clock_GetCharacteristics(X86 *c) {
    // FREQUENCY_10MHZ | ALWAYS_RUNNING | IS_SYSTEM_CLOCK
    com_ret(c, put32(arg(c, 1), 0x2u | 0x4u | 0x8u) ? S_OK : E_POINTER);
}

const ComMethod g_clock[] = {
    MF_IUNKNOWN_SLOTS,
    {"GetClockCharacteristics", 2, Clock_GetCharacteristics},
    {"GetCorrelatedTime", 4, Clock_GetCorrelatedTime},
    {"GetContinuityKey", 2, Node_count_one},
    {"GetState", 3, Clock_GetState},
    {"GetProperties", 2, attr_unimpl},
    // IMFPresentationClock continues the same vtable.
    {"SetTimeSource", 2, attr_ok},
    {"GetTimeSource", 2, attr_unimpl},
    {"GetTime", 2, Clock_GetTime},
    {"AddClockStateSink", 2, attr_ok},
    {"RemoveClockStateSink", 2, attr_ok},
    {"Start", 3, attr_ok},
    {"Stop", 1, attr_ok},
    {"Pause", 1, attr_ok},
};

void Video_SetVideoWindow(X86 *c) {
    ComObj *self = com_this_arg(c, IF_MF_VIDEO_DISPLAY);
    SessionState *s = self ? owning_session(self) : nullptr;
    if (s)
        s->hwnd = arg(c, 1);
    com_ret(c, S_OK);
}
void Video_GetVideoWindow(X86 *c) {
    ComObj *self = com_this_arg(c, IF_MF_VIDEO_DISPLAY);
    SessionState *s = self ? owning_session(self) : nullptr;
    com_ret(c, put32(arg(c, 1), s ? s->hwnd : 0u) ? S_OK : E_POINTER);
}
void Video_GetNativeVideoSize(X86 *c) {
    ComObj *self = com_this_arg(c, IF_MF_VIDEO_DISPLAY);
    SessionState *s = self ? owning_session(self) : nullptr;
    SourceState *src = s ? source_of(s->source_obj) : nullptr;
    const uint32_t w = src ? (uint32_t)src->media.width() : 0;
    const uint32_t h = src ? (uint32_t)src->media.height() : 0;
    // Both out-parameters are optional SIZE structures.
    if (uint32_t sz = arg(c, 1))
        if (gm_valid(sz, 8)) {
            wr32(sz, w);
            wr32(sz + 4, h);
        }
    if (uint32_t ar = arg(c, 2))
        if (gm_valid(ar, 8)) {
            wr32(ar, w);
            wr32(ar + 4, h);
        }
    com_ret(c, S_OK);
}

const ComMethod g_video_display[] = {
    MF_IUNKNOWN_SLOTS,
    {"GetNativeVideoSize", 3, Video_GetNativeVideoSize},
    {"GetIdealVideoSize", 3, Video_GetNativeVideoSize},
    {"SetVideoPosition", 3, attr_ok},
    {"GetVideoPosition", 3, attr_unimpl},
    {"SetAspectRatioMode", 2, attr_ok},
    {"GetAspectRatioMode", 2, attr_unimpl},
    {"SetVideoWindow", 2, Video_SetVideoWindow},
    {"GetVideoWindow", 2, Video_GetVideoWindow},
    {"RepaintVideo", 1, attr_ok},
    {"GetCurrentImage", 5, attr_unimpl},
    {"SetBorderColor", 2, attr_ok},
    {"GetBorderColor", 2, attr_unimpl},
    {"SetRenderingPrefs", 2, attr_ok},
    {"GetRenderingPrefs", 2, attr_unimpl},
    {"SetFullscreen", 2, attr_ok},
    {"GetFullscreen", 2, attr_unimpl},
};

void Volume_GetChannelCount(X86 *c) {
    ComObj *self = com_this_arg(c, IF_MF_AUDIO_VOLUME);
    SessionState *s = self ? owning_session(self) : nullptr;
    SourceState *src = s ? source_of(s->source_obj) : nullptr;
    com_ret(c,
            put32(arg(c, 1), src ? (uint32_t)src->media.audio_channels() : 2u) ? S_OK : E_POINTER);
}
// The level arrives as a float in 0..1; the host takes hundredths of a dB.
void Volume_SetAllVolumes(X86 *c) {
    ComObj *self = com_this_arg(c, IF_MF_AUDIO_VOLUME);
    SessionState *s = self ? owning_session(self) : nullptr;
    const uint32_t bits = arg(c, 2) ? (gm_valid(arg(c, 2), 4) ? rd32(arg(c, 2)) : 0) : 0;
    float level = 1.0f;
    memcpy(&level, &bits, 4);
    if (s && s->channel >= 0) {
        if (level <= 0.0f)
            host_audio_set_volume(s->channel, -10000);
        else
            host_audio_set_volume(s->channel, (int32_t)(2000.0 * log10((double)level)));
    }
    com_ret(c, S_OK);
}

const ComMethod g_audio_volume[] = {
    MF_IUNKNOWN_SLOTS,
    {"GetChannelCount", 2, Volume_GetChannelCount},
    {"SetChannelVolume", 3, attr_ok},
    {"GetChannelVolume", 3, attr_unimpl},
    {"SetAllVolumes", 3, Volume_SetAllVolumes},
    {"GetAllVolumes", 3, attr_unimpl},
};

void GetService_GetService(X86 *c);
const ComMethod g_get_service[] = {
    MF_IUNKNOWN_SLOTS,
    {"GetService", 4, GetService_GetService},
};

// ---------------------------------------------------------------------------
// The exported factories
// ---------------------------------------------------------------------------
void factory_fail(X86 *c, uint32_t out, uint32_t hr) {
    put32(out, 0);
    set_eax(c, hr);
}

void MFCreateSourceResolver(X86 *c) {
    ComObj *o = com_new(K_MF_SOURCE_RESOLVER);
    if (!o) {
        factory_fail(c, arg(c, 0), E_OUTOFMEMORY);
        return;
    }
    out_view(c, arg(c, 0), o, IF_MF_SOURCE_RESOLVER);
}
void MFCreateTopology(X86 *c) {
    ComObj *o = com_new(K_MF_TOPOLOGY);
    if (!o) {
        factory_fail(c, arg(c, 0), E_OUTOFMEMORY);
        return;
    }
    topologies()[o->id] = {};
    out_view(c, arg(c, 0), o, IF_MF_TOPOLOGY);
}
void MFCreateTopologyNode(X86 *c) {
    ComObj *o = com_new(K_MF_TOPOLOGY_NODE);
    if (!o) {
        factory_fail(c, arg(c, 1), E_OUTOFMEMORY);
        return;
    }
    NodeState n;
    n.node_type = arg(c, 0);
    n.id = o->id;
    nodes()[o->id] = n;
    out_view(c, arg(c, 1), o, IF_MF_TOPOLOGY_NODE);
}
void MFCreateAudioRendererActivate(X86 *c) {
    ComObj *o = com_new(K_MF_ACTIVATE);
    if (!o) {
        factory_fail(c, arg(c, 0), E_OUTOFMEMORY);
        return;
    }
    out_view(c, arg(c, 0), o, IF_MF_ACTIVATE);
}
void MFCreateVideoRendererActivate(X86 *c) {
    ComObj *o = com_new(K_MF_ACTIVATE);
    if (!o) {
        factory_fail(c, arg(c, 1), E_OUTOFMEMORY);
        return;
    }
    // The window the renderer was asked to draw into. The presenter owns the
    // screen here, so it is recorded for GetVideoWindow and nothing else.
    AttrValue &v = attrs()[o->id].at(IID_IUnknown);
    v.kind = AttrValue::U32;
    v.u32 = arg(c, 0);
    out_view(c, arg(c, 1), o, IF_MF_ACTIVATE);
}
void MFCreateMediaSession(X86 *c) {
    ComObj *o = com_new(K_MF_MEDIA_SESSION);
    if (!o) {
        factory_fail(c, arg(c, 1), E_OUTOFMEMORY);
        return;
    }
    sessions()[o->id] = std::make_unique<SessionState>();
    out_view(c, arg(c, 1), o, IF_MF_MEDIA_SESSION);
}

// MFGetService(punkObject, guidService, riid, ppvObject) and the identical
// IMFGetService::GetService, which is the same request made through the
// session itself.
void get_service(X86 *c, ComObj *on, uint32_t service_guid, uint32_t riid, uint32_t out) {
    SessionState *s = on && on->kind == K_MF_MEDIA_SESSION ? session_of(on->id) : nullptr;
    Guid service{}, want{};
    const bool read_ok = guid_read(service_guid, &service) && guid_read(riid, &want);
    // A player stores whatever this returns and calls through it later, so a
    // refusal here surfaces as a null call somewhere else entirely. Name the
    // object the request was actually made on.
    MF_TRACE("mf: GetService kind=%d session=%s service=%08x iid=%08x", on ? (int)on->kind : -1,
             s ? "yes" : "NO", read_ok ? guid_tag(service) : 0u, read_ok ? guid_tag(want) : 0u);
    if (!s || !read_ok) {
        factory_fail(c, out, E_INVALIDARG);
        return;
    }
    if (guid_eq(service, MR_VIDEO_RENDER_SERVICE) && guid_eq(want, IID_IMFVideoDisplayControl)) {
        if (!s->video_obj)
            if (ComObj *v = com_new(K_MF_VIDEO_DISPLAY))
                s->video_obj = v->id;
        out_view(c, out, com_get(s->video_obj), IF_MF_VIDEO_DISPLAY);
        return;
    }
    if (guid_eq(service, MR_STREAM_VOLUME_SERVICE) && guid_eq(want, IID_IMFAudioStreamVolume)) {
        if (!s->volume_obj)
            if (ComObj *v = com_new(K_MF_AUDIO_VOLUME))
                s->volume_obj = v->id;
        out_view(c, out, com_get(s->volume_obj), IF_MF_AUDIO_VOLUME);
        return;
    }
    if (guid_eq(want, IID_IMFClock) || guid_eq(want, IID_IMFPresentationClock)) {
        if (!s->clock_obj)
            if (ComObj *v = com_new(K_MF_CLOCK))
                s->clock_obj = v->id;
        out_view(c, out, com_get(s->clock_obj), IF_MF_CLOCK);
        return;
    }
    MF_TRACE("mf: GetService has no service %08x/%08x", guid_tag(service), guid_tag(want));
    factory_fail(c, out, E_NOINTERFACE);
}
void MFGetService(X86 *c) {
    get_service(c, com_this(arg(c, 0)), arg(c, 1), arg(c, 2), arg(c, 3));
}
void GetService_GetService(X86 *c) {
    get_service(c, com_this_arg(c), arg(c, 1), arg(c, 2), arg(c, 3));
}

const ImportShim g_mf_shims[] = {
    {"mf.dll", "MFCreateMediaSession", 2, MFCreateMediaSession},
    {"mf.dll", "MFCreateSourceResolver", 1, MFCreateSourceResolver},
    {"mf.dll", "MFCreateTopology", 1, MFCreateTopology},
    {"mf.dll", "MFCreateTopologyNode", 2, MFCreateTopologyNode},
    {"mf.dll", "MFCreateAudioRendererActivate", 1, MFCreateAudioRendererActivate},
    {"mf.dll", "MFCreateVideoRendererActivate", 2, MFCreateVideoRendererActivate},
    {"mf.dll", "MFGetService", 4, MFGetService},
};

} // namespace

void mf_register() {
    com_define(IF_MF_SOURCE_RESOLVER, "MF.dll", "IMFSourceResolver", g_source_resolver,
               std::size(g_source_resolver));
    com_define(IF_MF_MEDIA_SOURCE, "MF.dll", "IMFMediaSource", g_media_source,
               std::size(g_media_source));
    com_define(IF_MF_PRESENTATION_DESCRIPTOR, "MF.dll", "IMFPresentationDescriptor",
               g_presentation_descriptor, std::size(g_presentation_descriptor));
    com_define(IF_MF_STREAM_DESCRIPTOR, "MF.dll", "IMFStreamDescriptor", g_stream_descriptor,
               std::size(g_stream_descriptor));
    com_define(IF_MF_MEDIA_TYPE_HANDLER, "MF.dll", "IMFMediaTypeHandler", g_media_type_handler,
               std::size(g_media_type_handler));
    com_define(IF_MF_MEDIA_TYPE, "MF.dll", "IMFMediaType", g_media_type, std::size(g_media_type));
    com_define(IF_MF_TOPOLOGY, "MF.dll", "IMFTopology", g_topology, std::size(g_topology));
    com_define(IF_MF_TOPOLOGY_NODE, "MF.dll", "IMFTopologyNode", g_topology_node,
               std::size(g_topology_node));
    com_define(IF_MF_ACTIVATE, "MF.dll", "IMFActivate", g_activate, std::size(g_activate));
    com_define(IF_MF_MEDIA_SESSION, "MF.dll", "IMFMediaSession", g_media_session,
               std::size(g_media_session));
    com_define(IF_MF_GET_SERVICE, "MF.dll", "IMFGetService", g_get_service,
               std::size(g_get_service));
    com_define(IF_MF_MEDIA_EVENT, "MF.dll", "IMFMediaEvent", g_media_event,
               std::size(g_media_event));
    com_define(IF_MF_ASYNC_RESULT, "MF.dll", "IMFAsyncResult", g_async_result,
               std::size(g_async_result));
    com_define(IF_MF_CLOCK, "MF.dll", "IMFPresentationClock", g_clock, std::size(g_clock));
    com_define(IF_MF_PRESENTATION_CLOCK, "MF.dll", "IMFPresentationClock", g_clock,
               std::size(g_clock));
    com_define(IF_MF_VIDEO_DISPLAY, "MF.dll", "IMFVideoDisplayControl", g_video_display,
               std::size(g_video_display));
    com_define(IF_MF_AUDIO_VOLUME, "MF.dll", "IMFAudioStreamVolume", g_audio_volume,
               std::size(g_audio_volume));

    com_bind(IF_MF_SOURCE_RESOLVER, K_MF_SOURCE_RESOLVER);
    com_bind(IF_MF_MEDIA_SOURCE, K_MF_MEDIA_SOURCE);
    com_bind(IF_MF_PRESENTATION_DESCRIPTOR, K_MF_PRESENTATION_DESCRIPTOR);
    com_bind(IF_MF_STREAM_DESCRIPTOR, K_MF_STREAM_DESCRIPTOR);
    com_bind(IF_MF_MEDIA_TYPE_HANDLER, K_MF_MEDIA_TYPE_HANDLER);
    com_bind(IF_MF_MEDIA_TYPE, K_MF_MEDIA_TYPE);
    com_bind(IF_MF_TOPOLOGY, K_MF_TOPOLOGY);
    com_bind(IF_MF_TOPOLOGY_NODE, K_MF_TOPOLOGY_NODE);
    com_bind(IF_MF_ACTIVATE, K_MF_ACTIVATE);
    com_bind(IF_MF_MEDIA_SESSION, K_MF_MEDIA_SESSION);
    com_bind(IF_MF_GET_SERVICE, K_MF_MEDIA_SESSION); // the session serves it
    com_bind(IF_MF_MEDIA_EVENT, K_MF_MEDIA_EVENT);
    com_bind(IF_MF_ASYNC_RESULT, K_MF_ASYNC_RESULT);
    com_bind(IF_MF_CLOCK, K_MF_CLOCK);
    com_bind(IF_MF_PRESENTATION_CLOCK, K_MF_CLOCK);
    com_bind(IF_MF_VIDEO_DISPLAY, K_MF_VIDEO_DISPLAY);
    com_bind(IF_MF_AUDIO_VOLUME, K_MF_AUDIO_VOLUME);

    com_register_iid(IF_MF_MEDIA_SESSION, IID_IMFMediaSession.b);
    com_register_iid(IF_MF_MEDIA_SESSION, IID_IMFMediaEventGenerator.b);
    com_register_iid(IF_MF_GET_SERVICE, IID_IMFGetService.b);
    com_register_iid(IF_MF_MEDIA_SOURCE, IID_IMFMediaSource.b);
    com_register_iid(IF_MF_TOPOLOGY_NODE, IID_IMFTopologyNode.b);
    com_register_iid(IF_MF_CLOCK, IID_IMFClock.b);
    com_register_iid(IF_MF_PRESENTATION_CLOCK, IID_IMFPresentationClock.b);
    com_register_iid(IF_MF_VIDEO_DISPLAY, IID_IMFVideoDisplayControl.b);
    com_register_iid(IF_MF_AUDIO_VOLUME, IID_IMFAudioStreamVolume.b);

    imports_register(g_mf_shims, std::size(g_mf_shims));
}
