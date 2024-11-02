#include <stdio.h>
int main(void){
    int i = 10;
    float float_var = 3.14;
    int *iptr = &i;
    iptr = &float_var; // Error: Incompatible types
}