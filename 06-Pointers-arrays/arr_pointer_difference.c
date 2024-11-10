#include <stdio.h>
int main(void){
    int arr[5] = {2, 3, 5, 9, 10};
    int *p = &arr[2];
    int *q = &arr[4];
    printf("%d\n", p - q);
    printf("%d\n", q - p);
}