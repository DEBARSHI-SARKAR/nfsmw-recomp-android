/* culling.c - the renderer's frustum tests, native.
 *
 * Three small x87 routines the world renderer calls thousands of times a
 * frame. Translated, each FPU instruction is a register-stack operation on
 * the X86 state; here the same arithmetic runs on host doubles, in the same
 * order and through the same x86.h helpers (fx87, fto_float, fcom, fucom),
 * so every result, output float and status-word bit matches the translation.
 * Registers the callers rely on are set as the originals leave them; the
 * guest stack below the caller's ESP, which the originals use as scratch and
 * nobody reads afterwards, is left alone.
 *
 * RECOMP_NATIVE=0 runs the translations instead. RECOMP_NATIVE_SELFTEST=1
 * runs both on random input the first time one is called and reports any
 * difference. */
#include "funcs.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void native_006c9440(X86 *c);
void native_006c9510(X86 *c);
void native_006c9570(X86 *c);

static const uint32_t K_ZERO = 0x00890968u;  /* float 0.0 */
static const uint32_t K_ONE = 0x0089096cu;   /* float 1.0 */
static const uint32_t K_RADIUS = 0x00a3781cu; /* radius scale: game.toml redirects 0x008910c4 here */

static void selftest(X86 *c);

/* 1 native, 0 translated; -1 until the environment has been read. The
 * self-test flips it around each half of a comparison, so a translated
 * function's calls into the others stay translated too. */
static int g_native = -1;

static int native_on(X86 *c) {
    if (__builtin_expect(g_native >= 0, 1))
        return g_native;
    const char *e = getenv("RECOMP_NATIVE");
    int want = !(e && e[0] == '0');
    const char *t = getenv("RECOMP_NATIVE_SELFTEST");
    if (t && t[0] == '1')
        selftest(c);
    g_native = want;
    return g_native;
}

static uint32_t ah_of(const X86 *c) {
    return (uint32_t)(fstsw(c) >> 8);
}
static int jp(uint32_t ah, uint32_t mask) {
    return (__builtin_popcount(ah & mask) & 1) == 0; /* PF: even parity */
}

/* ---- 006c9440 ------------------------------------------------------------
 * cdecl (out_near, out_far, plane, point, dir) -> AL. The segment
 * point + t*dir against plane (a, b, c, d): writes the t range that lies
 * within +-point[3] of the plane. */
static uint32_t clip_plane(X86 *c, uint32_t esp) {
    uint32_t out0 = rd32(esp + 4), out1 = rd32(esp + 8);
    uint32_t plane = rd32(esp + 12), p = rd32(esp + 16), dir = rd32(esp + 20);
    uint32_t eax = plane;
    double pl0 = rdf32(plane), pl1 = rdf32(plane + 4), pl2 = rdf32(plane + 8);
    double dist = fx87(c, fx87(c, fx87(c, (double)rdf32(p + 4) * pl1) + fx87(c, (double)rdf32(p + 8) * pl2)) +
                              fx87(c, pl0 * (double)rdf32(p)));
    dist = fx87(c, dist + (double)rdf32(plane + 12));
    double den = fx87(c, fx87(c, (double)rdf32(dir + 4) * pl1) + fx87(c, (double)rdf32(dir + 8) * pl2));
    den = fx87(c, den + fx87(c, pl0 * (double)rdf32(dir)));
    fucom(c, den, (double)rdf32(K_ZERO));
    eax = (eax & 0xffff0000u) | fstsw(c);
    c->r[R_ECX] = p;
    c->r[R_EDX] = dir;
    if (!jp(ah_of(c), 0x44)) {
        /* den == 0: parallel. Inside when dist <= point[3]. */
        fcom(c, dist, (double)rdf32(p + 12));
        eax = (eax & 0xffff0000u) | fstsw(c);
        if (jp(ah_of(c), 0x41))
            return eax & ~0xffu;
        wr32(out0, 0);
        wr32(out1, 0x749dc5aeu); /* 1e32 */
        c->r[R_ECX] = out1;
        return (out0 & ~0xffu) | 1u;
    }
    double inv = fx87(c, fdivz(c, (double)rdf32(K_ONE), den));
    double p3 = rdf32(p + 12);
    float t1f = fto_float(c, fx87(c, fx87(c, p3 - dist) * inv));
    wrf32(esp + 12, t1f);
    double t2 = fx87(c, inv * fx87(c, -p3 - dist));
    double t1 = t1f;
    fcom(c, t1, t2);
    double lo = jp(ah_of(c), 0x05) ? t2 : t1;
    wrf32(out0, fto_float(c, lo));
    fcom(c, t1, t2);
    double hi = (ah_of(c) & 0x41) ? t2 : t1;
    wrf32(out1, fto_float(c, hi));
    c->r[R_EDX] = out0;
    return (out1 & ~0xffu) | 1u;
}

