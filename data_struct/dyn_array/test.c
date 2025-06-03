#include "dyn_arr.h"
#include <stdio.h>

int main(void) {

  DynArr *d_ar = create_array(10);

  for (int i = 0; i < 100; ++i) {
    push_back(d_ar, i + 1);
  }

  set_at_index(d_ar, 99, 1500);

  for (int i = 0; i < 100; ++i) {
    printf("test_arr[i] = %d\n", at_index(d_ar, i));
  }

  destroy_array(d_ar);

  printf("test\n");
  return 0;
}
