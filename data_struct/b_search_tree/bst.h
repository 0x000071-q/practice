#ifndef BST_H
#define BST_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Node Node;
typedef Node *Bst;

struct Node {
  int data;

  Node *left;
  Node *right;
};

Node *create_bst(int data);
void add_number(Node *bst, int data);
void destroy_bst(Node *bst);
void print_search_path(Node *bst, int data);
#endif
