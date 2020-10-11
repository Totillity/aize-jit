#include "jit_mem.h"

#ifdef _WIN64

#include <windows.h>

void* copy_to_executable(void* from, size_t len) {
    SYSTEM_INFO info;
    GetSystemInfo(&info);
    void* mem = VirtualAlloc(NULL, info.dwPageSize, MEM_COMMIT, PAGE_READWRITE);
    memcpy(mem, from, len);

    DWORD dummy;
    VirtualProtect(mem, len, PAGE_EXECUTE_READ, &dummy);

    return mem;
}

#endif

#ifdef __unix__

#include <sys/mman.h>

void print_mem(uint8_t * mem, size_t items) {
    for (int i = 0; i < items; i++) {
        printf("%x ", mem[i]);
    }
    printf("\n");
}

typedef uint32_t (JittedFunc)(uint32_t);

void* copy_to_executable(void* from, size_t len) {
    void* mem = mmap(NULL, 4096, PROT_READ | PROT_WRITE, MAP_ANONYMOUS | MAP_PRIVATE, -1, 0);
    memset(mem, 0, 4096);
    memcpy(mem, from, len);
    mprotect(mem, 4096, PROT_EXEC | PROT_READ);
    return mem;
}
#endif
