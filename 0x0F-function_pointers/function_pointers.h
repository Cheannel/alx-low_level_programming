#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/**
 * filename: function_pointers.h
 * description: a header file containing the prototypes of all the functions
 * used in the project(0x0F-function_pointers)
 */
#include <stddef.h>
#include <stdlib.h>

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
