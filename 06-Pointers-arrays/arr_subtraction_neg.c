#include <stdio.h>
int main(void){
    int arr[5] = {2, 3, 5, 9, 10};
    int *p = &arr[0];
    printf("%p\n", p);
    printf("%p\n", p - 1);
    printf("%d\n", *(p - 1));
}