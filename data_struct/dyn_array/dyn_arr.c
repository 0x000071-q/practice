#include "dyn_arr.h"

DynArr *create_array(size_t size) {
  DynArr *d = malloc(sizeof(DynArr));
  d->size = size + (8 - size % 8);
  if (size == 0) {
    d->size = 8;
  }
  d->arr = malloc(sizeof(int) * d->size);
  d->pos = 0;
  return d;
}

void push_back(DynArr *d, int num) {
  d->pos++;
  if (d->pos == d->size) {
    d->size += 8;
    d->arr = realloc(d->arr, d->size * sizeof(int));
  }
  d->arr[d->pos] = num;
}

void pop_back(DynArr *d) {
  if (d->pos == 0)
    return;
  d->pos--;

  if (d->pos < d->size - 8) {
    d->size -= 8;
    d->arr = realloc(d->arr, d->size * sizeof(int));
  }
}

int at_index(DynArr *d, size_t ind) { return d->arr[ind]; }

int set_at_index(DynArr *d, size_t ind, int num) { d->arr[ind] = num; } // later

void destroy_array(DynArr *d) {
  free(d->arr);
  free(d);
}
