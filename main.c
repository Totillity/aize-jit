#include <stdio.h>
#include <sys/mman.h>
#include <stdint.h>
#include <string.h>

#include "instructions.h"
#include "string_table.h"


//void print_mem(uint8_t * mem, size_t items) {
//    for (int i = 0; i < items; i++) {
//        printf("%x ", mem[i]);
//    }
//    printf("\n");
//}
//
//
//typedef uint32_t (JittedFunc)(uint32_t);
//
//
//void* copy_to_executable(void* from, size_t len) {
//    void* mem = mmap(NULL, 4096, PROT_READ | PROT_WRITE, MAP_ANONYMOUS | MAP_PRIVATE, -1, 0);
//    memset(mem, 0, 4096);
//    memcpy(mem, from, len);
//    mprotect(mem, 4096, PROT_EXEC | PROT_READ);
//    return mem;
//}


int main() {



    return 0;
}
