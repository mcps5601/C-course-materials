#include <stdio.h>
struct node {
    int val;
    struct node *next;
};
typedef struct node Node;

Node *insertNode(Node *node, int item){
    Node *newNode;
    newNode = (Node *)malloc(sizeof(Node));
    newNode->val = item;
    newNode->next = node->next;
    node->next = newNode;
}