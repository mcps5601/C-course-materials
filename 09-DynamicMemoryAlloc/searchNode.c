#include <stdio.h>
struct node {
    int val;
    struct node *next;
};
typedef struct node Node;

Node *searchNode(Node *head, int target){
    Node *current = head;
    while (current != NULL){
        if (current->val == target){
            return current;        
        }
        current = current->next;
    }
    return NULL;
}