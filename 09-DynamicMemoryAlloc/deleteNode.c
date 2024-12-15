#include <stdio.h>
struct node {
    int val;
    struct node *next;
};
typedef struct node Node;

Node *deleteNode(Node *head, Node *node){
    if (head == NULL){
        return NULL;
    }
    if (node == head){
        head = head->next;
    }
    else{
        Node *current = head;
        while (current->next != node){
            current = current->next;
        }
        // found the node before the node to be deleted
        current->next = node->next;
    }
    free(node);
    return head;
}