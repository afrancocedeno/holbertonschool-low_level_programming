#ifndef __SEARCH__
#define __SEARCH__
#include <stddef.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, size_t start, size_t end);

/* advanced binary search */
int advanced_binary(int *array, size_t size, int value);
int recursive_advanced_binary(int *array, size_t left,
size_t right, int value);
void recursive_print_array(int *array, size_t start, size_t end);

#endif
