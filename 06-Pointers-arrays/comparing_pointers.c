#include <stdio.h>
int main(void){
    // int arr[5] = {1, 2, 3, 4, 5};
    int arr[5] = {5, 4, 3, 2, 1};
    int *p = &arr[4];
    int *q = &arr[0];
    printf("%p\n", p);
    printf("%p\n", q);
    printf("%d\n", p > q);
    printf("%d\n", p <= q);
}