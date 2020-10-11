//#include "mov_r64_r64.h"
//
//
//void compile_mov_r64_r64(CompileState* state) {
//    Mov_R64_R64* instr = state->instr_ptr;
//
//    state->mem_ptr[0] = REX(1, GET_BIT(instr->source, 3), 0, GET_BIT(instr->dest, 3));
//    state->mem_ptr[1] = 0x89;
//    state->mem_ptr[2] = MODRM(0b11, GET_BOTTOM_BITS(instr->source, 3), GET_BOTTOM_BITS(instr->dest, 3));
//
//    state->mem_ptr += 3;
//    state->instr_ptr += sizeof(Mov_R64_R64);
//}
//
//void compile_mov_p64_r64(CompileState* state) {
//    Mov_P64_R64* instr = state->instr_ptr;
//
//    uint8_t dest = instr->dest_ptr;
//
//    if (dest == 0b1101) {
//        // TODO MOD = 0b01, r/m = 101, DISP = 0
//        printf("This was a mistake\n");
//    } else if (dest == 0b1100) {
//        // TODO
//        printf("This was a mistake too\n");
//    } else {
//        state->mem_ptr[0] = REX(1, GET_BIT(instr->source, 3), 0, GET_BIT(instr->dest_ptr, 3));
//        state->mem_ptr[1] = 0x89;
//        state->mem_ptr[2] = MODRM(0b00, GET_BOTTOM_BITS(instr->source, 3), GET_BOTTOM_BITS(instr->dest_ptr, 3));
//    }
//
//    state->mem_ptr += 3;
//    state->instr_ptr += sizeof(Mov_R64_R64);
//}
