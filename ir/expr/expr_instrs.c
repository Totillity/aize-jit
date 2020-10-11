#include "expr_instrs.h"

AddIR* add_add(BlockIR* block, ExprIR* arg1, ExprIR* arg2) {
    AddIR* add = malloc(sizeof(AddIR));
    add->id = ADD;
    add->result_type = UNKNOWN_TYPE;
    add->arg1 = arg1;
    add->arg2 = arg2;
    expr_list_append(&block->exprs, (ExprIR*) add);
    return add;
}

LoadI32IR* add_load_i32(BlockIR* block, int32_t value) {
    LoadI32IR* mem = malloc(sizeof(LoadI32IR));
    mem->id = LOAD_I32;
    mem->result_type = I32_TYPE;
    mem->value = value;
    expr_list_append(&block->exprs, (ExprIR*) mem);
    return mem;
}


ParamIR* add_param(BlockIR* block, TypeIR type) {
    ParamIR* param = malloc(sizeof(ParamIR));
    param->id = PARAM;
    param->result_type = type;
    expr_list_append(&block->exprs, (ExprIR*) param);
    return param;
}