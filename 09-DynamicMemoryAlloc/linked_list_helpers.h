#ifndef LINKED_LIST_HELPERS_H // include guard
#define LINKED_LIST_HELPERS_H // include guard

#include <stdlib.h>
#include <stdio.h>

struct node {
    int val;
    struct node *next;
};
typedef struct node Node;

Node *createList(int arr[], int num);
void freeList(Node *head);
void printList(Node *head);
Node *deleteNode(Node *head, Node *node);
Node *searchNode(Node *head, int target);
Node *insertNode(Node *node, int item);

#endif // include guard