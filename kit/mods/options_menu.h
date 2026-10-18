#pragma once
#include "pop_mod_api.h"
#include <string>

bool mods_options_init();
void mods_options_reset();
void mods_options_frame();
bool mods_options_open(const char *mod_id, bool toggle = false);
// The native enumerated list and CONFIG00 choice are authoritative.
int mods_options_resolution_count();
int mods_options_resolution_value();
std::string mods_options_resolution_label();
void mods_options_resolution_request(int index);
