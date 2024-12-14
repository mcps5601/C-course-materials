#include <stdio.h>
#include <stdlib.h>
int main(void){
    int *ptr;
    ptr = (int *)malloc(3*sizeof(int));
    *ptr = 15;
    *(ptr + 1) = 35;
    *(ptr + 2) = 140;
    printf("Value at ptr + 2: %d\n", *(ptr + 2));
    free(ptr);
    printf("Value at ptr + 2: %d\n", *(ptr + 2));
}