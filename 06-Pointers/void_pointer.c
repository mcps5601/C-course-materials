#include <stdio.h>
int main(void){
    int i = 10;
    float *ptr = &i;
    printf("Value of i: %d", *(int *)ptr);
}