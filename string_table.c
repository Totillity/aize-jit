#include "string_table.h"

String* string_from_literal(char* literal) {
    size_t len = strlen(literal);
    String* mem = malloc(sizeof(String) + len);
    strcpy(mem->s, literal);
    return mem;
}