void native_006c9440(X86 *c) {
    if (!native_on(c)) {
        fn_006c9440(c);
        return;
    }
    uint32_t esp = c->r[R_ESP];
    c->r[R_EAX] = clip_plane(c, esp);
    c->eip = rd32(esp);
    c->r[R_ESP] = esp + 4;
}

/* ---- 006c9510 ------------------------------------------------------------
 * thiscall (planes; sphere) -> AL: the sphere (x, y, z, r) is on the inner
 * side of all six planes (a, b, c, d). */
static uint8_t sphere_in(X86 *c, uint32_t planes, float sx, float sy, float sz, float r, uint32_t *ecx_out) {
    const double zero = rdf32(K_ZERO);
    uint32_t p = planes + 4;
    uint8_t dl = 1;
    for (int i = 0; i < 6 && dl; ++i, p += 16) {
        double s = fx87(c, (double)rdf32(p + 4) * (double)sz);
        s = fx87(c, s + fx87(c, (double)rdf32(p - 4) * (double)sx));
        s = fx87(c, s + fx87(c, (double)sy * (double)rdf32(p)));
        s = fx87(c, s + (double)rdf32(p + 8));
        s = fx87(c, s + (double)r);
        fcom(c, s, zero);
        dl &= (ah_of(c) & 1) ? 0 : 1;
    }
    *ecx_out = p;
    return dl;
}

void native_006c9510(X86 *c) {
    if (!native_on(c)) {
        fn_006c9510(c);
        return;
    }
    uint32_t esp = c->r[R_ESP];
    uint32_t sph = rd32(esp + 4);
    uint32_t radius_bits = rd32(sph + 12);
    wr32(esp + 4, radius_bits);
    uint32_t ecx;
    uint8_t dl = sphere_in(c, c->r[R_ECX], rdf32(sph), rdf32(sph + 4), rdf32(sph + 8), rdf32(sph + 12), &ecx);
    c->r[R_EAX] = dl;
    c->r[R_ECX] = ecx;
    c->r[R_EDX] = (c->r[R_EDX] & ~0xffu) | dl;
    c->eip = rd32(esp);
    c->r[R_ESP] = esp + 8;
}

/* ---- 006c9570 ------------------------------------------------------------
 * thiscall (planes; sphere, dir) -> AL: the sphere swept along dir meets the
 * frustum. Every t at which the path crosses a plane's slab is tried as a
 * sphere position. */
void native_006c9570(X86 *c) {
    if (!native_on(c)) {
        fn_006c9570(c);
        return;
    }
    const uint32_t e = c->r[R_ESP];
    const uint32_t sph = rd32(e + 4), dir = rd32(e + 8), planes = c->r[R_ECX];
    const double zero = rdf32(K_ZERO);
    float list[13];
    int n = 0;
    /* The call frame 006c9440 sees: its outs are this function's own
     * argument slots, as in the original. */
    const uint32_t call = e - 0x80;
    wr32(call + 4, e + 8);
    wr32(call + 8, e + 4);
    wr32(call + 16, sph);
    wr32(call + 20, dir);
    for (int j = 0; j < 6; ++j) {
        wr32(call + 12, planes + 16u * (uint32_t)j);
        uint32_t al = clip_plane(c, call) & 0xff;
        if (!al)
            continue;
        fcom(c, rdf32(e + 8), zero);
        if (!(ah_of(c) & 1))
            list[++n] = rdf32(e + 8);
        fcom(c, rdf32(e + 4), zero);
        if (!(ah_of(c) & 1))
            list[++n] = rdf32(e + 4);
    }
    uint8_t result = 0;
    uint32_t ecx = c->r[R_ECX];
    const double k = rdf32(K_RADIUS);
    const double d0 = rdf32(dir), d1 = rdf32(dir + 4), d2 = rdf32(dir + 8);
    for (int i = 0; i < n; ++i) {
        double r = rdf32(sph + 12);
        double t = list[i + 1];
        double m0 = fx87(c, t * d0);
        float f1 = fto_float(c, fx87(c, t * d1));
        float f2 = fto_float(c, fx87(c, t * d2));
        float v0 = fto_float(c, fx87(c, m0 + (double)rdf32(sph)));
        float v1 = fto_float(c, fx87(c, (double)rdf32(sph + 4) + (double)f1));
        float v2 = fto_float(c, fx87(c, (double)rdf32(sph + 8) + (double)f2));
        float v3 = fto_float(c, fx87(c, r * k));
        result |= sphere_in(c, planes, v0, v1, v2, v3, &ecx);
    }
    c->r[R_EAX] = result;
    c->r[R_ECX] = n ? ecx : c->r[R_ECX];
    c->eip = rd32(e);
    c->r[R_ESP] = e + 12;
}

/* ---- self-test -------------------------------------------------------------
 * The translation and the replacement on the same random frustums, spheres
 * and directions, in scratch memory below the current stack. */
