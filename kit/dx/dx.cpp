// dx.cpp - registration for the whole graphics, audio and input layer, plus
// the shared audio channel allocator.
#include "dx.h"
#include "d3d11.h"
#include "../runtime/win32.h"
#include "com.h"
#include "host_api.h"

#include <stdio.h>
#include <string.h>
#include <vector>

#include "../runtime/imports.h"

namespace {

// DirectSound buffers and QMixer channels draw from one numbering so the host
// mixer sees a single flat channel space and never has to disambiguate.
std::vector<bool> &audio_channels() {
    static auto *v = new std::vector<bool>();
    return *v;
}
const size_t MAX_AUDIO_CHANNELS = 128;

// ---------------------------------------------------------------------------
// Failure reporting for the DirectX shims.
//
// A guest that gives up during Direct3D initialisation says nothing about
// why: it takes the failure branch and exits. The one thing that identifies
// the cause is which method returned which HRESULT, so every COM method in
// this layer is watched and any failing return is named once. Naming it here
// rather than at each `com_ret(c, DDERR_...)` keeps several hundred call
// sites free of logging and, more importantly, means a failure path added
// later is reported without anyone remembering to instrument it.
// ---------------------------------------------------------------------------
// Every DirectDraw/Direct3D/DirectSound/DirectInput error the SDK headers
// name, so a failure reads as a name rather than a number. Generated from
// ddraw.h, d3d.h, dsound.h and dinput.h.
const char *hresult_name(uint32_t hr) {
    switch (hr) {
    case 0x80004001u:
        return "E_NOTIMPL";
    case 0x80004002u:
        return "E_NOINTERFACE";
    case 0x80004003u:
        return "E_POINTER";
    case 0x80004005u:
        return "E_FAIL";
    case 0x80070057u:
        return "E_INVALIDARG";
    case 0x8007000Eu:
        return "E_OUTOFMEMORY";
    case 0x80040110u:
        return "CLASS_E_NOAGGREGATION";
    case 0x80040200u:
        return "DIERR_INSUFFICIENTPRIVS";
    case 0x80040201u:
        return "DIERR_DEVICEFULL";
    case 0x80040202u:
        return "DIERR_MOREDATA";
    case 0x80040203u:
        return "DIERR_NOTDOWNLOADED";
    case 0x80040204u:
        return "DIERR_HASEFFECTS";
    case 0x80040205u:
        return "DIERR_NOTEXCLUSIVEACQUIRED";
    case 0x80040206u:
        return "DIERR_INCOMPLETEEFFECT";
    case 0x80040207u:
        return "DIERR_NOTBUFFERED";
    case 0x80040208u:
        return "DIERR_EFFECTPLAYING";
    case 0x80040209u:
        return "DIERR_UNPLUGGED";
    case 0x8004020au:
        return "DIERR_REPORTFULL";
    case 0x8004020bu:
        return "DIERR_MAPFILEFAIL";
    case 0x88760005u:
        return "DDERR_ALREADYINITIALIZED";
    case 0x8876000au:
        return "DDERR_CANNOTATTACHSURFACE";
    case 0x88760014u:
        return "DDERR_CANNOTDETACHSURFACE";
    case 0x88760028u:
        return "DDERR_CURRENTLYNOTAVAIL";
    case 0x88760037u:
        return "DDERR_EXCEPTION";
    case 0x8876005au:
        return "DDERR_HEIGHTALIGN";
    case 0x8876005fu:
        return "DDERR_INCOMPATIBLEPRIMARY";
    case 0x88760064u:
        return "DDERR_INVALIDCAPS";
    case 0x8876006eu:
        return "DDERR_INVALIDCLIPLIST";
    case 0x88760078u:
        return "DDERR_INVALIDMODE";
    case 0x88760082u:
        return "DDERR_INVALIDOBJECT";
    case 0x88760091u:
        return "DDERR_INVALIDPIXELFORMAT";
    case 0x88760096u:
        return "DDERR_INVALIDRECT";
    case 0x887600a0u:
        return "DDERR_LOCKEDSURFACES";
    case 0x887600aau:
        return "DDERR_NO3D";
    case 0x887600b4u:
        return "DDERR_NOALPHAHW";
    case 0x887600b5u:
        return "DDERR_NOSTEREOHARDWARE";
    case 0x887600b6u:
        return "DDERR_NOSURFACELEFT";
    case 0x887600cdu:
        return "DDERR_NOCLIPLIST";
    case 0x887600d2u:
        return "DDERR_NOCOLORCONVHW";
    case 0x887600d4u:
        return "DDERR_NOCOOPERATIVELEVELSET";
    case 0x887600d7u:
        return "DDERR_NOCOLORKEY";
    case 0x887600dcu:
        return "DDERR_NOCOLORKEYHW";
    case 0x887600deu:
        return "DDERR_NODIRECTDRAWSUPPORT";
    case 0x887600e1u:
        return "DDERR_NOEXCLUSIVEMODE";
    case 0x887600e6u:
        return "DDERR_NOFLIPHW";
    case 0x887600f0u:
        return "DDERR_NOGDI";
    case 0x887600fau:
        return "DDERR_NOMIRRORHW";
    case 0x887600ffu:
        return "DDERR_NOTFOUND";
    case 0x88760104u:
        return "DDERR_NOOVERLAYHW";
    case 0x8876010eu:
        return "DDERR_OVERLAPPINGRECTS";
    case 0x88760118u:
        return "DDERR_NORASTEROPHW";
    case 0x88760122u:
        return "DDERR_NOROTATIONHW";
    case 0x88760136u:
        return "DDERR_NOSTRETCHHW";
    case 0x8876013cu:
        return "DDERR_NOT4BITCOLOR";
    case 0x8876013du:
        return "DDERR_NOT4BITCOLORINDEX";
    case 0x88760140u:
        return "DDERR_NOT8BITCOLOR";
    case 0x8876014au:
        return "DDERR_NOTEXTUREHW";
    case 0x8876014fu:
        return "DDERR_NOVSYNCHW";
    case 0x88760154u:
        return "DDERR_NOZBUFFERHW";
    case 0x8876015eu:
        return "DDERR_NOZOVERLAYHW";
    case 0x88760168u:
        return "DDERR_OUTOFCAPS";
    case 0x8876017cu:
        return "DDERR_OUTOFVIDEOMEMORY";
    case 0x8876017eu:
        return "DDERR_OVERLAYCANTCLIP";
    case 0x88760180u:
        return "DDERR_OVERLAYCOLORKEYONLYONEACTIVE";
    case 0x88760183u:
        return "DDERR_PALETTEBUSY";
    case 0x88760190u:
        return "DDERR_COLORKEYNOTSET";
    case 0x8876019au:
        return "DDERR_SURFACEALREADYATTACHED";
    case 0x887601a4u:
        return "DDERR_SURFACEALREADYDEPENDENT";
    case 0x887601aeu:
        return "DDERR_SURFACEBUSY";
    case 0x887601b3u:
        return "DDERR_CANTLOCKSURFACE";
    case 0x887601b8u:
        return "DDERR_SURFACEISOBSCURED";
    case 0x887601c2u:
        return "DDERR_SURFACELOST";
    case 0x887601ccu:
        return "DDERR_SURFACENOTATTACHED";
    case 0x887601d6u:
        return "DDERR_TOOBIGHEIGHT";
    case 0x887601e0u:
        return "DDERR_TOOBIGSIZE";
    case 0x887601eau:
        return "DDERR_TOOBIGWIDTH";
    case 0x887601feu:
        return "DDERR_UNSUPPORTEDFORMAT";
    case 0x88760208u:
        return "DDERR_UNSUPPORTEDMASK";
    case 0x88760209u:
        return "DDERR_INVALIDSTREAM";
    case 0x88760219u:
        return "DDERR_VERTICALBLANKINPROGRESS";
    case 0x8876021cu:
        return "DDERR_WASSTILLDRAWING";
    case 0x8876021eu:
        return "DDERR_DDSCAPSCOMPLEXREQUIRED";
    case 0x88760230u:
        return "DDERR_XALIGN";
    case 0x88760231u:
        return "DDERR_INVALIDDIRECTDRAWGUID";
    case 0x88760232u:
        return "DDERR_DIRECTDRAWALREADYCREATED";
    case 0x88760233u:
        return "DDERR_NODIRECTDRAWHW";
    case 0x88760234u:
        return "DDERR_PRIMARYSURFACEALREADYEXISTS";
    case 0x88760235u:
        return "DDERR_NOEMULATION";
    case 0x88760236u:
        return "DDERR_REGIONTOOSMALL";
    case 0x88760237u:
        return "DDERR_CLIPPERISUSINGHWND";
    case 0x88760238u:
        return "DDERR_NOCLIPPERATTACHED";
    case 0x88760239u:
        return "DDERR_NOHWND";
    case 0x8876023au:
        return "DDERR_HWNDSUBCLASSED";
    case 0x8876023bu:
        return "DDERR_HWNDALREADYSET";
    case 0x8876023cu:
        return "DDERR_NOPALETTEATTACHED";
    case 0x8876023du:
        return "DDERR_NOPALETTEHW";
    case 0x8876023eu:
        return "DDERR_BLTFASTCANTCLIP";
    case 0x8876023fu:
        return "DDERR_NOBLTHW";
    case 0x88760240u:
        return "DDERR_NODDROPSHW";
    case 0x88760241u:
        return "DDERR_OVERLAYNOTVISIBLE";
    case 0x88760242u:
        return "DDERR_NOOVERLAYDEST";
    case 0x88760243u:
        return "DDERR_INVALIDPOSITION";
    case 0x88760244u:
        return "DDERR_NOTAOVERLAYSURFACE";
    case 0x88760245u:
        return "DDERR_EXCLUSIVEMODEALREADYSET";
    case 0x88760246u:
        return "DDERR_NOTFLIPPABLE";
    case 0x88760247u:
        return "DDERR_CANTDUPLICATE";
    case 0x88760248u:
        return "DDERR_NOTLOCKED";
    case 0x88760249u:
        return "DDERR_CANTCREATEDC";
    case 0x8876024au:
        return "DDERR_NODC";
    case 0x8876024bu:
        return "DDERR_WRONGMODE";
    case 0x8876024cu:
        return "DDERR_IMPLICITLYCREATED";
    case 0x8876024du:
        return "DDERR_NOTPALETTIZED";
    case 0x8876024eu:
        return "DDERR_UNSUPPORTEDMODE";
    case 0x8876024fu:
        return "DDERR_NOMIPMAPHW";
    case 0x88760250u:
        return "DDERR_INVALIDSURFACETYPE";
    case 0x88760258u:
        return "DDERR_NOOPTIMIZEHW";
    case 0x88760259u:
        return "DDERR_NOTLOADED";
    case 0x8876025au:
        return "DDERR_NOFOCUSWINDOW";
    case 0x8876025bu:
        return "DDERR_NOTONMIPMAPSUBLEVEL";
    case 0x8876026cu:
        return "DDERR_DCALREADYCREATED";
    case 0x88760276u:
        return "DDERR_NONONLOCALVIDMEM";
    case 0x88760280u:
        return "DDERR_CANTPAGELOCK";
    case 0x88760294u:
        return "DDERR_CANTPAGEUNLOCK";
    case 0x887602a8u:
        return "DDERR_NOTPAGELOCKED";
    case 0x887602b2u:
        return "DDERR_MOREDATA";
    case 0x887602b3u:
        return "DDERR_EXPIRED";
    case 0x887602b4u:
        return "DDERR_TESTFINISHED";
    case 0x887602b5u:
        return "DDERR_NEWMODE";
    case 0x887602b6u:
        return "DDERR_D3DNOTINITIALIZED";
    case 0x887602b7u:
        return "DDERR_VIDEONOTACTIVE";
    case 0x887602b8u:
        return "DDERR_NOMONITORINFORMATION";
    case 0x887602b9u:
        return "DDERR_NODRIVERSUPPORT";
    case 0x887602bbu:
        return "DDERR_DEVICEDOESNTOWNSURFACE";
    case 0x887602bcu:
        return "D3DERR_BADMAJORVERSION";
    case 0x887602bdu:
        return "D3DERR_BADMINORVERSION";
    case 0x887602c1u:
        return "D3DERR_INVALID_DEVICE";
    case 0x887602c2u:
        return "D3DERR_INITFAILED";
    case 0x887602c3u:
        return "D3DERR_DEVICEAGGREGATED";
    case 0x887602c6u:
        return "D3DERR_EXECUTE_CREATE_FAILED";
    case 0x887602c7u:
        return "D3DERR_EXECUTE_DESTROY_FAILED";
    case 0x887602c8u:
        return "D3DERR_EXECUTE_LOCK_FAILED";
    case 0x887602c9u:
        return "D3DERR_EXECUTE_UNLOCK_FAILED";
    case 0x887602cau:
        return "D3DERR_EXECUTE_LOCKED";
    case 0x887602cbu:
        return "D3DERR_EXECUTE_NOT_LOCKED";
    case 0x887602ccu:
        return "D3DERR_EXECUTE_FAILED";
    case 0x887602cdu:
        return "D3DERR_EXECUTE_CLIPPED_FAILED";
    case 0x887602d0u:
        return "D3DERR_TEXTURE_NO_SUPPORT";
    case 0x887602d1u:
        return "D3DERR_TEXTURE_CREATE_FAILED";
    case 0x887602d2u:
        return "D3DERR_TEXTURE_DESTROY_FAILED";
    case 0x887602d3u:
        return "D3DERR_TEXTURE_LOCK_FAILED";
    case 0x887602d4u:
        return "D3DERR_TEXTURE_UNLOCK_FAILED";
    case 0x887602d5u:
        return "D3DERR_TEXTURE_LOAD_FAILED";
    case 0x887602d6u:
        return "D3DERR_TEXTURE_SWAP_FAILED";
    case 0x887602d7u:
        return "D3DERR_TEXTURE_LOCKED";
    case 0x887602d8u:
        return "D3DERR_TEXTURE_NOT_LOCKED";
    case 0x887602d9u:
        return "D3DERR_TEXTURE_GETSURF_FAILED";
    case 0x887602dau:
        return "D3DERR_MATRIX_CREATE_FAILED";
    case 0x887602dbu:
        return "D3DERR_MATRIX_DESTROY_FAILED";
    case 0x887602dcu:
        return "D3DERR_MATRIX_SETDATA_FAILED";
    case 0x887602ddu:
        return "D3DERR_MATRIX_GETDATA_FAILED";
    case 0x887602deu:
        return "D3DERR_SETVIEWPORTDATA_FAILED";
    case 0x887602dfu:
        return "D3DERR_INVALIDCURRENTVIEWPORT";
    case 0x887602e0u:
        return "D3DERR_INVALIDPRIMITIVETYPE";
    case 0x887602e1u:
        return "D3DERR_INVALIDVERTEXTYPE";
    case 0x887602e2u:
        return "D3DERR_TEXTURE_BADSIZE";
    case 0x887602e3u:
        return "D3DERR_INVALIDRAMPTEXTURE";
    case 0x887602e4u:
        return "D3DERR_MATERIAL_CREATE_FAILED";
    case 0x887602e5u:
        return "D3DERR_MATERIAL_DESTROY_FAILED";
    case 0x887602e6u:
        return "D3DERR_MATERIAL_SETDATA_FAILED";
    case 0x887602e7u:
        return "D3DERR_MATERIAL_GETDATA_FAILED";
    case 0x887602e8u:
        return "D3DERR_INVALIDPALETTE";
    case 0x887602e9u:
        return "D3DERR_ZBUFF_NEEDS_SYSTEMMEMORY";
    case 0x887602eau:
        return "D3DERR_ZBUFF_NEEDS_VIDEOMEMORY";
    case 0x887602ebu:
        return "D3DERR_SURFACENOTINVIDMEM";
    case 0x887602eeu:
        return "D3DERR_LIGHT_SET_FAILED";
    case 0x887602efu:
        return "D3DERR_LIGHTHASVIEWPORT";
    case 0x887602f0u:
        return "D3DERR_LIGHTNOTINTHISVIEWPORT";
    case 0x887602f8u:
        return "D3DERR_SCENE_IN_SCENE";
    case 0x887602f9u:
        return "D3DERR_SCENE_NOT_IN_SCENE";
    case 0x887602fau:
        return "D3DERR_SCENE_BEGIN_FAILED";
    case 0x887602fbu:
        return "D3DERR_SCENE_END_FAILED";
    case 0x88760302u:
        return "D3DERR_INBEGIN";
    case 0x88760303u:
        return "D3DERR_NOTINBEGIN";
    case 0x88760304u:
        return "D3DERR_NOVIEWPORTS";
    case 0x88760305u:
        return "D3DERR_VIEWPORTDATANOTSET";
    case 0x88760306u:
        return "D3DERR_VIEWPORTHASNODEVICE";
    case 0x88760307u:
        return "D3DERR_NOCURRENTVIEWPORT";
    case 0x88760800u:
        return "D3DERR_INVALIDVERTEXFORMAT";
    case 0x88760802u:
        return "D3DERR_COLORKEYATTACHED";
    case 0x8876080cu:
        return "D3DERR_VERTEXBUFFEROPTIMIZED";
    case 0x8876080du:
        return "D3DERR_VBUF_CREATE_FAILED";
    case 0x8876080eu:
        return "D3DERR_VERTEXBUFFERLOCKED";
    case 0x8876080fu:
        return "D3DERR_VERTEXBUFFERUNLOCKFAILED";
    case 0x88760816u:
        return "D3DERR_ZBUFFER_NOTPRESENT";
    case 0x88760817u:
        return "D3DERR_STENCILBUFFER_NOTPRESENT";
    case 0x88760818u:
        return "D3DERR_WRONGTEXTUREFORMAT";
    case 0x88760819u:
        return "D3DERR_UNSUPPORTEDCOLOROPERATION";
    case 0x8876081au:
        return "D3DERR_UNSUPPORTEDCOLORARG";
    case 0x8876081bu:
        return "D3DERR_UNSUPPORTEDALPHAOPERATION";
    case 0x8876081cu:
        return "D3DERR_UNSUPPORTEDALPHAARG";
    case 0x8876081du:
        return "D3DERR_TOOMANYOPERATIONS";
    case 0x8876081eu:
        return "D3DERR_CONFLICTINGTEXTUREFILTER";
    case 0x8876081fu:
        return "D3DERR_UNSUPPORTEDFACTORVALUE";
    case 0x88760821u:
        return "D3DERR_CONFLICTINGRENDERSTATE";
    case 0x88760822u:
        return "D3DERR_UNSUPPORTEDTEXTUREFILTER";
    case 0x88760823u:
        return "D3DERR_TOOMANYPRIMITIVES";
    case 0x88760824u:
        return "D3DERR_INVALIDMATRIX";
    case 0x88760825u:
        return "D3DERR_TOOMANYVERTICES";
    case 0x88760826u:
        return "D3DERR_CONFLICTINGTEXTUREPALETTE";
    case 0x88760834u:
        return "D3DERR_INVALIDSTATEBLOCK";
    case 0x88760835u:
        return "D3DERR_INBEGINSTATEBLOCK";
    case 0x88760836u:
        return "D3DERR_NOTINBEGINSTATEBLOCK";
    case 0x8878000au:
        return "DSERR_ALLOCATED";
    case 0x8878001eu:
        return "DSERR_CONTROLUNAVAIL";
    case 0x88780032u:
        return "DSERR_INVALIDCALL";
    case 0x88780046u:
        return "DSERR_PRIOLEVELNEEDED";
    case 0x88780064u:
        return "DSERR_BADFORMAT";
    case 0x88780078u:
        return "DSERR_NODRIVER";
    case 0x88780082u:
        return "DSERR_ALREADYINITIALIZED";
    case 0x88780096u:
        return "DSERR_BUFFERLOST";
    case 0x887800a0u:
        return "DSERR_OTHERAPPHASPRIO";
    case 0x887800aau:
        return "DSERR_UNINITIALIZED";
    case 0x887800b4u:
        return "DSERR_BUFFERTOOSMALL";
    case 0x887800beu:
        return "DSERR_DS8_REQUIRED";
    case 0x887800c8u:
        return "DSERR_SENDLOOP";
    case 0x887800d2u:
        return "DSERR_BADSENDBUFFERGUID";
    case 0x887800dcu:
        return "DSERR_FXUNAVAILABLE";
    case 0x88781161u:
        return "DSERR_OBJECTNOTFOUND";
    // DirectInput's FACILITY_WIN32 codes, which the generated block above
    // cannot reach: the headers spell them MAKE_HRESULT(.., FACILITY_WIN32,
    // ERROR_*) rather than as a literal.
    case 0x8007000Cu:
        return "DIERR_NOTACQUIRED";
    case 0x80070015u:
        return "DIERR_NOTINITIALIZED";
    case 0x8007001Eu:
        return "DIERR_INPUTLOST";
    case 0x800700AAu:
        return "DIERR_ACQUIRED";
    case 0x800704DFu:
        return "DIERR_ALREADYINITIALIZED";
    case 0x80040154u:
        return "DIERR_DEVICENOTREG";
    case 0x80070005u:
        return "DIERR_OTHERAPPHASPRIO";
    default:
        return nullptr;
    }
}

void dx_report_failure(const char *desc, uint32_t eax) {
    // Only this layer's COM methods, and only a failing HRESULT. AddRef and
    // Release return refcounts, never a value with the sign bit set, so they
    // cannot be mistaken for failures.
    if (!(eax & 0x80000000u))
        return;
    if (!desc || !strstr(desc, "::"))
        return;
    if (!strstr(desc, "IDirect") && !strstr(desc, "IDirect3D"))
        return;
    char key[160];
    snprintf(key, sizeof key, "dxfail.%s.%08x", desc, eax);
    const char *n = hresult_name(eax);
    if (n)
        log_once(key, "dx: %s failed: %s (0x%08x)", desc, n, eax);
    else
        log_once(key, "dx: %s failed: 0x%08x", desc, eax);
}

} // namespace

