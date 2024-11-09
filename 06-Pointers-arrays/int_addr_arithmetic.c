#include <stdio.h>
int main(void){
    int int_a;
    printf("%p\n", &int_a);
    printf("%p\n", &int_a+1);
    printf("%p\n", &int_a+2);
}