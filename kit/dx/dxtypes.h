// dxtypes.h - DirectX 6 constants and structure offsets used by the shims.
//
// Everything here is a value from the DirectX 6 SDK headers (ddraw.h, d3d.h,
// d3dtypes.h, dsound.h, dinput.h). Offsets are the byte offsets of fields in
// the 32-bit x86 layout the guest was compiled against; they are named
// XXX_OFF_field so a shim reads guest memory without a host struct.
#pragma once
#include <stdint.h>

// ---------------------------------------------------------------------------
// HRESULTs
// ---------------------------------------------------------------------------
static const uint32_t S_OK = 0x00000000u;
static const uint32_t S_FALSE = 0x00000001u;
static const uint32_t E_FAIL = 0x80004005u;
static const uint32_t E_NOINTERFACE = 0x80004002u;
static const uint32_t E_NOTIMPL = 0x80004001u;
static const uint32_t E_INVALIDARG = 0x80070057u;
static const uint32_t E_OUTOFMEMORY = 0x8007000Eu;
static const uint32_t E_POINTER = 0x80004003u;
static const uint32_t E_HANDLE = 0x80070006u;

#define MAKE_DDHRESULT(c) (0x88760000u | (uint32_t)(c))
#define MAKE_DSHRESULT(c) (0x88780000u | (uint32_t)(c))
#define MAKE_DIHRESULT(c) (0x80040000u | (uint32_t)(c))

static const uint32_t DD_OK = 0u;
static const uint32_t DDERR_GENERIC = E_FAIL;
static const uint32_t DDERR_INVALIDPARAMS = E_INVALIDARG;
static const uint32_t DDERR_INVALIDOBJECT = MAKE_DDHRESULT(130);
static const uint32_t DDERR_OUTOFMEMORY = E_OUTOFMEMORY;
static const uint32_t DDERR_UNSUPPORTED = E_NOTIMPL;
// DDERR_INVALIDPIXELFORMAT is 0x88760000 + 145. A caller that asked for a
// pixel format the driver does not have recognises this and picks another;
// a generic failure only tells it that something went wrong.
static const uint32_t DDERR_INVALIDPIXELFORMAT = 0x88760091u;

// ---------------------------------------------------------------------------
// IDirectDrawColorControl. DDCOLORCONTROL is ten dwords, forty bytes.
// ---------------------------------------------------------------------------
enum {
    DDCOLORCONTROL_SIZE = 40,
    DDCC_OFF_dwSize = 0,
    DDCC_OFF_dwFlags = 4,
    DDCC_OFF_lBrightness = 8,
    DDCC_OFF_lContrast = 12,
    DDCC_OFF_lHue = 16,
    DDCC_OFF_lSaturation = 20,
    DDCC_OFF_lSharpness = 24,
    DDCC_OFF_lGamma = 28,
    DDCC_OFF_lColorEnable = 32,
    DDCC_OFF_dwReserved1 = 36,
};
static const uint32_t DDCOLOR_BRIGHTNESS = 0x00000001u;
static const uint32_t DDCOLOR_CONTRAST = 0x00000002u;
static const uint32_t DDCOLOR_HUE = 0x00000004u;
static const uint32_t DDCOLOR_SATURATION = 0x00000008u;
static const uint32_t DDCOLOR_SHARPNESS = 0x00000010u;
static const uint32_t DDCOLOR_GAMMA = 0x00000020u;
static const uint32_t DDCOLOR_COLORENABLE = 0x00000040u;
static const uint32_t DDCOLOR_ALL = DDCOLOR_BRIGHTNESS | DDCOLOR_CONTRAST | DDCOLOR_HUE |
                                    DDCOLOR_SATURATION | DDCOLOR_SHARPNESS | DDCOLOR_GAMMA |
                                    DDCOLOR_COLORENABLE;
static const uint32_t DDERR_NOTFOUND = MAKE_DDHRESULT(255);
static const uint32_t DDERR_INVALIDRECT = MAKE_DDHRESULT(150);
static const uint32_t DDERR_INVALIDSURFACETYPE = MAKE_DDHRESULT(592);
static const uint32_t DDERR_NOTLOCKED = MAKE_DDHRESULT(584);
static const uint32_t DDERR_SURFACEBUSY = MAKE_DDHRESULT(430);
static const uint32_t DDERR_SURFACELOST = MAKE_DDHRESULT(450);
static const uint32_t DDERR_NOPALETTEATTACHED = MAKE_DDHRESULT(572);
static const uint32_t DDERR_NOCOLORKEY = MAKE_DDHRESULT(215);
static const uint32_t DDERR_NOTFLIPPABLE = MAKE_DDHRESULT(582);
static const uint32_t DDERR_NOEXCLUSIVEMODE = MAKE_DDHRESULT(225);
static const uint32_t DDERR_NOTAOVERLAYSURFACE = MAKE_DDHRESULT(580);
static const uint32_t DDERR_CANTCREATEDC = MAKE_DDHRESULT(585);
static const uint32_t DDERR_NODC = MAKE_DDHRESULT(586);
static const uint32_t DDERR_WASSTILLDRAWING = MAKE_DDHRESULT(540);
static const uint32_t DDENUMRET_OK = 1u;
static const uint32_t DDENUMRET_CANCEL = 0u;

static const uint32_t DS_OK = 0u;
static const uint32_t DSERR_ALLOCATED = MAKE_DSHRESULT(10);
static const uint32_t DSERR_INVALIDPARAM = E_INVALIDARG;
static const uint32_t DSERR_UNSUPPORTED = E_NOTIMPL;
static const uint32_t DSERR_NODRIVER = MAKE_DSHRESULT(120);
static const uint32_t DSERR_BUFFERLOST = MAKE_DSHRESULT(150);
static const uint32_t DSERR_INVALIDCALL = MAKE_DSHRESULT(50);

