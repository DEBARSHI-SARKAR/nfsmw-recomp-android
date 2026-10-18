// env.cpp - the kit's environment switches, RECOMP_<NAME>.
//
// One reader, so every switch is spelled the same way and a listing of them
// is a search for `recomp_env(`.  The prefix names the kit, not a game.
#include "platform/os.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern "C" {

const char *recomp_env(const char *name) {
    char buf[160];
    if (strlen(name) + sizeof "RECOMP_" > sizeof buf)
        return NULL;
    strcpy(buf, "RECOMP_");
    strcat(buf, name);
    return getenv(buf);
}

static void trim(char *s) {
    size_t n = strlen(s);
    while (n && (s[n - 1] == ' ' || s[n - 1] == '\t' || s[n - 1] == '\r' || s[n - 1] == '\n'))
        s[--n] = 0;
    size_t a = 0;
    while (s[a] == ' ' || s[a] == '\t')
        ++a;
    if (a)
        memmove(s, s + a, n - a + 1);
}

int recomp_env_apply_file(const char *path) {
    FILE *f = path && *path ? fopen(path, "rb") : NULL;
    if (!f)
        return 0;
    int applied = 0;
    char line[4096];
    while (fgets(line, sizeof line, f)) {
        trim(line);
        if (!line[0] || line[0] == '#')
            continue;
        char *eq = strchr(line, '=');
        if (!eq)
            continue;
        *eq = 0;
        char *value = eq + 1;
        trim(line);
        trim(value);
        if (!line[0])
            continue;
        if (os_setenv(line, value) == 0)
            ++applied;
    }
    fclose(f);
    if (applied)
        fprintf(stderr, "recomp: %d switch%s from %s\n", applied, applied == 1 ? "" : "es", path);
    return applied;
}

} // extern "C"
