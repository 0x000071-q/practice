#include "bst.h"

Node *create_bst(int data) {
  Node *bst = malloc(sizeof(Node));
  bst->data = data;
  bst->left = NULL;
  bst->right = NULL;

  return bst;
}

void add_number(Node *bst, int data) {
  if (bst->data == data)
    return;
  if (data > bst->data) {
    if (bst->right == NULL) {
      bst->right = create_bst(data);
      bst->right->data = data;
    } else {
      add_number(bst->right, data);
    }
  }
  if (data < bst->data) {
    if (bst->left == NULL) {
      bst->left = create_bst(data);
      bst->left->data = data;
    } else {
      add_number(bst->left, data);
    }
  }
}

void print_search_path(Node *bst, int data) {
  if (data == bst->data) {
    printf("\nit's here\n");
    return;
  }
  if (data > bst->data && bst->right != NULL) {
    printf("-> ");
    print_search_path(bst->right, data);
    return;
  }

  if (data < bst->data && bst->left != NULL) {
    printf("<- ");
    print_search_path(bst->left, data);
    return;
  }

  printf("not found\n");
}

void destroy_bst(Node *bst) {
  if (bst->right != NULL)
    destroy_bst(bst->right);
  if (bst->left != NULL)
    destroy_bst(bst->left);
  free(bst);
}