// Direct3D. D3D shares DirectDraw's facility code.
static const uint32_t D3D_OK_ = 0u;
static const uint32_t D3DERR_BADMAJORVERSION = MAKE_DDHRESULT(700);
static const uint32_t D3DERR_BADMINORVERSION = MAKE_DDHRESULT(701);
static const uint32_t D3DERR_INVALID_DEVICE = MAKE_DDHRESULT(705);
static const uint32_t D3DERR_INITFAILED = MAKE_DDHRESULT(706);
// The SDK spells these D3DERR_SCENE_IN_SCENE, _NOT_IN_SCENE, _BEGIN_FAILED
// and _END_FAILED. Codes 723-726 are the D3DERR_TEXTURE_* failures, so the
// earlier values here returned a texture error where the caller was told to
// expect a scene one.
static const uint32_t D3DERR_SCENEINSCENE = MAKE_DDHRESULT(760);
static const uint32_t D3DERR_SCENENOTINSCENE = MAKE_DDHRESULT(761);
static const uint32_t D3DERR_SCENEBEGINFAILED = MAKE_DDHRESULT(762);
static const uint32_t D3DERR_SCENEENDFAILED = MAKE_DDHRESULT(763);
static const uint32_t D3DERR_TEXTURE_BADSIZE = MAKE_DDHRESULT(738);
static const uint32_t D3DENUMRET_OK = 1u;

static const uint32_t CLASS_E_NOAGGREGATION = 0x80040110u;

static const uint32_t DI_OK = 0u;
static const uint32_t DI_NOEFFECT = S_FALSE;
static const uint32_t DI_PROPNOEFFECT = S_FALSE;
static const uint32_t DIERR_INVALIDPARAM = E_INVALIDARG;
// DirectInput's errors are FACILITY_WIN32 HRESULTs wrapping a Win32 error
// code, not DirectInput-facility ones: 0x80070000 | ERROR_*. A DIERR_ built
// from the DirectInput facility is a different number from the one the game
// compares against, and it takes the wrong branch.
static const uint32_t DIERR_NOTINITIALIZED = 0x80070015u;     // ERROR_NOT_READY
static const uint32_t DIERR_INPUTLOST = 0x8007001Eu;          // ERROR_READ_FAULT
static const uint32_t DIERR_NOTACQUIRED = 0x8007000Cu;        // ERROR_INVALID_ACCESS
static const uint32_t DIERR_ACQUIRED = 0x800700AAu;           // ERROR_BUSY
static const uint32_t DIERR_ALREADYINITIALIZED = 0x800704DFu; // ERROR_ALREADY_INITIALIZED
static const uint32_t DIERR_UNSUPPORTED = E_NOTIMPL;
static const uint32_t DIERR_DEVICENOTREG = 0x80040154u; // REGDB_E_CLASSNOTREG

// ---------------------------------------------------------------------------
// DDSURFACEDESC (108 bytes) and DDSURFACEDESC2 (124 bytes). Both share every
// offset up to ddsCaps; only the caps block and the trailing field differ.
// ---------------------------------------------------------------------------
enum {
    DDSD_SIZE = 108,
    DDSD2_SIZE = 124,
    DDSD_OFF_dwSize = 0x00,
    DDSD_OFF_dwFlags = 0x04,
    DDSD_OFF_dwHeight = 0x08,
    DDSD_OFF_dwWidth = 0x0c,
    DDSD_OFF_lPitch = 0x10,
    DDSD_OFF_dwBackBufferCount = 0x14,
    DDSD_OFF_dwMipMapCount = 0x18, // also dwZBufferBitDepth / dwRefreshRate
    DDSD_OFF_dwAlphaBitDepth = 0x1c,
    DDSD_OFF_dwReserved = 0x20,
    DDSD_OFF_lpSurface = 0x24,
    DDSD_OFF_ckDestOverlay = 0x28,
    DDSD_OFF_ckDestBlt = 0x30,
    DDSD_OFF_ckSrcOverlay = 0x38,
    DDSD_OFF_ckSrcBlt = 0x40,
    DDSD_OFF_ddpfPixelFormat = 0x48,
    DDSD_OFF_ddsCaps = 0x68, // DDSCAPS (4 bytes) or DDSCAPS2 (16 bytes)
    DDSD2_OFF_dwTextureStage = 0x78,
};

// DDPIXELFORMAT, 32 bytes.
enum {
    DDPF_SIZE = 32,
    DDPF_OFF_dwSize = 0x00,
    DDPF_OFF_dwFlags = 0x04,
    DDPF_OFF_dwFourCC = 0x08,
    DDPF_OFF_dwRGBBitCount = 0x0c,
    DDPF_OFF_dwRBitMask = 0x10,
    DDPF_OFF_dwGBitMask = 0x14,
    DDPF_OFF_dwBBitMask = 0x18,
    DDPF_OFF_dwRGBAlphaBitMask = 0x1c,
};

// DDSD_ flags
static const uint32_t DDSD_CAPS = 0x00000001u;
static const uint32_t DDSD_HEIGHT = 0x00000002u;
static const uint32_t DDSD_WIDTH = 0x00000004u;
static const uint32_t DDSD_PITCH = 0x00000008u;
static const uint32_t DDSD_BACKBUFFERCOUNT = 0x00000020u;
static const uint32_t DDSD_ZBUFFERBITDEPTH = 0x00000040u;
static const uint32_t DDSD_ALPHABITDEPTH = 0x00000080u;
static const uint32_t DDSD_LPSURFACE = 0x00000800u;
static const uint32_t DDSD_PIXELFORMAT = 0x00001000u;
static const uint32_t DDSD_CKDESTOVERLAY = 0x00002000u;
static const uint32_t DDSD_CKDESTBLT = 0x00004000u;
static const uint32_t DDSD_CKSRCOVERLAY = 0x00008000u;
static const uint32_t DDSD_CKSRCBLT = 0x00010000u;
static const uint32_t DDSD_MIPMAPCOUNT = 0x00020000u;
static const uint32_t DDSD_REFRESHRATE = 0x00040000u;
static const uint32_t DDSD_LINEARSIZE = 0x00080000u;
static const uint32_t DDSD_TEXTURESTAGE = 0x00100000u;
static const uint32_t DDSD_ALL = 0x001ff9eeu;

