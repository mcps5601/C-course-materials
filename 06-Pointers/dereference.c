#include <stdio.h>
int main(void){
    int *p;
    int i = 10;
    p = &i;
    printf("The value of i is: %d", *p);
}