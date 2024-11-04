#include <stdio.h>
int main(void){
    int i = 10;
    float float_var = 3.14;
    int *iptr = &i;
    iptr = &float_var; // Warning: Incompatible types
    printf("%d\n", *iptr);
    printf("%f\n", *iptr);
}