// DDPF_ flags
static const uint32_t DDPF_ALPHAPIXELS = 0x00000001u;
static const uint32_t DDPF_ALPHA = 0x00000002u;
static const uint32_t DDPF_FOURCC = 0x00000004u;
static const uint32_t DDPF_PALETTEINDEXED4 = 0x00000008u;
static const uint32_t DDPF_PALETTEINDEXEDTO8 = 0x00000010u;
static const uint32_t DDPF_PALETTEINDEXED8 = 0x00000020u;
static const uint32_t DDPF_RGB = 0x00000040u;
static const uint32_t DDPF_ZBUFFER = 0x00000400u;

// DDSCAPS_ flags
static const uint32_t DDSCAPS_RESERVED1 = 0x00000001u;
static const uint32_t DDSCAPS_ALPHA = 0x00000002u;
static const uint32_t DDSCAPS_BACKBUFFER = 0x00000004u;
static const uint32_t DDSCAPS_COMPLEX = 0x00000008u;
static const uint32_t DDSCAPS_FLIP = 0x00000010u;
static const uint32_t DDSCAPS_FRONTBUFFER = 0x00000020u;
static const uint32_t DDSCAPS_OFFSCREENPLAIN = 0x00000040u;
static const uint32_t DDSCAPS_OVERLAY = 0x00000080u;
static const uint32_t DDSCAPS_PALETTE = 0x00000100u;
static const uint32_t DDSCAPS_PRIMARYSURFACE = 0x00000200u;
static const uint32_t DDSCAPS_SYSTEMMEMORY = 0x00000800u;
static const uint32_t DDSCAPS_TEXTURE = 0x00001000u;
static const uint32_t DDSCAPS_3DDEVICE = 0x00002000u;
static const uint32_t DDSCAPS_VIDEOMEMORY = 0x00004000u;
static const uint32_t DDSCAPS_VISIBLE = 0x00008000u;
static const uint32_t DDSCAPS_WRITEONLY = 0x00010000u;
static const uint32_t DDSCAPS_ZBUFFER = 0x00020000u;
static const uint32_t DDSCAPS_OWNDC = 0x00040000u;
static const uint32_t DDSCAPS_LIVEVIDEO = 0x00080000u;
static const uint32_t DDSCAPS_MODEX = 0x00200000u;
static const uint32_t DDSCAPS_MIPMAP = 0x00400000u;
static const uint32_t DDSCAPS_ALLOCONLOAD = 0x04000000u;
static const uint32_t DDSCAPS_LOCALVIDMEM = 0x10000000u;
static const uint32_t DDSCAPS_NONLOCALVIDMEM = 0x20000000u;

// SetCooperativeLevel flags
static const uint32_t DDSCL_FULLSCREEN = 0x00000001u;
static const uint32_t DDSCL_ALLOWREBOOT = 0x00000002u;
static const uint32_t DDSCL_NOWINDOWCHANGES = 0x00000004u;
static const uint32_t DDSCL_NORMAL = 0x00000008u;
static const uint32_t DDSCL_EXCLUSIVE = 0x00000010u;
static const uint32_t DDSCL_ALLOWMODEX = 0x00000040u;

// Lock / Blt / Flip flags
static const uint32_t DDLOCK_SURFACEMEMORYPTR = 0x00000000u;
static const uint32_t DDLOCK_WAIT = 0x00000001u;
static const uint32_t DDLOCK_READONLY = 0x00000010u;
static const uint32_t DDLOCK_WRITEONLY = 0x00000020u;
static const uint32_t DDLOCK_NOSYSLOCK = 0x00000800u;

static const uint32_t DDBLT_COLORFILL = 0x00000400u;
static const uint32_t DDBLT_DDFX = 0x00000800u;
static const uint32_t DDBLT_KEYDEST = 0x00002000u;
// The OVERRIDE forms take the key from the DDBLTFX the caller passes instead
// of from the surface, which is how a caller keys one blit without disturbing
// the surface's own key.
static const uint32_t DDBLT_KEYDESTOVERRIDE = 0x00004000u;
static const uint32_t DDBLT_KEYSRC = 0x00008000u;
static const uint32_t DDBLT_KEYSRCOVERRIDE = 0x00010000u;
static const uint32_t DDBLT_ROP = 0x00020000u;
static const uint32_t DDBLT_WAIT = 0x01000000u;
static const uint32_t DDBLT_DEPTHFILL = 0x02000000u;

static const uint32_t DDBLTFAST_NOCOLORKEY = 0x00000000u;
static const uint32_t DDBLTFAST_SRCCOLORKEY = 0x00000001u;
static const uint32_t DDBLTFAST_DESTCOLORKEY = 0x00000002u;
static const uint32_t DDBLTFAST_WAIT = 0x00000010u;

static const uint32_t DDFLIP_WAIT = 0x00000001u;

// DDBLTFX, 100 bytes; only dwFillColor matters to a colour fill.
// DDBLTFX is 100 bytes and ends with the two override colour keys.
enum {
    DDBLTFX_SIZE = 100,
    DDBLTFX_OFF_dwFillColor = 0x50,
    DDBLTFX_OFF_ddckDestColorkey = 0x54,
    DDBLTFX_OFF_ddckSrcColorkey = 0x5c
};

// DDCOLORKEY, 8 bytes.
enum { DDCK_OFF_lo = 0x00, DDCK_OFF_hi = 0x04 };
// From ddraw.h. These were wrong: DDCKEY_DESTBLT is 0x2 and DDCKEY_SRCBLT is
// 0x8. With 0x1 and 0x4 the flag test picked out DDCKEY_COLORSPACE and
// DDCKEY_DESTOVERLAY instead, so SetColorKey(DDCKEY_SRCBLT) stored a
// destination key and the source key was never set at all - which is why a
// keyed cursor blitted as an opaque block.
static const uint32_t DDCKEY_COLORSPACE = 0x00000001u;
static const uint32_t DDCKEY_DESTBLT = 0x00000002u;
static const uint32_t DDCKEY_DESTOVERLAY = 0x00000004u;
static const uint32_t DDCKEY_SRCBLT = 0x00000008u;
static const uint32_t DDCKEY_SRCOVERLAY = 0x00000010u;

