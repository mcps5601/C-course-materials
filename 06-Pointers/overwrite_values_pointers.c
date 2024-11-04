#include <stdio.h>
int main(void){
    int a = 5, b = 10;
    int *ptr1 = &a;
    *ptr1 = b;
    printf("a: %d\n", a);
    printf("*ptr1: %d", *ptr1);
}