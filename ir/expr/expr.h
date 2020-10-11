#ifndef LINUX_JIT_EXPR_H
#define LINUX_JIT_EXPR_H

#include <stdint.h>

#include "../../string_table.h"
#include "../type.h"


typedef enum {
    LOAD_I32,
    ADD,
    PARAM,
} ExprID;

#define EXPR_HEADER ExprID id; TypeIR result_type

typedef struct ExprIR_t {
    EXPR_HEADER;
} ExprIR;


typedef struct {
    size_t len;
    size_t size;
    ExprIR** arr;
} ExprList;


void init_expr_list(ExprList* list, size_t size);
void init_expr_list_items(ExprList* list, size_t size, ExprIR* items[]);
void expr_list_append(ExprList* list, ExprIR* ir);




/* ParamIR* param = block_add_param(block, I32_TYPE);
 * LoadI32IR* const = block_add_load_i32(block, 100);
 * AddIR* added = block_add_add(block, param, const);
 * CallBuilder branch_builder = block_branch(block, next_block);
 * call_builder_add(branch_builder, added);
 * */

#endif //LINUX_JIT_EXPR_H
