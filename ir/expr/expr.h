#ifndef LINUX_JIT_EXPR_H
#define LINUX_JIT_EXPR_H

#include "../../string_table.h"
#include "../type.h"

typedef struct {
    String* target;
    TypeIR target_type;
} ExprIR;

#endif //LINUX_JIT_EXPR_H
