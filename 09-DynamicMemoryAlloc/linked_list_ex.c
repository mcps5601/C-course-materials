#include <stdio.h>
struct node {
    int val;
    struct node *next;
};
typedef struct node Node;
int main(void){
    Node stuA, stuB, stuC, stuD;
    Node *head = &stuA;
    stuA.val = 85;
    stuA.next = &stuB;
    stuB.val = 97;
    stuB.next = &stuC;
    stuC.val = 99;
    stuC.next = &stuD;
    stuD.val = 100;
    stuD.next = NULL;
    while (head != NULL){
        printf("Current: %p, ", head);
        printf("%d ,", head->val);
        printf("Next: %p\n", head->next);
        head = head->next;
    }
}