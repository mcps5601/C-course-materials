#include <stdio.h>
int main(void){
    // int arr[5] = {1, 2, 3, 4, 5};
    int arr[5] = {5, 4, 3, 2, 1}, *p;
    int sum = 0;
    for (p = &arr[0]; p < &arr[5]; p++){
        sum += *p;
    }
    printf("Sum: %d\n", sum);
    printf("%p\n", &sum);
    printf("%p\n", &sum+1);
    p = &arr[0];
    printf("%d\n", *p);
}