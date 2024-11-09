#include <stdio.h>
int main(void){
    // int arr[5] = {1, 2, 3, 4, 5}, *p;
    // p = &arr[0]; // equal to p = arr;

    int arr[5] = {1, 2, 3, 4, 5};
    int *p = &arr[0];  // equal to int *p = arr;
    printf("%p\n", p);
    p = arr;
    printf("%p\n", p);
}