#include <stdio.h>
#include "linked_list_helpers.h"

Node *createList(int arr[], int num){
    Node *head, *current, *previous;
    int i;
    for (i = 0; i < num; i++){
        current = (Node *)malloc(sizeof(Node));
        current->val = arr[i];
        if (i == 0){
            head = current;
        }
        else {
            previous->next = current;
        }
        current->next = NULL;
        previous = current;
    }
    return head;
}
void printList(Node *head){
    if (head == NULL){
        printf("List is empty\n");
    }
    else {
        while (head != NULL){
            printf("%d, %p\n", head->val, head);
            head = head->next;
        }
    }
}
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