#include <stdio.h>
int main(void){
    int arr[5] = {5, 4, 3, 2, 1};
    printf("arr: %p\n", arr);
    printf("&arr: %p\n", &arr);
    *arr = 10;
    printf("%d\n", arr[0]);
}