#include <stdio.h>
struct node {
    int val;
    struct node *next;
};
typedef struct node Node;

void freeList(Node *head){
    Node *current, *tmp;
    current = head;
    while (current != NULL){
        tmp = current;
        current = current->next;
        free(tmp);
    }
}