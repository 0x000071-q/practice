#include "bst.h"

int main(void) {
  Bst bst = create_bst(50);

  print_search_path(bst, 2);

  int nums[] = {25, 75, 13, 38, 63, 88, 6,  19, 32, 44, 57, 69, 82, 94, 3,
                10, 16, 22, 28, 35, 41, 47, 53, 60, 66, 72, 78, 85, 91, 97,
                1,  4,  8,  11, 14, 17, 20, 23, 26, 29, 31, 34, 37, 40, 43,
                46, 49, 52, 55, 58, 61, 64, 67, 70, 73, 76, 79, 81, 84, 87,
                90, 93, 96, 99, 0,  2,  5,  7,  9,  12, 15, 18, 21, 24, 27,
                30, 33, 36, 39, 42, 45, 48, 51, 54, 56, 59, 62, 65, 68, 71,
                74, 77, 80, 83, 86, 89, 92, 95, 98, 100};

  for (int i = 0; i < 100; i++) {
    add_number(bst, nums[i]);
  }

  print_search_path(bst, 57);
  print_search_path(bst, 72);
  print_search_path(bst, 12);
  print_search_path(bst, 21);
  print_search_path(bst, 65);
  destroy_bst(bst);
  return 0;
}