// DDPCAPS_ (CreatePalette)
static const uint32_t DDPCAPS_4BIT = 0x00000001u;
static const uint32_t DDPCAPS_8BITENTRIES = 0x00000002u;
static const uint32_t DDPCAPS_8BIT = 0x00000004u;
static const uint32_t DDPCAPS_INITIALIZE = 0x00000008u;
static const uint32_t DDPCAPS_PRIMARYSURFACE = 0x00000010u;
static const uint32_t DDPCAPS_ALLOW256 = 0x00000040u;
static const uint32_t DDPCAPS_VSYNC = 0x00000080u;
static const uint32_t DDPCAPS_ALPHA = 0x00000400u;

// EnumDisplayModes flags
static const uint32_t DDEDM_REFRESHRATES = 0x00000001u;

// DDCAPS: the DX6 record is 380 bytes. Only the fields the game reads matter.
enum {
    DDCAPS_SIZE = 380,
    DDCAPS_OFF_dwSize = 0x00,
    DDCAPS_OFF_dwCaps = 0x04,
    DDCAPS_OFF_dwCaps2 = 0x08,
    DDCAPS_OFF_dwCKeyCaps = 0x0c,
    DDCAPS_OFF_dwFXCaps = 0x10,
    DDCAPS_OFF_dwFXAlphaCaps = 0x14,
    DDCAPS_OFF_dwPalCaps = 0x18,
    DDCAPS_OFF_dwSVCaps = 0x1c,
    DDCAPS_OFF_dwVidMemTotal = 0x60,
    DDCAPS_OFF_dwVidMemFree = 0x64,
    DDCAPS_OFF_ddsCaps = 0x50,
};
static const uint32_t DDCAPS_BLT = 0x00000020u;
static const uint32_t DDCAPS_BLTCOLORFILL = 0x04000000u;
static const uint32_t DDCAPS_BLTSTRETCH = 0x00000200u;
static const uint32_t DDCAPS_COLORKEY = 0x00000400u;
static const uint32_t DDCAPS_PALETTE = 0x00008000u;
static const uint32_t DDCAPS_3D = 0x00000001u;

// DDDEVICEIDENTIFIER (DX6), 1064 bytes.
enum {
    DDDEVID_SIZE = 1064,
    DDDEVID_OFF_szDriver = 0x000,        // char[512]
    DDDEVID_OFF_szDescription = 0x200,   // char[512]
    DDDEVID_OFF_liDriverVersion = 0x400, // LARGE_INTEGER
    DDDEVID_OFF_dwVendorId = 0x408,
    DDDEVID_OFF_dwDeviceId = 0x40c,
    DDDEVID_OFF_dwSubSysId = 0x410,
    DDDEVID_OFF_dwRevision = 0x414,
    DDDEVID_OFF_guid = 0x418,
};

// ---------------------------------------------------------------------------
// Direct3D
// ---------------------------------------------------------------------------
// D3DPRIMCAPS, 56 bytes.
enum {
    D3DPRIMCAPS_SIZE = 56,
    D3DPC_OFF_dwSize = 0x00,
    D3DPC_OFF_dwMiscCaps = 0x04,
    D3DPC_OFF_dwRasterCaps = 0x08,
    D3DPC_OFF_dwZCmpCaps = 0x0c,
    D3DPC_OFF_dwSrcBlendCaps = 0x10,
    D3DPC_OFF_dwDestBlendCaps = 0x14,
    D3DPC_OFF_dwAlphaCmpCaps = 0x18,
    D3DPC_OFF_dwShadeCaps = 0x1c,
    D3DPC_OFF_dwTextureCaps = 0x20,
    D3DPC_OFF_dwTextureFilterCaps = 0x24,
    D3DPC_OFF_dwTextureBlendCaps = 0x28,
    D3DPC_OFF_dwTextureAddressCaps = 0x2c,
    D3DPC_OFF_dwStippleWidth = 0x30,
    D3DPC_OFF_dwStippleHeight = 0x34,
};

// D3DDEVICEDESC (DX6), 252 bytes.
enum {
    D3DDEVICEDESC_SIZE = 252,
    D3DDD_OFF_dwSize = 0x00,
    D3DDD_OFF_dwFlags = 0x04,
    D3DDD_OFF_dcmColorModel = 0x08,
    D3DDD_OFF_dwDevCaps = 0x0c,
    D3DDD_OFF_dtcTransformCaps = 0x10, // {dwSize, dwCaps}
    D3DDD_OFF_bClipping = 0x18,
    D3DDD_OFF_dlcLightingCaps = 0x1c, // {dwSize,dwCaps,dwLightingModel,dwNumLights}
    D3DDD_OFF_dpcLineCaps = 0x2c,
    D3DDD_OFF_dpcTriCaps = 0x64,
    D3DDD_OFF_dwDeviceRenderBitDepth = 0x9c,
    D3DDD_OFF_dwDeviceZBufferBitDepth = 0xa0,
    D3DDD_OFF_dwMaxBufferSize = 0xa4,
    D3DDD_OFF_dwMaxVertexCount = 0xa8,
    D3DDD_OFF_dwMinTextureWidth = 0xac,
    D3DDD_OFF_dwMinTextureHeight = 0xb0,
    D3DDD_OFF_dwMaxTextureWidth = 0xb4,
    D3DDD_OFF_dwMaxTextureHeight = 0xb8,
    D3DDD_OFF_dwMinStippleWidth = 0xbc,
    D3DDD_OFF_dwMaxStippleWidth = 0xc0,
    D3DDD_OFF_dwMinStippleHeight = 0xc4,
    D3DDD_OFF_dwMaxStippleHeight = 0xc8,
    D3DDD_OFF_dwMaxTextureRepeat = 0xcc,
    D3DDD_OFF_dwMaxTextureAspectRatio = 0xd0,
    D3DDD_OFF_dwMaxAnisotropy = 0xd4,
    D3DDD_OFF_dvGuardBandLeft = 0xd8,
    D3DDD_OFF_dvGuardBandTop = 0xdc,
    D3DDD_OFF_dvGuardBandRight = 0xe0,
    D3DDD_OFF_dvGuardBandBottom = 0xe4,
    D3DDD_OFF_dvExtentsAdjust = 0xe8,
    D3DDD_OFF_dwStencilCaps = 0xec,
    D3DDD_OFF_dwFVFCaps = 0xf0,
    D3DDD_OFF_dwTextureOpCaps = 0xf4,
    D3DDD_OFF_wMaxTextureBlendStages = 0xf8,
    D3DDD_OFF_wMaxSimultaneousTextures = 0xfa,
};

