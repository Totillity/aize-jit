#ifndef LINUX_JIT_EXPR_INSTRS_H
#define LINUX_JIT_EXPR_INSTRS_H

#include "expr.h"
#include "../function.h"

typedef struct AddIR_t {
    EXPR_HEADER;
    ExprIR* arg1;
    ExprIR* arg2;
} AddIR;

typedef struct {
    EXPR_HEADER;
    int32_t value;
} LoadI32IR;


typedef struct {
    EXPR_HEADER;
} ParamIR;


LoadI32IR* add_load_i32(BlockIR* block, int32_t value);

AddIR* add_add(BlockIR* block, ExprIR* arg1, ExprIR* arg2);

ParamIR* add_param(BlockIR* block, TypeIR type);

#endif //LINUX_JIT_EXPR_INSTRS_H
