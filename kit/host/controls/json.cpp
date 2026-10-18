// json.cpp - see json.h. A hand-written recursive-descent parser over a
// bounded char range, plus a matching indented writer.
#include "json.h"

#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <utility>

namespace controls {

namespace {

// Parses one JSON document from a bounded range, tracking the 1-based
// source line so a failure can name where it happened. Every failing method
// returns false; the first failure wins (later ones are ignored) so the
// reported line is the earliest problem, not a cascade.
class Parser {
  public:
    Parser(const char *text, size_t len, std::string *error)
        : p_(text), end_(text + len), error_(error) {}

    bool parse(Json *out) {
        skip_ws();
        if (!value(out))
            return false;
        skip_ws();
        if (p_ != end_)
            return fail("only whitespace may follow the value");
        return true;
    }

  private:
    const char *p_;
    const char *end_;
    std::string *error_;
    int line_ = 1;
    bool failed_ = false;
    int depth_ = 0; // arrays and objects open right now; see value()
    static constexpr int kMaxDepth = 64;

    bool fail(const char *what) {
        if (!failed_) {
            failed_ = true;
            if (error_)
                *error_ = "line " + std::to_string(line_) + ": " + what;
        }
        return false;
    }

    bool at_end() const {
        return p_ >= end_;
    }

    void skip_ws() {
        while (!at_end() && (*p_ == ' ' || *p_ == '\t' || *p_ == '\r' || *p_ == '\n')) {
            if (*p_ == '\n')
                ++line_;
            ++p_;
        }
    }

    bool expect(char c, const char *what) {
        if (at_end() || *p_ != c)
            return fail(what);
        ++p_;
        return true;
    }

    bool value(Json *out) {
        *out = Json();
        if (at_end())
            return fail("unexpected end of input");
        char c = *p_;
        if (c == '{' || c == '[') {
            // An array or object is parsed by recursion, so the document's
            // nesting is this thread's stack depth. Layout files are the
            // player's to edit and a truncated download is a file of nothing
            // but '[', so an over-deep document has to come back as an error
            // and not as a smashed stack. 64 is far past anything a layout
            // file needs (its deepest value is a group's control's "zone").
            if (depth_ >= kMaxDepth)
                return fail("too deeply nested");
            ++depth_;
            const bool ok = c == '{' ? object(out) : array(out);
            --depth_;
            return ok;
        }
        if (c == '"')
            return string_value(out);
        if (c == 't' || c == 'f')
            return boolean_literal(out);
        if (c == 'n')
            return null_literal(out);
        if (c == '-' || (c >= '0' && c <= '9'))
            return number(out);
        return fail("unexpected character");
    }

    bool literal(const char *word, const char *what) {
        size_t n = strlen(word);
        if (size_t(end_ - p_) < n || strncmp(p_, word, n) != 0)
            return fail(what);
        p_ += n;
        return true;
    }

    bool boolean_literal(Json *out) {
        if (*p_ == 't') {
            if (!literal("true", "invalid literal"))
                return false;
            out->b = true;
        } else {
            if (!literal("false", "invalid literal"))
                return false;
            out->b = false;
        }
        out->type = Json::Bool;
        return true;
    }

    bool null_literal(Json *out) {
        if (!literal("null", "invalid literal"))
            return false;
        out->type = Json::Null;
        return true;
    }

    // Numbers go through strtod once the manual scan has confirmed the shape
    // matches JSON's grammar (strtod alone is looser, e.g. it accepts a
    // leading '+').
    bool number(Json *out) {
        const char *start = p_;
        if (!at_end() && *p_ == '-')
            ++p_;
        if (at_end() || *p_ < '0' || *p_ > '9')
            return fail("invalid number");
        while (!at_end() && *p_ >= '0' && *p_ <= '9')
            ++p_;
        if (!at_end() && *p_ == '.') {
            ++p_;
            if (at_end() || *p_ < '0' || *p_ > '9')
                return fail("invalid number");
            while (!at_end() && *p_ >= '0' && *p_ <= '9')
                ++p_;
        }
        if (!at_end() && (*p_ == 'e' || *p_ == 'E')) {
            ++p_;
            if (!at_end() && (*p_ == '+' || *p_ == '-'))
                ++p_;
            if (at_end() || *p_ < '0' || *p_ > '9')
                return fail("invalid number");
            while (!at_end() && *p_ >= '0' && *p_ <= '9')
                ++p_;
        }
        char *endp = nullptr;
        double v = strtod(start, &endp);
        if (endp != p_)
            return fail("invalid number");
        out->type = Json::Number;
        out->n = v;
        return true;
    }

