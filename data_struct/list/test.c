#include "list.h"
#include <stdio.h>

void printlist(Node *now) {
  while (now->next_ptr != NULL) {
    printf("now.data = %d\n", now->data);
    now = now->next_ptr;
  }
  printf("now.data = %d\n", now->data);
}

int main(void) {
  Node five = {.data = 5, .next_ptr = NULL};
  Node four = {.data = 4, .next_ptr = &five};
  Node three = {.data = 3, .next_ptr = &four};
  Node two = {.data = 2, .next_ptr = &three};
  Node one = {.data = 1, .next_ptr = &two};

  printlist(&one);
  printlist(reverse(&one));
  return 0;
}
