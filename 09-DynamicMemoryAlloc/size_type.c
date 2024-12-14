#include <stdio.h>
int main(void){
    int a = 10;
    printf("Size of a: %zu\n", sizeof(a));
    printf("Size of a: %d\n", sizeof(a));
    printf("Size of a: %lu\n", sizeof(a));
    return 0;
}