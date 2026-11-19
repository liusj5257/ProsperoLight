// SPDX-License-Identifier: MIT
#pragma once
#include <algorithm>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>
constexpr const char *PYRO_COMMIT = "cc91cbf6363721d19d135d05ca8e3d8665ea6afd";
#if defined(__GNUC__) || defined(__clang__)
__attribute__((format(printf, 1, 2)))
#endif
void log_line(const char *fmt, ...);
[[noreturn]] void fail(const char *reason);
