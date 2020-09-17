#include "ret.h"


void compile_return(CompileState* state) {
    Return* instr = state->instr_ptr;
    state->mem_ptr[0] = 0xC3;

    state->mem_ptr += 1;
    state->instr_ptr += sizeof(Return);
}
