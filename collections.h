//
// Created by allfathari on 6/16/19.
//

#ifndef AVM_COLLECTIONS_H
#define AVM_COLLECTIONS_H

#include <stddef.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Int_Option {
    bool is_some;
    int value;
} Int_Option;

typedef struct Int_Stack {
    int top;
    int *array;
    size_t array_len;
} Int_Stack;

void int_stack_init(Int_Stack *);

void int_stack_with_capacity(Int_Stack *stack, int capacity);

int int_stack_size(Int_Stack *);

bool int_stack_is_empty(Int_Stack *);

bool int_stack_is_full(Int_Stack *);

void int_stack_push(Int_Stack *, int);

Int_Option int_stack_peek(Int_Stack *);

Int_Option int_stack_pop(Int_Stack *);

void int_stack_free(Int_Stack *);

typedef struct Byte_Option {
    bool is_some;
    u_int8_t value;
} Byte_Option;

typedef struct Byte_Slice {
    u_int8_t *ptr;
    size_t len;
} Byte_Slice;

typedef struct Byte_Slice_Option {
    bool is_some;
    Byte_Slice value;
} Byte_Slice_Option;

typedef struct Byte_Vector {
    size_t total;
    u_int8_t *array;
    size_t array_len;
} Byte_Vector;

void byte_vector_init(Byte_Vector *);

void byte_vector_with_capacity(Byte_Vector *, size_t);

void byte_vector_with_defaults(Byte_Vector *, size_t, u_int8_t);

Byte_Vector byte_vector_from(u_int8_t*, size_t);

int byte_vector_size(Byte_Vector *vector);

void byte_vector_resize(Byte_Vector *, size_t);

void byte_vector_add(Byte_Vector *, u_int8_t);

void byte_vector_set(Byte_Vector *, size_t, u_int8_t);

Byte_Option byte_vector_get(Byte_Vector *, size_t);

Byte_Slice_Option byte_vector_slice(Byte_Vector *, size_t, size_t);

void byte_vector_delete(Byte_Vector *, size_t);

void byte_vector_free(Byte_Vector *);

void byte_vector_append(Byte_Vector *, Byte_Vector *);

#endif //AVM_COLLECTIONS_H
