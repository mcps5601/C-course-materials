#include <stdio.h>
int main(void){
    int i = 10;
    int *p = &i;
    int deref = *p; // dereferencing
    printf("%d\n", deref);
    *p = 20; // assigning a new value
    printf("%d", *p);
}