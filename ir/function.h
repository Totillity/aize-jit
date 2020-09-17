#ifndef LINUX_JIT_FUNCTION_H
#define LINUX_JIT_FUNCTION_H

#include "../string_table.h"
#include "expr/expr_list.h"
#include "type.h"

typedef struct {} TerminatorIR;

typedef struct s_BlockIR {
    struct s_BlockIR* next_block;
    String* name;
    ExprList exprs;
    TerminatorIR* terminator;
} BlockIR;

typedef struct {
    TerminatorIR header;
    String* block;

    BlockIR* pointed;
} BranchIR;

typedef struct {
    String* name;
    TypeIR return_type;
    BlockIR* blocks;
} FunctionIR;

#endif //LINUX_JIT_FUNCTION_H
