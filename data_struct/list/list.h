#ifndef LIST_H
#define LIST_H

#include <stdlib.h>

typedef struct Node Node;

struct Node {
  int data;
  Node *next_ptr;
};

Node *reverse(Node *now);
#endif /* LIST_H */
