// symbols.cpp - build/recomp/symbols.json, the only source of names and the
// only source of hook eligibility.
//
// The file is pinned by the guest EXE's SHA-256 and VERIFIED against the image
// the loader actually mapped: every address in it is meaningful for that build
// and no other, so a mismatch is an error rather than a warning.
//
// One namespace. symbol() resolves function entries, named alternate entries,
// curated aliases and curated globals; a mod does not have to know whether a
// name is code or data, and symbols_matching searches all of them in address
// order.
#include "mods_internal.h"
#include "../runtime/layout.h"
#include "../runtime/loader.h"

#include <algorithm>
#include <map>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <vector>

namespace {

struct Sym {
    uint32_t addr;
    std::string name;
    bool hookable;
    std::string kind;
};
struct Global {
    uint32_t addr, size, stride, count;
};

std::vector<Sym> &syms() {
    static std::vector<Sym> v;
    return v;
}
std::map<std::string, uint32_t> &names() {
    static std::map<std::string, uint32_t> m;
    return m;
}
std::map<uint32_t, size_t> &by_addr() {
    static std::map<uint32_t, size_t> m;
    return m;
}
std::map<std::string, Global> &globals() {
    static std::map<std::string, Global> m;
    return m;
}
std::map<std::string, uint32_t> &events() {
    static std::map<std::string, uint32_t> m;
    return m;
}
std::string g_sha, g_error;

struct P {
    const char *p;
    void ws() {
        while (*p == ' ' || *p == '\n' || *p == '\t' || *p == '\r')
            ++p;
    }
    bool lit(char c) {
        ws();
        if (*p != c)
            return false;
        ++p;
        return true;
    }
    bool str(std::string &out) {
        ws();
        if (*p != '"')
            return false;
        ++p;
        out.clear();
        while (*p && *p != '"') {
            if (*p == '\\' && p[1]) {
                out.push_back(p[1]);
                p += 2;
            } else
                out.push_back(*p++);
        }
        return *p == '"' ? (++p, true) : false;
    }
    bool num(long long &out) {
        ws();
        char *e = nullptr;
        out = strtoll(p, &e, 10);
        if (e == p)
            return false;
        p = e;
        return true;
    }
    bool boolean(bool &out) {
        ws();
        if (!strncmp(p, "true", 4)) {
            out = true;
            p += 4;
            return true;
        }
        if (!strncmp(p, "false", 5)) {
            out = false;
            p += 5;
            return true;
        }
        return false;
    }
    void skip() {
        ws();
        if (*p == '"') {
            std::string s;
            str(s);
            return;
        }
        if (*p == '{' || *p == '[') {
            char open = *p++, close = open == '{' ? '}' : ']';
            int depth = 1;
            while (*p && depth) {
                if (*p == '"') {
                    std::string s;
                    str(s);
                    continue;
                }
                if (*p == open)
                    ++depth;
                else if (*p == close)
                    --depth;
                ++p;
            }
            return;
        }
        while (*p && *p != ',' && *p != '}' && *p != ']')
            ++p;
    }
};

uint32_t hex32(const std::string &s) {
    return (uint32_t)strtoul(s.c_str(), nullptr, 16);
}

} // namespace

const char *mods_symbols_error() {
    return g_error.c_str();
}
const char *mods_symbols_exe_sha256() {
    return g_sha.c_str();
}
uint32_t mods_symbols_count() {
    return (uint32_t)syms().size();
}