// D3DFINDDEVICESEARCH (92) and D3DFINDDEVICERESULT (524).
enum {
    D3DFDS_SIZE = 92,
    D3DFDS_OFF_dwSize = 0x00,
    D3DFDS_OFF_dwFlags = 0x04,
    D3DFDS_OFF_bHardware = 0x08,
    D3DFDS_OFF_dcmColorModel = 0x0c,
    D3DFDS_OFF_guid = 0x10,
    D3DFDS_OFF_dwCaps = 0x20,
    D3DFDS_OFF_dpcPrimCaps = 0x24,

    D3DFDR_SIZE = 524,
    D3DFDR_OFF_dwSize = 0x00,
    D3DFDR_OFF_guid = 0x04,
    D3DFDR_OFF_ddHwDesc = 0x14,
    D3DFDR_OFF_ddSwDesc = 0x110,
};
// From d3dcaps.h. init_d3d (0x42ef60) passes dwFlags = 2, which is
// D3DFDS_GUID: it searches by the IID_IDirect3DHALDevice it just stored and
// leaves bHardware zero. Getting these backwards makes that search match a
// software device instead of the HAL one.
static const uint32_t D3DFDS_COLORMODEL = 0x00000001u;
static const uint32_t D3DFDS_GUID = 0x00000002u;
static const uint32_t D3DFDS_HARDWARE = 0x00000004u;
static const uint32_t D3DFDS_TRICAPS = 0x00000008u;
static const uint32_t D3DFDS_LINECAPS = 0x00000010u;
static const uint32_t D3DFDS_MISCCAPS = 0x00000020u;
static const uint32_t D3DFDS_RASTERCAPS = 0x00000040u;
static const uint32_t D3DFDS_ZCMPCAPS = 0x00000080u;
static const uint32_t D3DFDS_ALPHACMPCAPS = 0x00000100u;
static const uint32_t D3DFDS_SRCBLENDCAPS = 0x00000200u;
static const uint32_t D3DFDS_DSTBLENDCAPS = 0x00000400u;
static const uint32_t D3DFDS_SHADECAPS = 0x00000800u;
static const uint32_t D3DFDS_TEXTURECAPS = 0x00001000u;

// D3DDEVICEDESC dwFlags
static const uint32_t D3DDD_COLORMODEL = 0x00000001u;
static const uint32_t D3DDD_DEVCAPS = 0x00000002u;
static const uint32_t D3DDD_TRANSFORMCAPS = 0x00000004u;
static const uint32_t D3DDD_LIGHTINGCAPS = 0x00000008u;
static const uint32_t D3DDD_BCLIPPING = 0x00000010u;
static const uint32_t D3DDD_LINECAPS = 0x00000020u;
static const uint32_t D3DDD_TRICAPS = 0x00000040u;
static const uint32_t D3DDD_DEVICERENDERBITDEPTH = 0x00000080u;
static const uint32_t D3DDD_DEVICEZBUFFERBITDEPTH = 0x00000100u;
static const uint32_t D3DDD_MAXBUFFERSIZE = 0x00000200u;
static const uint32_t D3DDD_MAXVERTEXCOUNT = 0x00000400u;

static const uint32_t D3DCOLOR_MONO = 1u;
static const uint32_t D3DCOLOR_RGB = 2u;

// D3DPT_ primitive types
static const uint32_t D3DPT_POINTLIST = 1u;
static const uint32_t D3DPT_LINELIST = 2u;
static const uint32_t D3DPT_LINESTRIP = 3u;
static const uint32_t D3DPT_TRIANGLELIST = 4u;
static const uint32_t D3DPT_TRIANGLESTRIP = 5u;
static const uint32_t D3DPT_TRIANGLEFAN = 6u;

// D3DVT_ vertex types and their strides in bytes.
static const uint32_t D3DVT_VERTEX = 1u;   // x y z nx ny nz tu tv          = 32
static const uint32_t D3DVT_LVERTEX = 2u;  // x y z r? color spec tu tv     = 32
static const uint32_t D3DVT_TLVERTEX = 3u; // sx sy sz rhw color spec tu tv = 32
static inline uint32_t d3d_vertex_stride(uint32_t vt) {
    switch (vt) {
    case D3DVT_VERTEX:
        return 32;
    case D3DVT_LVERTEX:
        return 32;
    case D3DVT_TLVERTEX:
        return 32;
    default:
        return 0;
    }
}

// D3DTRANSFORMSTATE_
static const uint32_t D3DTRANSFORMSTATE_WORLD = 1u;
static const uint32_t D3DTRANSFORMSTATE_VIEW = 2u;
static const uint32_t D3DTRANSFORMSTATE_PROJECTION = 3u;
static const uint32_t D3DTRANSFORMSTATE_MAX = 4u;

// The render-state enumeration tops out at 152 in DX6; the shim keeps a
// snapshot array of this many dwords.
static const uint32_t D3D_RENDERSTATE_MAX = 256u;
static const uint32_t D3D_LIGHTSTATE_MAX = 32u;

