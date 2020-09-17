#ifndef LINUX_JIT_COMPILE_STATE_H
#define LINUX_JIT_COMPILE_STATE_H

#include <stdint.h>

#define REX(w, r, x, b) ((uint8_t) (0b01000000 | ((w) << 3) | ((r) << 2) | ((x) << 1) | ((b))))
#define GET_BIT(value, bit) (((value) >> (bit)) & 1)
#define GET_BOTTOM_BITS(value, bits) ((value) & ((1 << (bits)) - 1))
#define MODRM(mod, reg, rm) (((mod) << 6) | ((reg) << 3) | (rm))


#endif //LINUX_JIT_COMPILE_STATE_H