// Load the generated symbol map and verify that it names the currently mapped image.
// Reject incompatible metadata before hooks or game views resolve addresses from it.
bool mods_symbols_load(const char *path) {
    const std::string file = path ? path : host_resource("symbols.json");
    FILE *f = fopen(file.c_str(), "rb");
    if (!f) {
        g_error = std::string("cannot open ") + file;
        return false;
    }
    std::string text;
    char buf[65536];
    size_t n;
    while ((n = fread(buf, 1, sizeof buf, f)) > 0)
        text.append(buf, n);
    fclose(f);

    std::vector<Sym> parsed;
    std::map<std::string, Global> new_globals;
    std::map<std::string, uint32_t> new_events;
    std::vector<std::pair<std::string, uint32_t>> aliases;
    std::string sha;

    P J{text.c_str()};
    if (!J.lit('{')) {
        g_error = "not a JSON object";
        return false;
    }
    std::string key;
    while (J.str(key)) {
        if (!J.lit(':')) {
            g_error = "expected ':' after " + key;
            return false;
        }
        if (key == "exe_sha256") {
            J.str(sha);
        } else if (key == "functions") {
            J.lit('[');
            while (J.lit('{')) {
                std::string k, addr, name, kind, alias;
                bool hookable = false;
                while (J.str(k)) {
                    J.lit(':');
                    if (k == "addr")
                        J.str(addr);
                    else if (k == "name")
                        J.str(name);
                    else if (k == "kind")
                        J.str(kind);
                    else if (k == "hookable")
                        J.boolean(hookable);
                    else if (k == "aliases") {
                        J.lit('[');
                        while (J.str(alias)) {
                            aliases.push_back({alias, hex32(addr)});
                            J.lit(',');
                        }
                        J.lit(']');
                    } else
                        J.skip();
                    if (!J.lit(','))
                        break;
                }
                J.lit('}');
                parsed.push_back({hex32(addr), name, hookable, kind});
                if (!J.lit(','))
                    break;
            }
            J.lit(']');
        } else if (key == "globals") {
            J.lit('[');
            while (J.lit('{')) {
                std::string k, name, addr;
                Global g{0, 0, 0, 0};
                long long v = 0;
                while (J.str(k)) {
                    J.lit(':');
                    if (k == "name")
                        J.str(name);
                    else if (k == "addr")
                        J.str(addr);
                    else if (k == "size") {
                        J.num(v);
                        g.size = (uint32_t)v;
                    } else if (k == "stride") {
                        J.num(v);
                        g.stride = (uint32_t)v;
                    } else if (k == "count") {
                        J.num(v);
                        g.count = (uint32_t)v;
                    } else
                        J.skip();
                    if (!J.lit(','))
                        break;
                }
                J.lit('}');
                g.addr = hex32(addr);
                new_globals[name] = g;
                if (!J.lit(','))
                    break;
            }
            J.lit(']');
        } else if (key == "events") {
            J.lit('{');
            std::string k, v;
            while (J.str(k)) {
                J.lit(':');
                J.str(v);
                new_events[k] = hex32(v);
                if (!J.lit(','))
                    break;
            }
            J.lit('}');
        } else {
            J.skip();
        }
        if (!J.lit(','))
            break;
    }

    if (parsed.empty()) {
        g_error = std::string("no functions in ") + file;
        return false;
    }
    if (sha.empty()) {
        g_error = std::string("no exe_sha256 in ") + file;
        return false;
    }
    // The file must describe the image that is actually mapped.
    const char *mapped = loader_exe_sha256();
    if (mapped && *mapped && sha != mapped) {
        g_error = std::string(file) + " is for " + sha.substr(0, 16) +
                  "..., which does not match the loaded image " +
                  std::string(mapped).substr(0, 16) + "...";
        return false;
    }

    syms().swap(parsed);
    std::sort(syms().begin(), syms().end(),
              [](const Sym &a, const Sym &b) { return a.addr < b.addr; });
    names().clear();
    by_addr().clear();
    for (size_t i = 0; i < syms().size(); ++i) {
        names()[syms()[i].name] = syms()[i].addr; // functions.tsv name is primary
        by_addr()[syms()[i].addr] = i;
    }
    for (const auto &a : aliases)
        if (!names().count(a.first))
            names()[a.first] = a.second; // secondary
    globals() = new_globals;
    events() = new_events;
    for (const auto &kv : globals())
        if (!names().count(kv.first))
            names()[kv.first] = kv.second.addr;
    g_sha = sha;
    g_error.clear();
    return true;
}

PopModStatus mods_symbol(const char *name, uint32_t *out_addr) {
    if (!name || !out_addr)
        return POP_E_INVAL;
    auto it = names().find(name);
    if (it == names().end())
        return POP_E_NOSYMBOL;
    *out_addr = it->second;
    return POP_OK;
}

PopModStatus mods_symbols_matching(const char *prefix, uint32_t *out, uint32_t cap,
                                   uint32_t *out_count) {
    if (!prefix || !out_count)
        return POP_E_INVAL;
    size_t n = strlen(prefix);
    std::vector<uint32_t> hits;
    for (const auto &kv : names())
        if (kv.first.compare(0, n, prefix) == 0)
            hits.push_back(kv.second);
    std::sort(hits.begin(), hits.end());
    hits.erase(std::unique(hits.begin(), hits.end()), hits.end());
    for (size_t i = 0; i < hits.size() && out && i < cap; ++i)
        out[i] = hits[i];
    *out_count = (uint32_t)hits.size();
    return POP_OK;
}

bool mods_symbol_hookable(uint32_t addr) {
    auto it = by_addr().find(addr);
    return it != by_addr().end() && syms()[it->second].hookable;
}

const char *mods_symbol_kind(uint32_t addr) {
    auto it = by_addr().find(addr);
    return it == by_addr().end() ? "" : syms()[it->second].kind.c_str();
}

uint32_t mods_symbol_global(const char *name) {
    auto it = globals().find(name);
    return it == globals().end() ? 0u : it->second.addr;
}
uint32_t mods_symbol_global_stride(const char *name) {
    auto it = globals().find(name);
    return it == globals().end() ? 0u : it->second.stride;
}
uint32_t mods_symbol_global_count(const char *name) {
    auto it = globals().find(name);
    return it == globals().end() ? 0u : it->second.count;
}
uint32_t mods_symbol_event(const char *name) {
    auto it = events().find(name);
    return it == events().end() ? 0u : it->second;
}
