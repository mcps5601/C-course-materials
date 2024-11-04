#include <stdio.h>
int main(void){
    int a = 5, b = 10;
    printf("&a: %p\n", &a);
    printf("&b: %p\n", &b);

    int *ptr1, *ptr2;
    ptr1 = &a;
    ptr2 = &b;
    printf("*ptr1: %d\n", *ptr1);
    printf("ptr1: %p\n", ptr1);
    printf("&ptr1: %p\n", &ptr1);
    printf("*ptr2: %d\n", *ptr2);
    printf("ptr2: %p\n", ptr2);
    printf("&ptr2: %p\n", &ptr2);
    ptr2 = ptr1;
    printf("*ptr2: %d\n", *ptr2);
    printf("ptr2: %p\n", ptr2);
    printf("&ptr2: %p\n", &ptr2);
}