static uint32_t rnd_state = 0x12345678u;
static uint32_t rnd(void) {
    rnd_state = rnd_state * 1664525u + 1013904223u;
    return rnd_state;
}
static float rnd_float(void) {
    uint32_t k = rnd() % 64;
    if (k == 0)
        return 0.0f;
    if (k == 1)
        return -0.0f;
    if (k == 2)
        return 1e32f;
    if (k == 3)
        return (float)__builtin_nan("");
    return ((float)(int32_t)rnd() / 2147483648.0f) * (k < 32 ? 2.0f : 500.0f);
}

typedef void (*GuestFn)(X86 *);

static int compare_run(X86 *c, GuestFn translated, GuestFn native, uint32_t base, uint32_t esp, uint32_t len,
                       uint32_t out0, uint32_t out1, const char *name, int trial) {
    uint8_t *snapshot = malloc(len), *after = malloc(len);
    memcpy(snapshot, g_mem + base, len);
    X86 a = *c, b = *c;
    a.r[R_ESP] = b.r[R_ESP] = esp;
    g_native = 0;
    translated(&a);
    memcpy(after, g_mem + base, len);
    uint32_t a_out0 = out0 ? rd32(out0) : 0, a_out1 = out1 ? rd32(out1) : 0;
    memcpy(g_mem + base, snapshot, len);
    g_native = 1;
    native(&b);
    uint32_t b_out0 = out0 ? rd32(out0) : 0, b_out1 = out1 ? rd32(out1) : 0;
    memcpy(g_mem + base, snapshot, len);
    int bad = (a.r[R_EAX] & 0xff) != (b.r[R_EAX] & 0xff) || a.r[R_ESP] != b.r[R_ESP] || a.eip != b.eip ||
              a.fpu_top != b.fpu_top || (a.fpu_sw & 0x4705) != (b.fpu_sw & 0x4705) || a_out0 != b_out0 ||
              a_out1 != b_out1 || a.r[R_EBX] != b.r[R_EBX] || a.r[R_ESI] != b.r[R_ESI] ||
              a.r[R_EDI] != b.r[R_EDI] || a.r[R_EBP] != b.r[R_EBP];
    if (bad)
        fprintf(stderr,
                "native self-test %s #%d differs: eax %08x/%08x esp %08x/%08x eip %08x/%08x sw %04x/%04x "
                "outs %08x %08x / %08x %08x\n",
                name, trial, a.r[R_EAX], b.r[R_EAX], a.r[R_ESP], b.r[R_ESP], a.eip, b.eip, a.fpu_sw, b.fpu_sw,
                a_out0, a_out1, b_out0, b_out1);
    free(snapshot);
    free(after);
    return bad;
}

static void selftest(X86 *c) {
    const uint32_t base = c->r[R_ESP] - 0x20000;
    const uint32_t planes = base + 0x100, sph = base + 0x200, dir = base + 0x220, out = base + 0x240;
    const uint32_t stack = base + 0x10000;
    const uint32_t ret = 0x00401000u;
    int bad = 0, runs = 0;
    for (int trial = 0; trial < 3000; ++trial) {
        for (uint32_t i = 0; i < 24; ++i)
            wrf32(planes + 4 * i, rnd_float());
        for (uint32_t i = 0; i < 4; ++i)
            wrf32(sph + 4 * i, rnd_float());
        for (uint32_t i = 0; i < 3; ++i)
            wrf32(dir + 4 * i, rnd_float());
        if (trial % 7 == 0) /* a direction parallel to a plane */
            wrf32(dir + 4, 0.0f), wrf32(dir + 8, 0.0f), wrf32(dir, 0.0f);
        X86 s = *c;
        s.r[R_ECX] = planes;
        uint32_t esp = stack;
        /* 006c9440(out, out + 4, planes, sph, dir) */
        wr32(esp, ret);
        wr32(esp + 4, out);
        wr32(esp + 8, out + 4);
        wr32(esp + 12, planes + 16u * (uint32_t)(trial % 6));
        wr32(esp + 16, sph);
        wr32(esp + 20, dir);
        bad += compare_run(&s, fn_006c9440, native_006c9440, base, esp, 0x20000, out, out + 4, "006c9440", trial);
        /* 006c9510(sph) */
        wr32(esp, ret);
        wr32(esp + 4, sph);
        bad += compare_run(&s, fn_006c9510, native_006c9510, base, esp, 0x20000, 0, 0, "006c9510", trial);
        /* 006c9570(sph, dir) */
        wr32(esp, ret);
        wr32(esp + 4, sph);
        wr32(esp + 8, dir);
        bad += compare_run(&s, fn_006c9570, native_006c9570, base, esp, 0x20000, 0, 0, "006c9570", trial);
        runs += 3;
    }
    fprintf(stderr, "native self-test: %d runs, %d differ\n", runs, bad);
}
