#ifndef LINUX_JIT_LOAD_H
#define LINUX_JIT_LOAD_H

#include "../../string_table.h"
#include "../type.h"

typedef struct {
    String* target;
    TypeIR target_type;
    int32_t value;
} LoadI32IR;

#endif //LINUX_JIT_LOAD_H