int32_t dx_alloc_audio_channel() {
    auto &used = audio_channels();
    for (size_t i = 0; i < used.size(); ++i)
        if (!used[i]) {
            used[i] = true;
            return (int32_t)i;
        }
    if (used.size() >= MAX_AUDIO_CHANNELS) {
        log_once("dx.channels",
                 "dx: all %zu host audio channels are in use; the next sound "
                 "will not be heard",
                 MAX_AUDIO_CHANNELS);
        return -1;
    }
    used.push_back(true);
    return (int32_t)used.size() - 1;
}

void dx_free_audio_channel(int32_t ch) {
    auto &used = audio_channels();
    if (ch >= 0 && (size_t)ch < used.size())
        used[(size_t)ch] = false;
}

// Group the file players in one callback: the runtime has four frame slots,
// shared with display and callback-driven audio. All run under the guest baton.
static void file_audio_frame_pump(X86 *c) {
    mss32_frame_pump(c);
    redbook_frame_pump(c);
    waveout_frame_pump(c);
    dshow_frame_pump(c);
    fmod_frame_pump(c);
    soundlib_frame_pump(c);
    mf_frame_pump(c);
}

void dx_register_shims() {
    // Installed before the tables so a failure during registration itself,
    // and every failure afterwards, is named rather than silent.
    imports_set_return_observer(dx_report_failure);

    // Order matters only in that ddraw_register installs the QueryInterface
    // hook that hands out Direct3D, and d3d_register must have defined the
    // Direct3D vtables by the time the guest uses it. Both run here, so any
    // order works; this one reads in the order the game exercises them.
    com_register_ole32();
    ddraw_register();
    d3d_register();
    d3d11_register();
    dxgi_register();
    d3dcompiler_register();
    d3dx10_register();
    d3d9_register();
    d3dx9_register();
    dinput_register();
    xinput_register();
    dsound_register();
    dshow_register();
    qmixer_register();
    mss32_register();
    redbook_register();
    avi_register();
    waveout_register();
    fmod_register();
    soundlib_register();
    galaxy_stub_register();
    bink_register();
    weanetr_register();
    mf_register();
    // The audio shims need a tick on the main guest thread: the game drives
    // neither QMixer's stream refills nor DirectSound's notification
    // positions, and both need to call back into guest code, which only a
    // thread holding the scheduler baton may do.
    // The display's frame boundary, for a game that draws straight into the
    // primary and never flips: the menus do exactly that, and without this
    // their frames would never end. Registered first so the frame seals before
    // the audio pump's guest callbacks, the order the direct call used to have.
    host_set_frame_pump(ddraw_frame_pump);
    host_set_frame_pump(qmixer_frame_pump);
    host_set_frame_pump(file_audio_frame_pump);
}

void dx_reset() {
    // Module state first: these tables hold guest addresses and object ids
    // from the generation com_reset is about to discard, and com_reset
    // rebuilds the vtables, so nothing may still be pointing at the old ones.
    qmixer_reset();
    fmod_reset();
    soundlib_reset();
    ddraw_reset();
    d3d_reset();
    d3d11_reset();
    d3d9_reset();
    d3dx9_reset();
    dsound_reset();
    dshow_reset();
    dinput_reset();
    bink_reset();
    mf_reset();
    audio_channels().clear();
    com_reset();
}

void dx_dump(FILE *out) {
    com_dump(out);
    size_t n = 0;
    for (bool b : audio_channels())
        if (b)
            ++n;
    fprintf(out, "audio channels in use: %zu of %zu allocated\n", n, audio_channels().size());
    qmixer_dump(out);
}
