#include "identifier.h"

int Identifier::get_value() {
    // get id stored in micro controller
    uint32_t * uid = (uint32_t *)0x1FFF7590;
    uint32_t idPart1 = uid[0];
    uint32_t idPart2 = uid[1];
    uint32_t idPart3 = uid[2];

    printf("\r\nUnique ID: %08X %08X %08X \r\n", uid[0], uid[1], uid[2]);

    return 0;
}