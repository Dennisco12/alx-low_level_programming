#ifndef _SEARCH_ALGOS_
#define _SEARCH_ALGOS_

#include <stdio.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
size_t search_half(int *array, size_t first, size_t last, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int expo_binary_search(int *array, size_t low, size_t high, int value);
int binary_recursive_search(int *array, size_t low, size_t high, int value);

#endif
