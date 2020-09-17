#ifndef LINUX_JIT_STRING_TABLE_H
#define LINUX_JIT_STRING_TABLE_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct {
    size_t s_len;
    char s[];
} String;


String* string_from_literal(char* literal);


#endif //LINUX_JIT_STRING_TABLE_H
