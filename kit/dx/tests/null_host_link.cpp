// null_host_link.cpp - proves the weak host defaults resolve on this platform.
//
// Links the DirectX shims and the shared host code with no strong host
// callback anywhere, then calls a few of the defaults. On ELF and Mach-O this
// is what every partial host already relies on; on COFF it is the thing the
// spec lists as the port's main risk, so it gets a binary of its own.
#include "../host_api.h"
#include "../../host/boot.h"

#include <stdio.h>

int main() {
    host_set_display_mode(640, 480, 8);
    host_present(nullptr, 0, 0, 8, nullptr, 0);
    host_d3d_begin_scene();
    host_d3d_end_scene();
    host_pad_mode();
    host_pad_native_axes();
    boot_report_lock();
    boot_report_unlock();
    puts("null host linked: weak defaults resolved");
    return 0;
}
