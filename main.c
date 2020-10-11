#include "instructions.h"
#include "string_table.h"
#include "ir/function.h"
#include "string_table.h"

#include "ir/expr/expr_instrs.h"
#include "ir/terminator.h"
#include "ir/terminator_instrs.h"


/* Example:
 * a = 100
 * b = -75
 * loop:
 *   # a, b = a+b, a
 *   t1 = a
 *   t2 = b
 *   t3 = a + b
 *   a = t3
 *   b = t1
 *   # c = a
 *   # a = a + b
 *   # b = c
 * */


int main() {
    FunctionIR* func = create_function(STRING("main"));

    BlockIR* entry_block = add_block(func, STRING("entry"));

    BlockIR* loop_block = add_block(func, STRING("loop"));
    ParamIR* param_a = add_param(loop_block, I32_TYPE);
    ParamIR* param_b = add_param(loop_block, I32_TYPE);

    LoadI32IR* const_a = add_load_i32(entry_block, 100);
    LoadI32IR* const_b = add_load_i32(entry_block, -75);
    add_branch(entry_block, loop_block, 2, (ExprIR*[]) {(ExprIR*) const_a, (ExprIR*) const_b});

    AddIR* added = add_add(loop_block, (ExprIR*) param_a, (ExprIR*) param_b);
    add_branch(loop_block, loop_block, 2, (ExprIR*[]) {(ExprIR*) added, (ExprIR*) param_a});

    return 0;
}
