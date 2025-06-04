#include "list.h"

#if 0
struct Node {
  int data;
  Node *next_ptr;
};
#endif

Node *reverse(Node *now) {
  if (now == NULL)
    return NULL;

  Node *prev = NULL;
  while (now->next_ptr != NULL) {
    Node *next = now->next_ptr;
    now->next_ptr = prev;
    prev = now;
    now = next;
  }

  now->next_ptr = prev;

  return now;
}

// now
// [1]->[2]->[3]->[4]->[5]
// prv  now nxt
// [1]<-[2] [3]->[4]->[5]
//
// [1]->[2]->[3]->[4]->[5]
//
//
// [1]->[2]->[3]
// [1]<-[2]<-[3]
