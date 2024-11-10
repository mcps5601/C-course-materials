#include <stdio.h>
int main(void){
    int arr1[5] = {2, 3, 5, 9, 10};
    int arr2[5] = {2, 3, 5, 9, 10};
    int *p = &arr1[2];
    int *q = &arr2[4];
    printf("%d\n", p - q);
    printf("%d\n", q - p);
}