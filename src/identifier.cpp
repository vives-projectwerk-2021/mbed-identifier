#include "identifier.h"

// get id stored in micro controller
// returns id as a buffer of bytes (96 bits long = 12 bytes)
std::array<uint8_t, 12> get_uid_bytes() {
    std::array<uint8_t, 12> uid_array;
    std::memcpy(uid_array.data(), (uint8_t *)0x1FFF7590, 12);
    return uid_array;
}