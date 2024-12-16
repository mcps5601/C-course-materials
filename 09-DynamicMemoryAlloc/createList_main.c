#include <stdio.h>
#include "linked_list_helpers.h"

int main(void){
    Node *head, *current;
    int arr[] = {1, 2, 3, 4, 5};
    int num = 5;
    head = createList(arr, num);
    current = head;
    printList(current);
}