    // Encodes one Unicode code point as UTF-8 into *out.
    static void append_utf8(std::string *out, unsigned cp) {
        if (cp <= 0x7F) {
            out->push_back(char(cp));
        } else if (cp <= 0x7FF) {
            out->push_back(char(0xC0 | (cp >> 6)));
            out->push_back(char(0x80 | (cp & 0x3F)));
        } else if (cp <= 0xFFFF) {
            out->push_back(char(0xE0 | (cp >> 12)));
            out->push_back(char(0x80 | ((cp >> 6) & 0x3F)));
            out->push_back(char(0x80 | (cp & 0x3F)));
        } else {
            out->push_back(char(0xF0 | (cp >> 18)));
            out->push_back(char(0x80 | ((cp >> 12) & 0x3F)));
            out->push_back(char(0x80 | ((cp >> 6) & 0x3F)));
            out->push_back(char(0x80 | (cp & 0x3F)));
        }
    }

    bool hex4(unsigned *out) {
        if (size_t(end_ - p_) < 4)
            return fail("truncated \\u escape");
        unsigned v = 0;
        for (int i = 0; i < 4; ++i) {
            char c = p_[i];
            v <<= 4;
            if (c >= '0' && c <= '9')
                v |= unsigned(c - '0');
            else if (c >= 'a' && c <= 'f')
                v |= unsigned(c - 'a' + 10);
            else if (c >= 'A' && c <= 'F')
                v |= unsigned(c - 'A' + 10);
            else
                return fail("invalid \\u escape");
        }
        p_ += 4;
        *out = v;
        return true;
    }

    // The opening quote through the closing quote, decoding escapes to UTF-8.
    bool raw_string(std::string *out) {
        if (!expect('"', "expected a string"))
            return false;
        out->clear();
        for (;;) {
            if (at_end())
                return fail("unterminated string");
            unsigned char c = (unsigned char)*p_;
            if (c == '"') {
                ++p_;
                return true;
            }
            if (c == '\\') {
                ++p_;
                if (at_end())
                    return fail("unterminated escape");
                char e = *p_++;
                switch (e) {
                case '"':
                    out->push_back('"');
                    break;
                case '\\':
                    out->push_back('\\');
                    break;
                case '/':
                    out->push_back('/');
                    break;
                case 'b':
                    out->push_back('\b');
                    break;
                case 'f':
                    out->push_back('\f');
                    break;
                case 'n':
                    out->push_back('\n');
                    break;
                case 'r':
                    out->push_back('\r');
                    break;
                case 't':
                    out->push_back('\t');
                    break;
                case 'u': {
                    unsigned cp;
                    if (!hex4(&cp))
                        return false;
                    if (cp >= 0xD800 && cp <= 0xDBFF) {
                        // A high surrogate must be followed by a low one; join the pair.
                        if (size_t(end_ - p_) < 2 || p_[0] != '\\' || p_[1] != 'u')
                            return fail("unpaired surrogate");
                        p_ += 2;
                        unsigned lo;
                        if (!hex4(&lo))
                            return false;
                        if (lo < 0xDC00 || lo > 0xDFFF)
                            return fail("invalid low surrogate");
                        cp = 0x10000 + ((cp - 0xD800) << 10) + (lo - 0xDC00);
                    } else if (cp >= 0xDC00 && cp <= 0xDFFF) {
                        return fail("unpaired surrogate");
                    }
                    append_utf8(out, cp);
                    break;
                }
                default:
                    return fail("invalid escape");
                }
                continue;
            }
            if (c < 0x20)
                return fail("control character in string");
            out->push_back(char(c));
            ++p_;
        }
    }

    bool string_value(Json *out) {
        out->type = Json::String;
        return raw_string(&out->s);
    }

    bool array(Json *out) {
        out->type = Json::Array;
        ++p_; // '['
        skip_ws();
        if (!at_end() && *p_ == ']') {
            ++p_;
            return true;
        }
        for (;;) {
            skip_ws();
            Json elem;
            if (!value(&elem))
                return false;
            out->a.push_back(std::move(elem));
            skip_ws();
            if (at_end())
                return fail("unterminated array");
            if (*p_ == ',') {
                ++p_;
                continue;
            }
            if (*p_ == ']') {
                ++p_;
                return true;
            }
            return fail("expected ',' or ']'");
        }
    }

