#include <stdio.h>
int main(void){
    int i = 10;
    float f = 10.0;
    double d = 10.0;
    int *iptr = &i;
    float *fptr = &f;
    double *dptr = &d;
    printf("Size of the int pointer p is: %d\n", sizeof(iptr));
    printf("Size of the value of the pointed varaiable is: %d\n", sizeof(*iptr));
    printf("Size of the float pointer p is: %d\n", sizeof(fptr));
    printf("Size of the value of the pointed varaiable is: %d\n", sizeof(*fptr));
    printf("Size of the double pointer p is: %d\n", sizeof(dptr));
    printf("Size of the value of the pointed varaiable is: %d", sizeof(*dptr));
}