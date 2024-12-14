#include <stdio.h>
#include <stdlib.h>
int main(void){
    int *ptr;
    // ptr = (int *)malloc(sizeof(12));
    ptr = (int *)malloc(3*sizeof(int));
    *ptr = 15;
    *(ptr + 1) = 35;
    *(ptr + 2) = 140;
    printf("Value at ptr: %d\n", *ptr);
    printf("Value at ptr + 1: %d\n", *(ptr + 1));
    printf("Value at ptr + 2: %d\n", *(ptr + 2));
    printf("%p\n", &ptr);
    printf("%p\n", ptr);
    printf("%p\n", ptr+1);
    printf("%p\n", ptr+2);
}