cmake_minimum_required(VERSION 3.17)
project(linux_jit C)

set(CMAKE_C_STANDARD 11)

add_executable(linux_jit main.c instructions.h instrs/ret.c compile_state.h instrs/mov_r64_r64.c instrs/test.h string_table.c string_table.h ir/function.c ir/function.h ir/block.c ir/expr/expr_list.c ir/expr/expr_list.h ir/expr/expr.h ir/type.h ir/expr/load.c ir/expr/load.h)