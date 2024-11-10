#include <stdio.h>
int main(void){
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr;
    printf("arr[0]: %d\n", *p);
    p = &arr[1];
    printf("arr[1]: %d\n", *p);
    p = &arr[2];
    printf("arr[2]: %d\n", *p);
}