// dinput_joystick.h - the virtual pad as a DirectInput joystick device.
//
// A K_DIDEVICE with dev_type DIDEVTYPE_JOYSTICK. dx/dinput.cpp creates it and
// branches into the joy_* device functions below for every method whose
// behaviour differs from the mouse and keyboard; Acquire and Unacquire stay
// shared. Nothing here is reachable unless joy_served() says the game asked
// for native pad input.
#pragma once
#include "com.h"
#include "host_api.h"

#include <cstdint>
#include <vector>

// ---------------------------------------------------------------------------
// SDK layouts (dinput.h, DirectX 5 through 8; every pointer is 4 bytes)
// ---------------------------------------------------------------------------
enum {
    // DIJOYSTATE: lX lY lZ lRx lRy lRz, rglSlider[2], rgdwPOV[4],
    // rgbButtons[32].
    JOY_DIJOYSTATE_SIZE = 80,
    // DIJOYSTATE2: the same with rgbButtons[128] (176 bytes), then velocity,
    // acceleration and force blocks, each 6 axes and 2 sliders.
    JOY_DIJOYSTATE2_SIZE = 272,
    JOY_OFF_POV = 32,     // rgdwPOV[0]
    JOY_POV_COUNT = 4,    // rgdwPOV[4]
    JOY_OFF_BUTTONS = 48, // rgbButtons[0]
    JOY_BUTTONS_DIJOYSTATE = 32,
    JOY_BUTTONS_DIJOYSTATE2 = 128,

    // DIDATAFORMAT: dwSize, dwObjSize, dwFlags, dwDataSize, dwNumObjs, rgodf.
    DIDATAFORMAT_SIZE = 24,
    DIDF_OFF_dwObjSize = 4,
    DIDF_OFF_dwDataSize = 12,
    DIDF_OFF_dwNumObjs = 16,
    DIDF_OFF_rgodf = 20,
    // DIOBJECTDATAFORMAT: const GUID *pguid, dwOfs, dwType, dwFlags.
    DIOBJECTDATAFORMAT_SIZE = 16,
    DIODF_OFF_pguid = 0,
    DIODF_OFF_dwOfs = 4,
    DIODF_OFF_dwType = 8,

    // DIDEVICEOBJECTINSTANCEA: dwSize, guidType (4), dwOfs (20), dwType (24),
    // dwFlags (28), tszName[260] (32), then the DirectX 5 tail
    // dwFFMaxForce (292), dwFFForceResolution, wCollectionNumber (300),
    // wDesignatorIndex, wUsagePage (304), wUsage (306), dwDimension,
    // wExponent, wReserved = 316. The DirectX 3 record stops at 292.
    DIDEVICEOBJECTINSTANCEA_SIZE = 316,
    DIDEVICEOBJECTINSTANCE_DX3A_SIZE = 292,
    // The W record's name is 260 UTF-16 units, which moves the tail by 260:
    // 552 for DirectX 3, 576 with the tail.
    DIDEVICEOBJECTINSTANCEW_SIZE = 576,
    DIDEVICEOBJECTINSTANCE_DX3W_SIZE = 552,
    DIDOI_OFF_guidType = 4,
    DIDOI_OFF_dwOfs = 20,
    DIDOI_OFF_dwType = 24,
    DIDOI_OFF_dwFlags = 28,
    DIDOI_OFF_tszName = 32,
    DIDOI_NAME_CHARS = 260,
    DIDOI_TAIL_OFF_wUsagePage = 12, // from the end of tszName
    DIDOI_TAIL_OFF_wUsage = 14,

    // DIPROPRANGE: DIPROPHEADER (16), lMin, lMax.
    DIPROPRANGE_SIZE = 24,
    DIPROPRANGE_OFF_lMin = 16,
    DIPROPRANGE_OFF_lMax = 20,

    // DIDEVICEINSTANCEA: dwSize, guidInstance (4), guidProduct (20),
    // dwDevType (36), tszInstanceName[260] (40), tszProductName[260] (300),
    // guidFFDriver (560), wUsagePage (576), wUsage (578) = 580. The W record
    // has 260 UTF-16 units per name: names at 40 and 560, guidFFDriver at
    // 1080, wUsagePage at 1096, wUsage at 1098 = 1100.
    DIDEVICEINSTANCEA_SIZE = 580,
    DIDEVICEINSTANCEW_SIZE = 1100,
    DIDI_OFF_guidInstance = 4,
    DIDI_OFF_guidProduct = 20,
    DIDI_OFF_dwDevType = 36,
    DIDI_OFF_tszInstanceName = 40,
};

// DIDFT_* object types. The instance number sits in bits 8..23.
static const uint32_t DIDFT_ALL = 0;
static const uint32_t DIDFT_RELAXIS = 0x01;
static const uint32_t DIDFT_ABSAXIS = 0x02;
static const uint32_t DIDFT_AXIS = 0x03;
static const uint32_t DIDFT_PSHBUTTON = 0x04;
static const uint32_t DIDFT_BUTTON = 0x0C;
static const uint32_t DIDFT_POV = 0x10;
static const uint32_t DIDFT_TYPEMASK = 0xFF;
static const uint32_t DIDFT_ANYINSTANCE = 0x00FFFF00u;
static const uint32_t DIDFT_OPTIONAL = 0x80000000u;
static inline uint32_t didft_instance(uint32_t type) {
    return (type >> 8) & 0xFFFFu;
}