static const uint32_t D3DRENDERSTATE_TEXTUREHANDLE = 1u;
static const uint32_t D3DRENDERSTATE_ANTIALIAS = 2u;
static const uint32_t D3DRENDERSTATE_TEXTUREPERSPECTIVE = 4u;
static const uint32_t D3DRENDERSTATE_ZENABLE = 7u;
static const uint32_t D3DRENDERSTATE_FILLMODE = 8u;
static const uint32_t D3DRENDERSTATE_SHADEMODE = 9u;
static const uint32_t D3DRENDERSTATE_ZWRITEENABLE = 14u;
static const uint32_t D3DRENDERSTATE_ALPHATESTENABLE = 15u;
static const uint32_t D3DRENDERSTATE_TEXTUREMAG = 17u;
static const uint32_t D3DRENDERSTATE_TEXTUREMIN = 18u;
static const uint32_t D3DRENDERSTATE_SRCBLEND = 19u;
static const uint32_t D3DRENDERSTATE_DESTBLEND = 20u;
static const uint32_t D3DRENDERSTATE_TEXTUREMAPBLEND = 21u;
static const uint32_t D3DRENDERSTATE_CULLMODE = 22u;
static const uint32_t D3DRENDERSTATE_ZFUNC = 23u;
static const uint32_t D3DRENDERSTATE_ALPHAREF = 24u;
static const uint32_t D3DRENDERSTATE_ALPHAFUNC = 25u;
static const uint32_t D3DRENDERSTATE_DITHERENABLE = 26u;
static const uint32_t D3DRENDERSTATE_ALPHABLENDENABLE = 27u;
static const uint32_t D3DRENDERSTATE_FOGENABLE = 28u;
static const uint32_t D3DRENDERSTATE_NORMALIZENORMALS = 143u;
static const uint32_t D3DRENDERSTATE_SPECULARENABLE = 29u;
static const uint32_t D3DRENDERSTATE_SUBPIXEL = 31u;
static const uint32_t D3DRENDERSTATE_SUBPIXELX = 32u;
static const uint32_t D3DRENDERSTATE_TEXTUREADDRESS = 3u;
static const uint32_t D3DRENDERSTATE_COLORKEYENABLE = 41u;
static const uint32_t D3DRENDERSTATE_TEXTUREADDRESSU = 44u;
static const uint32_t D3DRENDERSTATE_TEXTUREADDRESSV = 45u;
static const uint32_t D3DRENDERSTATE_WRAPU = 5u;
static const uint32_t D3DRENDERSTATE_WRAPV = 6u;

// D3DCLEAR_
static const uint32_t D3DCLEAR_TARGET = 0x00000001u;
static const uint32_t D3DCLEAR_ZBUFFER = 0x00000002u;

// D3DVIEWPORT (dwSize 44) and D3DVIEWPORT2 (dwSize 60).
// D3DVIEWPORT and D3DVIEWPORT2 are both 11 dwords = 44 bytes. They differ
// only in the meaning of the four fields at 0x14..0x20 (dvScaleX/dvScaleY/
// dvMaxX/dvMaxY versus dvClipX/dvClipY/dvClipWidth/dvClipHeight), which this
// shim does not read; dwSize..dwHeight and dvMinZ/dvMaxZ are identical.
// Confirmed against d3d_create_viewport (0x521ef0), which zeroes 11 dwords
// and passes them to SetViewport2 at slot +0x44.
enum {
    D3DVIEWPORT_SIZE = 44,
    D3DVIEWPORT2_SIZE = 44,
    D3DVP_OFF_dwSize = 0x00,
    D3DVP_OFF_dwX = 0x04,
    D3DVP_OFF_dwY = 0x08,
    D3DVP_OFF_dwWidth = 0x0c,
    D3DVP_OFF_dwHeight = 0x10,
    D3DVP_OFF_dvScaleX = 0x14, // D3DVIEWPORT only; D3DVIEWPORT2 has dvClipX
    D3DVP_OFF_dvMinZ = 0x24,
    D3DVP_OFF_dvMaxZ = 0x28,
};

// D3DCLIPSTATUS: dwFlags, dwStatus and six D3DVALUEs = 8 dwords = 32 bytes.
enum { D3DCLIPSTATUS_SIZE = 32 };
static const uint32_t D3DCLIPSTATUS_STATUS = 1u;

// D3DMATERIAL, dwSize 68.
enum { D3DMATERIAL_SIZE = 68 };
// D3DLIGHT / D3DLIGHT2, dwSize 68 / 72.
enum { D3DLIGHT_SIZE = 68, D3DLIGHT2_SIZE = 72 };

// ---------------------------------------------------------------------------
// DirectSound
// ---------------------------------------------------------------------------
// DSBUFFERDESC, 20 bytes.
enum {
    DSBUFFERDESC_SIZE = 20,
    DSBD_OFF_dwSize = 0x00,
    DSBD_OFF_dwFlags = 0x04,
    DSBD_OFF_dwBufferBytes = 0x08,
    DSBD_OFF_dwReserved = 0x0c,
    DSBD_OFF_lpwfxFormat = 0x10,
};
static const uint32_t DSBCAPS_PRIMARYBUFFER = 0x00000001u;
static const uint32_t DSBCAPS_STATIC = 0x00000002u;
static const uint32_t DSBCAPS_LOCHARDWARE = 0x00000004u;
static const uint32_t DSBCAPS_LOCSOFTWARE = 0x00000008u;
static const uint32_t DSBCAPS_CTRL3D = 0x00000010u;
static const uint32_t DSBCAPS_CTRLFREQUENCY = 0x00000020u;
static const uint32_t DSBCAPS_CTRLPAN = 0x00000040u;
static const uint32_t DSBCAPS_CTRLVOLUME = 0x00000080u;
static const uint32_t DSBCAPS_CTRLPOSITIONNOTIFY = 0x00000100u;
static const uint32_t DSBCAPS_STICKYFOCUS = 0x00004000u;
static const uint32_t DSBCAPS_GLOBALFOCUS = 0x00008000u;
static const uint32_t DSBCAPS_GETCURRENTPOSITION2 = 0x00010000u;

static const uint32_t DSBPLAY_LOOPING = 0x00000001u;
static const uint32_t DSBSTATUS_PLAYING = 0x00000001u;
static const uint32_t DSBSTATUS_BUFFERLOST = 0x00000002u;
static const uint32_t DSBSTATUS_LOOPING = 0x00000004u;

static const int32_t DSBVOLUME_MIN = -10000;
static const int32_t DSBVOLUME_MAX = 0;
static const int32_t DSBPAN_LEFT = -10000;
static const int32_t DSBPAN_RIGHT = 10000;

