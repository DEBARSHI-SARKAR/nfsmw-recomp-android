// toml.cpp - the manifest subset of TOML.
//
// One assignment per line. Values are quoted strings, integers, booleans,
// string arrays and one-line inline tables. A '#' inside a string is not a
// comment, which is the whole reason this is a parser and not a split on '#'.
// Anything the subset does not cover is an error naming the offending line, so
// a manifest is never half-read.
#include "manifest_types.h"

#include <stdlib.h>
#include <string.h>

namespace {

std::string trim(const std::string &s) {
    size_t a = s.find_first_not_of(" \t\r\n");
    if (a == std::string::npos)
        return "";
    size_t b = s.find_last_not_of(" \t\r\n");
    return s.substr(a, b - a + 1);
}

// Everything before an unquoted '#'. A '#' inside a string belongs to the
// string: "a#b" is a value, not a value and a comment.
std::string strip_comment(const std::string &line) {
    bool in_string = false;
    for (size_t i = 0; i < line.size(); ++i) {
        if (line[i] == '"')
            in_string = !in_string;
        else if (line[i] == '#' && !in_string)
            return line.substr(0, i);
    }
    return line;
}

// Splits on `sep` at the top level only, so a comma inside a string or inside
// brackets does not split.
std::vector<std::string> split_top(const std::string &s, char sep) {
    std::vector<std::string> out;
    bool in_string = false;
    int depth = 0;
    std::string cur;
    for (char c : s) {
        if (c == '"')
            in_string = !in_string;
        if (!in_string && (c == '[' || c == '{'))
            ++depth;
        if (!in_string && (c == ']' || c == '}'))
            --depth;
        if (c == sep && !in_string && depth == 0) {
            out.push_back(cur);
            cur.clear();
            continue;
        }
        cur += c;
    }
    if (!trim(cur).empty())
        out.push_back(cur);
    return out;
}

bool parse_scalar(const std::string &raw, TomlValue *out, std::string *error) {
    std::string v = trim(raw);
    if (!v.empty() && v.front() == '"') {
        // The whole value must be ONE complete string. Checking only the first
        // and last character accepts `"A" "B"` and quietly keeps `A" "B`,
        // which is not in the subset and not what anyone wrote on purpose.
        size_t close = std::string::npos;
        for (size_t i = 1; i < v.size(); ++i)
            if (v[i] == '"') {
                close = i;
                break;
            }
        if (close == std::string::npos) {
            *error = "unterminated string: " + v;
            return false;
        }
        if (close + 1 != v.size()) {
            *error = "trailing text after a string value: " + v;
            return false;
        }
        out->kind = TomlValue::STRING;
        out->str = v.substr(1, close - 1);
        return true;
    }
    if (v == "true" || v == "false") {
        out->kind = TomlValue::BOOL;
        out->boolean = (v == "true");
        out->num = out->boolean ? 1 : 0; // so a numeric read of it is right
        return true;
    }
    char *end = nullptr;
    long long n = strtoll(v.c_str(), &end, 0);
    if (end && *end == '\0' && end != v.c_str()) {
        out->kind = TomlValue::INT;
        out->num = n;
        return true;
    }
    *error = "cannot parse value: " + v;
    return false;
}

bool parse_value(const std::string &raw, TomlValue *out, std::string *error) {
    std::string v = trim(raw);
    if (v.size() >= 2 && v.front() == '[' && v.back() == ']') {
        out->kind = TomlValue::ARRAY;
        for (const std::string &part : split_top(v.substr(1, v.size() - 2), ',')) {
            TomlValue e;
            if (!parse_scalar(part, &e, error))
                return false;
            if (e.kind != TomlValue::STRING) {
                *error = "array entries must be strings";
                return false;
            }
            out->array.push_back(e.str);
        }
        return true;
    }
    if (v.size() >= 2 && v.front() == '{' && v.back() == '}') {
        out->kind = TomlValue::TABLE;
        for (const std::string &part : split_top(v.substr(1, v.size() - 2), ',')) {
            size_t eq = part.find('=');
            if (eq == std::string::npos) {
                *error = "inline table entry without '=': " + trim(part);
                return false;
            }
            TomlValue e;
            if (!parse_scalar(part.substr(eq + 1), &e, error))
                return false;
            std::string k = trim(part.substr(0, eq));
            // A repeated key inside an inline table is a mistake for the same
            // reason a repeated top-level one is, and was still overwriting.
            if (out->table.count(k)) {
                *error = "duplicate key \"" + k + "\" in an inline table";
                return false;
            }
            out->table[k] = e;
        }
        return true;
    }
    return parse_scalar(v, out, error);
}

} // namespace

bool mods_toml_parse(const std::string &text, TomlDoc *out, std::string *error) {
    std::string section;
    size_t pos = 0;
    while (pos <= text.size()) {
        size_t nl = text.find('\n', pos);
        std::string line = text.substr(pos, nl == std::string::npos ? std::string::npos : nl - pos);
        pos = (nl == std::string::npos) ? text.size() + 1 : nl + 1;

        std::string s = trim(strip_comment(line));
        if (s.empty())
            continue;
        if (s.front() == '[' && s.back() == ']') {
            section = trim(s.substr(1, s.size() - 2));
            continue;
        }
        size_t eq = s.find('=');
        if (eq == std::string::npos) {
            *error = "not an assignment: " + s;
            return false;
        }
        std::string key = trim(s.substr(0, eq));
        if (key.empty()) {
            *error = "assignment with no key: " + s;
            return false;
        }
        TomlValue v;
        if (!parse_value(s.substr(eq + 1), &v, error)) {
            *error += " (in: " + s + ")";
            return false;
        }
        std::string full = section.empty() ? key : section + "." + key;
        // A repeated key is a mistake, not an update. Silently keeping the last
        // one means a manifest can say two different things and the reader can
        // only find out which won by running it.
        if (out->values.count(full)) {
            *error = "duplicate key \"" + full + "\": " + s;
            return false;
        }
        out->values[full] = v;
        if (section == "settings")
            out->settings_keys.push_back(key);
    }
    return true;
}
