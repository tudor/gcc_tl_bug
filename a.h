#pragma once

#include <cstdlib>

inline int* get() {
    thread_local int p;
    return &p;
}