// WAVEFORMATEX, 18 bytes (16 without cbSize).
enum {
    WFX_OFF_wFormatTag = 0x00,
    WFX_OFF_nChannels = 0x02,
    WFX_OFF_nSamplesPerSec = 0x04,
    WFX_OFF_nAvgBytesPerSec = 0x08,
    WFX_OFF_nBlockAlign = 0x0c,
    WFX_OFF_wBitsPerSample = 0x0e,
    WFX_OFF_cbSize = 0x10,
    WFX_SIZE = 18,
};
static const uint16_t WAVE_FORMAT_PCM = 1;

// DSCAPS, 96 bytes.
enum { DSCAPS_SIZE = 96, DSCAPS_OFF_dwSize = 0x00, DSCAPS_OFF_dwFlags = 0x04 };
static const uint32_t DSCAPS_PRIMARY16BIT = 0x00000008u;
static const uint32_t DSCAPS_PRIMARYSTEREO = 0x00000004u;
static const uint32_t DSCAPS_CONTINUOUSRATE = 0x00000010u;
static const uint32_t DSCAPS_EMULDRIVER = 0x00000020u;
static const uint32_t DSCAPS_CERTIFIED = 0x00000040u;
static const uint32_t DSCAPS_SECONDARY16BIT = 0x00000800u;
static const uint32_t DSCAPS_SECONDARYSTEREO = 0x00000400u;

// DSBCAPS (the query structure), 20 bytes.
enum { DSBCAPS_SIZE = 20 };

// ---------------------------------------------------------------------------
// DirectInput
// ---------------------------------------------------------------------------
static const uint32_t DIRECTINPUT_VERSION_5 = 0x0500u;

// DIDEVCAPS / DIDEVCAPS_DX3. DX3 is dwSize dwFlags dwDevType dwAxes
// dwButtons dwPOVs (24 bytes); DX5 adds five force-feedback and revision
// dwords (44 bytes).
enum {
    DIDEVCAPS_SIZE = 44,
    DIDEVCAPS_DX3_SIZE = 24,
    DIDC_OFF_dwSize = 0x00,
    DIDC_OFF_dwFlags = 0x04,
    DIDC_OFF_dwDevType = 0x08,
    DIDC_OFF_dwAxes = 0x0c,
    DIDC_OFF_dwButtons = 0x10,
    DIDC_OFF_dwPOVs = 0x14,
};
static const uint32_t DIDC_ATTACHED = 0x00000001u;
static const uint32_t DIDEVTYPE_MOUSE = 2u;
static const uint32_t DIDEVTYPE_KEYBOARD = 3u;

// DIDEVICEOBJECTDATA is four dwords = 16 bytes in DirectX 3 through 7; the
// 20-byte form with uAppData is DirectX 8 only. The game asks for 16: at
// 0x52ceda it calls GetDeviceData (slot +0x28) with cbObjectData 0x10 and a
// 160-byte buffer for 10 events. Both strides are accepted.
enum {
    DIDEVICEOBJECTDATA_SIZE = 16,
    DIDEVICEOBJECTDATA_DX8_SIZE = 20,
    DIDOD_OFF_dwOfs = 0x00,
    DIDOD_OFF_dwData = 0x04,
    DIDOD_OFF_dwTimeStamp = 0x08,
    DIDOD_OFF_dwSequence = 0x0c,
    DIDOD_OFF_uAppData = 0x10, // DirectX 8 only
};

// DIMOUSESTATE (16 bytes) / DIMOUSESTATE2 (20 bytes).
enum {
    DIMOUSESTATE_SIZE = 16,
    DIMOUSESTATE2_SIZE = 20,
    DIMS_OFF_lX = 0x00,
    DIMS_OFF_lY = 0x04,
    DIMS_OFF_lZ = 0x08,
    DIMS_OFF_rgbButtons = 0x0c,
};

// DIPROPHEADER, 16 bytes; DIPROPDWORD is header + dwData.
enum {
    DIPROPHEADER_SIZE = 16,
    DIPROPDWORD_SIZE = 20,
    DIPH_OFF_dwSize = 0x00,
    DIPH_OFF_dwHeaderSize = 0x04,
    DIPH_OFF_dwObj = 0x08,
    DIPH_OFF_dwHow = 0x0c,
    DIPROPDWORD_OFF_dwData = 0x10,
};

static const uint32_t DISCL_EXCLUSIVE = 0x00000001u;
static const uint32_t DISCL_NONEXCLUSIVE = 0x00000002u;
static const uint32_t DISCL_FOREGROUND = 0x00000004u;
static const uint32_t DISCL_BACKGROUND = 0x00000008u;