    bool object(Json *out) {
        out->type = Json::Object;
        ++p_; // '{'
        skip_ws();
        if (!at_end() && *p_ == '}') {
            ++p_;
            return true;
        }
        for (;;) {
            skip_ws();
            if (at_end() || *p_ != '"')
                return fail("expected a string key");
            std::string key;
            if (!raw_string(&key))
                return false;
            skip_ws();
            if (!expect(':', "expected ':' after a key"))
                return false;
            skip_ws();
            Json member;
            if (!value(&member))
                return false;
            out->o.push_back(Json::Member{std::move(key), std::move(member)});
            skip_ws();
            if (at_end())
                return fail("unterminated object");
            if (*p_ == ',') {
                ++p_;
                continue;
            }
            if (*p_ == '}') {
                ++p_;
                return true;
            }
            return fail("expected ',' or '}'");
        }
    }
};

void write_escaped_string(const std::string &s, std::string *out) {
    out->push_back('"');
    for (unsigned char c : s) {
        switch (c) {
        case '"':
            *out += "\\\"";
            break;
        case '\\':
            *out += "\\\\";
            break;
        case '\b':
            *out += "\\b";
            break;
        case '\f':
            *out += "\\f";
            break;
        case '\n':
            *out += "\\n";
            break;
        case '\r':
            *out += "\\r";
            break;
        case '\t':
            *out += "\\t";
            break;
        default:
            if (c < 0x20) {
                char buf[8];
                snprintf(buf, sizeof(buf), "\\u%04x", c);
                *out += buf;
            } else {
                out->push_back(char(c)); // UTF-8 continuation bytes pass through untouched
            }
        }
    }
    out->push_back('"');
}

// An integer-valued number close enough to fit a long long exactly is
// written without a trailing ".0"; anything else keeps 6 significant digits.
void write_number(double v, std::string *out) {
    char buf[64];
    if (std::isfinite(v) && v == std::trunc(v) && std::fabs(v) < 1e15) {
        snprintf(buf, sizeof(buf), "%lld", (long long)v);
    } else {
        snprintf(buf, sizeof(buf), "%.6g", v);
    }
    *out += buf;
}

void write_value(const Json &v, std::string *out, int indent, int depth) {
    switch (v.type) {
    case Json::Null:
        *out += "null";
        break;
    case Json::Bool:
        *out += v.b ? "true" : "false";
        break;
    case Json::Number:
        write_number(v.n, out);
        break;
    case Json::String:
        write_escaped_string(v.s, out);
        break;
    case Json::Array:
        if (v.a.empty()) {
            *out += "[]";
            break;
        }
        *out += "[\n";
        for (size_t i = 0; i < v.a.size(); ++i) {
            out->append(size_t(depth + 1) * indent, ' ');
            write_value(v.a[i], out, indent, depth + 1);
            if (i + 1 < v.a.size())
                out->push_back(',');
            out->push_back('\n');
        }
        out->append(size_t(depth) * indent, ' ');
        out->push_back(']');
        break;
    case Json::Object:
        if (v.o.empty()) {
            *out += "{}";
            break;
        }
        *out += "{\n";
        for (size_t i = 0; i < v.o.size(); ++i) {
            out->append(size_t(depth + 1) * indent, ' ');
            write_escaped_string(v.o[i].key, out);
            *out += ": ";
            write_value(v.o[i].value, out, indent, depth + 1);
            if (i + 1 < v.o.size())
                out->push_back(',');
            out->push_back('\n');
        }
        out->append(size_t(depth) * indent, ' ');
        out->push_back('}');
        break;
    }
}

} // namespace

const Json *Json::get(const char *key) const {
    if (type != Object)
        return nullptr;
    for (const Member &m : o)
        if (m.key == key)
            return &m.value;
    return nullptr;
}

double Json::num(const char *key, double fallback) const {
    const Json *v = get(key);
    return (v && v->type == Number) ? v->n : fallback;
}

std::string Json::str(const char *key, const char *fallback) const {
    const Json *v = get(key);
    return (v && v->type == String) ? v->s : std::string(fallback);
}

bool Json::boolean(const char *key, bool fallback) const {
    const Json *v = get(key);
    return (v && v->type == Bool) ? v->b : fallback;
}

Json &Json::set(const std::string &key, Json v) {
    type = Object;
    for (Member &m : o)
        if (m.key == key) {
            m.value = std::move(v);
            return m.value;
        }
    o.push_back(Member{key, std::move(v)});
    return o.back().value;
}

Json Json::number(double v) {
    Json j;
    j.type = Number;
    j.n = v;
    return j;
}

Json Json::string(std::string v) {
    Json j;
    j.type = String;
    j.s = std::move(v);
    return j;
}

Json Json::boolean_value(bool v) {
    Json j;
    j.type = Bool;
    j.b = v;
    return j;
}

Json Json::array() {
    Json j;
    j.type = Array;
    return j;
}

Json Json::object() {
    Json j;
    j.type = Object;
    return j;
}

bool json_parse(const std::string &text, Json *out, std::string *error) {
    std::string local_error;
    std::string *err = error ? error : &local_error;
    Parser parser(text.data(), text.size(), err);
    Json result;
    if (!parser.parse(&result)) {
        *out = Json(); // a failed parse leaves a usable (Null) value
        return false;
    }
    *out = std::move(result);
    return true;
}

std::string json_write(const Json &v, int indent) {
    std::string out;
    write_value(v, &out, indent, 0);
    return out;
}

} // namespace controls
