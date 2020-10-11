#ifndef LINUX_JIT_FUNCTION_H
#define LINUX_JIT_FUNCTION_H

#include "../string_table.h"
#include "expr/expr.h"
#include "type.h"
#include "terminator.h"

typedef struct s_BlockIR {
    struct s_BlockIR* next_block;
    String* name;
    ExprList exprs;
    TerminatorIR* terminator;
} BlockIR;

typedef struct {
    String* name;
    TypeIR return_type;
    BlockIR* blocks;
} FunctionIR;


FunctionIR* create_function(String* name);

BlockIR* add_block(FunctionIR* func, String* name);

#endif //LINUX_JIT_FUNCTION_H