// ---------------------------------------------------------------------------
// QMixer
// ---------------------------------------------------------------------------
// QSWAVEMIXOPENWAVEDATA is five dwords = 20 bytes. Recovered by disassembling
// both call sites and the routine that fills its format field; the Ghidra
// pseudocode for 0x56f720 loses the stores, so the disassembly is the source.
//
// 0x56f720 (flags 8), frame base E = esp after the four entry pushes:
//     0056f759  mov [esp+0x10], ecx   record+0x00 = &WAVEFORMATEX buffer
//     0056f765  mov [esp+0x18], eax   record+0x04 = edi+0x28   (sample data)
//     0056f774  mov [esp+0x24], edx   record+0x08 = [edi+4]    (byte count)
//     0056f778  mov [esp+0x28], edi   record+0x0c = 0
//     0056f77c  mov [esp+0x2c], edi   record+0x10 = 0
//     0056f761  lea ecx, [esp+0x14]   record base = E+0x10, passed as arg 2
//   Each store lands at record+0, +4, +8, +0xc, +0x10 once the intervening
//   pushes are accounted for. The ten-dword clear at 0x56f797 is a different
//   structure at E+0x24: the QSWaveMixPlayEx parameter block.
//
// 0x56f870 (flags 0x11), frame base F = esp at 0x56f8da:
//     0056f8e4..ef  five dwords at F+0x10 cleared: the record is 20 bytes
//     0056f8f8  mov [esp+0x10], edx   record+0x00 = &WAVEFORMATEX buffer
//     0056f900  mov [esp+0x14], eax   record+0x04 = [edi+0x90] (byte count)
//     0056f92d  mov [esp+0x24], ...   record+0x08 = 0x576660   (callback)
//     0056f93d  mov [esp+0x28], edi   record+0x0c = edi        (context)
//     0056f935  mov [esp+0x2c], 0     record+0x10 = 0
//
// Field 0 is written at both sites and always points at the buffer filled by
// virtual slot +0x50 of the caller's own class, which is 0x5711c0. That
// routine writes a WAVEFORMATEX and nothing else:
//     005711e6  mov word [ecx], 1              wFormatTag = WAVE_FORMAT_PCM
//     005711eb  mov word [ecx+2], dx           nChannels (1 or 2)
//     005711f3  mov [ecx+4], eax               nSamplesPerSec
//     0057121a  mov [ecx+8], edx               nAvgBytesPerSec = rate * align
//     0057120c  mov word [ecx+0xc], ax         nBlockAlign = (bits*ch+7)/8
//     00571222  mov word [ecx+0xe], ax         wBitsPerSample
//     00571227  mov word [ecx+0x10], si        cbSize = 0
//
// So the waves are raw PCM plus an explicit format, never RIFF files. Bit 0x10
// of the flags selects the streaming form, where field 1 is a total length and
// fields 2 and 3 are a callback and its context instead of a data pointer.
enum {
    QSWAVEMIXOPENWAVEDATA_SIZE = 20,
    QSOWD_OFF_lpFormat = 0x00,    // LPWAVEFORMATEX, written at every call site
    QSOWD_OFF_lpData = 0x04,      // static form: the PCM; streaming: a length
    QSOWD_OFF_dwDataSize = 0x08,  // static form: the byte count
    QSOWD_OFF_pfnCallback = 0x08, // streaming form
    QSOWD_OFF_pvContext = 0x0c,   // streaming form
    QSOWD_OFF_reserved = 0x10,    // zero at both call sites
};
// Bit 0x10 of the QSWaveMixOpenWaveEx flags means the wave is streamed through
// the callback in the record rather than supplied whole.
static const uint32_t QSWAVEMIX_STREAMED = 0x10u;

// Direct3D 11 / DXGI SDK records, explicitly the x86 ABI. Guest pointers and
// BOOLs occupy four bytes even on a 64-bit host. No host pointer crosses here.
struct DXGI_RATIONAL {
    uint32_t Numerator, Denominator;
};
struct DXGI_MODE_DESC {
    uint32_t Width, Height;
    DXGI_RATIONAL RefreshRate;
    uint32_t Format, ScanlineOrdering, Scaling;
};
struct DXGI_SAMPLE_DESC {
    uint32_t Count, Quality;
};
struct DXGI_SWAP_CHAIN_DESC {
    DXGI_MODE_DESC BufferDesc;
    DXGI_SAMPLE_DESC SampleDesc;
    uint32_t BufferUsage, BufferCount, OutputWindow, Windowed, SwapEffect, Flags;
};
struct D3D11_TEXTURE2D_DESC {
    uint32_t Width, Height, MipLevels, ArraySize, Format;
    DXGI_SAMPLE_DESC SampleDesc;
    uint32_t Usage, BindFlags, CPUAccessFlags, MiscFlags;
};
struct D3D11_BUFFER_DESC {
    uint32_t ByteWidth, Usage, BindFlags, CPUAccessFlags, MiscFlags, StructureByteStride;
};
struct D3D11_MAPPED_SUBRESOURCE {
    uint32_t pData, RowPitch, DepthPitch;
};
struct D3D11_SUBRESOURCE_DATA {
    uint32_t pSysMem, SysMemPitch, SysMemSlicePitch;
};
struct D3D11_VIEWPORT {
    float TopLeftX, TopLeftY, Width, Height, MinDepth, MaxDepth;
};
struct D3D11_RENDER_TARGET_BLEND_DESC {
    uint32_t BlendEnable, SrcBlend, DestBlend, BlendOp, SrcBlendAlpha, DestBlendAlpha, BlendOpAlpha;
    uint8_t RenderTargetWriteMask, padding[3];
};
struct D3D11_BLEND_DESC {
    uint32_t AlphaToCoverageEnable, IndependentBlendEnable;
    D3D11_RENDER_TARGET_BLEND_DESC RenderTarget[8];
};
struct D3D11_SAMPLER_DESC {
    uint32_t Filter, AddressU, AddressV, AddressW;
    float MipLODBias;
    uint32_t MaxAnisotropy, ComparisonFunc;
    float BorderColor[4], MinLOD, MaxLOD;
};
struct D3D11_RASTERIZER_DESC {
    uint32_t FillMode, CullMode, FrontCounterClockwise;
    int32_t DepthBias;
    float DepthBiasClamp, SlopeScaledDepthBias;
    uint32_t DepthClipEnable, ScissorEnable, MultisampleEnable, AntialiasedLineEnable;
};
struct D3D11_INPUT_ELEMENT_DESC {
    uint32_t SemanticName, SemanticIndex, Format, InputSlot, AlignedByteOffset, InputSlotClass,
        InstanceDataStepRate;
};
struct D3D11_BOX {
    uint32_t left, top, front, right, bottom, back;
};
#include <stddef.h>
static_assert(sizeof(DXGI_SWAP_CHAIN_DESC) == 60 &&
              offsetof(DXGI_SWAP_CHAIN_DESC, OutputWindow) == 44);
static_assert(sizeof(D3D11_TEXTURE2D_DESC) == 44 &&
              offsetof(D3D11_TEXTURE2D_DESC, BindFlags) == 32);
static_assert(sizeof(D3D11_BUFFER_DESC) == 24 && sizeof(D3D11_SUBRESOURCE_DATA) == 12);
static_assert(sizeof(D3D11_MAPPED_SUBRESOURCE) == 12 && sizeof(D3D11_VIEWPORT) == 24);
static_assert(sizeof(D3D11_BLEND_DESC) == 264 &&
              offsetof(D3D11_RENDER_TARGET_BLEND_DESC, RenderTargetWriteMask) == 28);
static_assert(sizeof(D3D11_SAMPLER_DESC) == 52 && offsetof(D3D11_SAMPLER_DESC, BorderColor) == 28);
static_assert(sizeof(D3D11_INPUT_ELEMENT_DESC) == 28 && sizeof(D3D11_RASTERIZER_DESC) == 40);
