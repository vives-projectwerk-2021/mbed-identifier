#include "identifier.h"

Identifier::Identifier() {
    uid_bytes = (uint8_t *)0x1FFF7590;
}

// get id stored in micro controller
// returns id as a buffer of bytes (96 bits long = 12 bytes)
uint8_t * Identifier::bytes() {
    return uid_bytes;
}