static const uint32_t DIDEVTYPE_JOYSTICK = 4u;
static const uint32_t DIDEVTYPEJOYSTICK_GAMEPAD = 4u;
static const uint32_t DI8DEVCLASS_ALL = 0u;
static const uint32_t DI8DEVCLASS_GAMECTRL = 4u;
static const uint32_t DI8DEVTYPE_GAMEPAD = 0x15u;
static const uint32_t DI8DEVTYPEGAMEPAD_STANDARD = 2u;
static const uint32_t DIRECTINPUT_VERSION_8 = 0x0800u;

static const uint32_t DIEDFL_FORCEFEEDBACK = 0x00000100u;
static const uint32_t DIGDD_PEEK = 1u;
static const uint32_t DI_BUFFEROVERFLOW = 1u;             // a success code, as DI_NOEFFECT
static const uint32_t DIERR_OBJECTNOTFOUND = 0x80070002u; // ERROR_FILE_NOT_FOUND

// DIPROP_* ids and DIPROPHEADER.dwHow.
static const uint32_t JOY_PROP_RANGE = 4;
static const uint32_t JOY_PROP_DEADZONE = 5;
static const uint32_t JOY_PROP_SATURATION = 6;
static const uint32_t DIPH_DEVICE = 0;
static const uint32_t DIPH_BYOFFSET = 1;
static const uint32_t DIPH_BYID = 2;

// JOY_AXES axes in DIJOYSTATE order (lX lY lZ lRx lRy lRz), JOY_BUTTONS
// buttons and one POV.
enum { JOY_AXES = 6, JOY_BUTTONS = 13, JOY_POVS = 1 };

extern const uint8_t GUID_Joystick_[16];          // {6F1D2B70-D5A0-11CF-BFC7-444553540000}
extern const uint8_t GUID_RecompPadInstance_[16]; // fixed, kit-owned
extern const uint8_t GUID_RecompPadProduct_[16];  // fixed, kit-owned

// ---------------------------------------------------------------------------
// Pure helpers
// ---------------------------------------------------------------------------
// The pad is offered as a joystick: native pad mode with the DirectInput bit.
bool joy_served();
// GUID_Joystick or the pad's instance GUID.
bool joy_guid(const uint8_t *guid16);
// Whether an EnumDevices type filter lets the pad through. DirectInput 8
// callers (di_version >= 0x800) filter by DI8DEVCLASS_* / DI8DEVTYPE_*;
// older ones by DIDEVTYPE_*. The low byte is the type or class.
bool joy_enum_matches(uint32_t devtype_filter, uint32_t di_version);
// The pad's dwDevType for that interface version.
uint32_t joy_devtype(uint32_t di_version);

// One object in DIJOYSTATE: its GUID, offset, DIDFT type with instance, and
// name. Axes first (X Y Z Rx Ry Rz), then the POV, then buttons 0..12.
struct JoyObject {
    uint8_t guid[16];
    uint32_t ofs;
    uint32_t type;
    const char *name;
};
const std::vector<JoyObject> &joy_objects();

// Writes a DIJOYSTATE (size 80) or DIJOYSTATE2 (272) at guest `at`.
// `ranges` is indexed by axis slot (0..5 = lX lY lZ lRx lRy lRz); the
// configured axis order (host_pad_native_axes) says which pad axis feeds
// which slot, and the button order (host_pad_native_buttons) which pad
// button is rgbButtons[i].
void joy_write_state(uint32_t at, uint32_t size, const HostPadState &s,
                     const JoyAxisRange ranges[6]);
// The DIJOYSTATE offset and dwData a pad edge reports; false when the edge
// has no object (a button outside the configured order, an unknown kind).
bool joy_event(const HostPadEvent &e, const JoyAxisRange ranges[6], uint32_t *ofs, uint32_t *data);

// ---------------------------------------------------------------------------
// Device methods, called from dx/dinput.cpp for a joystick device. Each
// returns the HRESULT for the guest.
// ---------------------------------------------------------------------------
// Fills a DIDEVICEINSTANCE{A,W} of `size` bytes (already zeroed past dwSize).
void joy_write_device_instance(uint32_t at, uint32_t size, bool wide, uint32_t di_version);
uint32_t joy_set_data_format(ComObj *d, uint32_t df);
uint32_t joy_get_capabilities(ComObj *d, uint32_t out, uint32_t size);
uint32_t joy_enum_objects(X86 *c, ComObj *d, uint32_t cb, uint32_t ref, uint32_t flags);
uint32_t joy_get_object_info(ComObj *d, uint32_t out, uint32_t obj, uint32_t how);
// Range, dead zone and saturation; false when the property is not one of
// those, so the caller's shared handling applies.
bool joy_get_property(ComObj *d, uint32_t prop, uint32_t ph, uint32_t *hr);
bool joy_set_property(ComObj *d, uint32_t prop, uint32_t ph, uint32_t *hr);
uint32_t joy_get_device_state(ComObj *d, uint32_t size, uint32_t out);
uint32_t joy_get_device_data(ComObj *d, uint32_t objsize, uint32_t out, uint32_t inout,
                             uint32_t flags);
// Acquire starts the event stream at the host's newest edge.
void joy_acquired(ComObj *d);

// Zeroed guest scratch of at least `n` bytes for records handed to guest
// callbacks (dx/dinput.cpp owns it; valid until the next call).
uint32_t di_scratch(uint32_t n);
// An ASCII name as UTF-16, NUL-terminated, in a field of `units` characters.
void di_put_wide(uint32_t at, const char *name, uint32_t units);
