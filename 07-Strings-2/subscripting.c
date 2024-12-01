#include <stdio.h>
int main(void){
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = &arr[0];
    printf("arr[0] = %d\n", arr[0]);
    printf("p[0] = %d\n", p[0]);    // *(p + 0)
    printf("arr[1] = %d\n", arr[1]);
    printf("p[1] = %d\n", p[1]);    // *(p + 1)
}