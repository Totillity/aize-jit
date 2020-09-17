#ifndef LINUX_JIT_EXPR_LIST_H
#define LINUX_JIT_EXPR_LIST_H

#include <stdlib.h>

#include "expr.h"

typedef struct {
    size_t len;
    size_t size;
    ExprIR** arr;
} ExprList;

void init_expr_list(ExprList* list, size_t size);

#endif //LINUX_JIT_EXPR_LIST_H
