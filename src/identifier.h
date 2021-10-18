#pragma once

#include <cstdio>
#include <stdint.h>

class Identifier {
    private:
        uint8_t* uid_bytes;
    public:
        Identifier();
        uint8_t * bytes();
};