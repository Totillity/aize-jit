#include "function.h"


FunctionIR* create_function(String* name) {
    FunctionIR* mem = malloc(sizeof(FunctionIR));
    mem->name = name;
    mem->return_type = UNKNOWN_TYPE;
    mem->blocks = NULL;
    return mem;
}


BlockIR* add_block(FunctionIR* func, String* name) {
    BlockIR* mem = malloc(sizeof(BlockIR));
    mem->name = name;
    mem->next_block = NULL;
    mem->terminator = NULL;
    mem->exprs =
}