#include "expr.h"

#define SCALE_SIZE(old_size) ((old_size) * 2)


void init_expr_list(ExprList* list, size_t size) {
    list->arr = calloc(size, sizeof(ExprIR*));
    list->size = size;
    list->len = 0;
}

void init_expr_list_items(ExprList* list, size_t size, ExprIR* items[]) {
    list->arr = calloc(size, sizeof(ExprIR*));
    memcpy(list->arr, items, sizeof(ExprIR*)*size);
    list->size = size;
    list->len = 0;
}

void expr_list_append(ExprList* list, ExprIR* ir) {
    if (list->len >= list->size) {
        list->arr = realloc(list->arr, SCALE_SIZE(list->size));
    }
    list->arr[list->len] = ir;
    list->len++;
}

