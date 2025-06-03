#ifndef DYN_ARR
#define DYN_ARR

#include <stddef.h>
#include <stdlib.h>

typedef struct {
  int *arr;
  size_t size;
  size_t pos;
} DynArr;

DynArr *create_array(size_t size);
void push_back(DynArr *d, int num);
void pop_back(DynArr *d);
void destroy_array(DynArr *d);
int at_index(DynArr *d, size_t ind);
int set_at_index(DynArr *d, size_t ind, int num);

#endif /* ifdef DYN_ARR */
