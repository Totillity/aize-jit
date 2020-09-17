#ifndef LINUX_JIT_INSTRUCTIONS_H
#define LINUX_JIT_INSTRUCTIONS_H

#include "compile_state.h"


typedef enum {
    RAX = 0b0000,
    RCX = 0b0001,
    RDX = 0b0010,
    RBX = 0b0011,
    RSP = 0b0100,
    RBP = 0b0101,
    RSI = 0b0110,
    RDI = 0b0111,
    R8  = 0b1000,
    R9  = 0b1001,
    R10 = 0b1010,
    R11 = 0b1011,
    R12 = 0b1100,
    R13 = 0b1101,
    R14 = 0b1110,
    R15 = 0b1111,
} Register64;

#endif //LINUX_JIT_INSTRUCTIONS_H
