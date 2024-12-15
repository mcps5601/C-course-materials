#include <stdio.h>
#include <stdlib.h>
struct node {
    int val;
    struct node *next;
};
typedef struct node Node;
int main(void){
    Node *head, *current, *previous;
    int i, num = 4;
    // print node size
    printf("Size of Node: %zu\n", sizeof(Node));
    printf("%p\n", &head);
    printf("%p\n", &current);
    printf("%p\n", &previous);
    for (i = 0; i < num; i++){
        current = (Node *)malloc(sizeof(Node));
        scanf("%d", &(current->val));
        if (i == 0){
            head = current;
        }
        else {
            previous->next = current;
        }
        previous = current;
    }
    while (head != NULL){
        printf("Current: %p, ", head);
        printf("%d, ", head->val);
        printf("Next: %p\n", head->next);
        head = head->next;
    }
}