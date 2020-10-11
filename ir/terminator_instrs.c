#include "terminator_instrs.h"

void add_branch(BlockIR* block, BlockIR* to_block, size_t arg_count, ExprIR** args) {
    BranchIR* branch = malloc(sizeof(BranchIR));
    block->terminator = (TerminatorIR*) branch;

    branch->id = BRANCH;
    branch->branch_to = to_block;
    init_expr_list_items(&branch->args, arg_count, args);
}
