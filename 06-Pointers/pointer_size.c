#include <stdio.h>
int main(void){
    int i = 10;
    int *p = &i;
    printf("Size of the pointer p is: %d\n", sizeof(p));
    printf("Size of the value of the pointed varaiable is: %d", sizeof(*p));
}