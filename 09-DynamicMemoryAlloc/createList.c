#include <stdio.h>
#include <stdlib.h>
struct node {
    int val;
    struct node *next;
};
typedef struct node Node;

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
int main(void){
    Node *head, *current;
    int arr[] = {1, 2, 3, 4, 5};
    int num = 5;
    head = createList(arr, num);
    current = head;
    printList(current);
}