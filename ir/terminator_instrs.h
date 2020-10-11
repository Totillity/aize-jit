#ifndef LINUX_JIT_TERMINATOR_INSTRS_H
#define LINUX_JIT_TERMINATOR_INSTRS_H

#include "terminator.h"
#include "function.h"

typedef struct {
    TERMINATOR_HEADER;
    BlockIR* branch_to;
    ExprList args;
} BranchIR;


void add_branch(BlockIR* block, BlockIR* to_block, size_t arg_count, ExprIR* args[]);


#endif //LINUX_JIT_TERMINATOR_INSTRS_H
