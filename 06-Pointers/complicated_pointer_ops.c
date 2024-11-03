#include <stdio.h>
int main(void){
    int i = 10;
    int *iptr = &i;
    // Operation 1
    printf("&(*iptr) = %p\n", &(*iptr));
    // Operation 2
    printf("*(&iptr) = %p\n", *(&iptr));
    // Operation 3
    printf("*(*(&iptr)) = %d\n", *(*(&iptr)));
    // Operation 4
    printf("*(&(*iptr)) = %d\n", *(&(*iptr)));
    // Operation 5
    printf("&(*(&iptr)) = %p\n", &(*(&iptr)));
    printf("*&i = %d\n", *&i);
}