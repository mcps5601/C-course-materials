#include <stdio.h>
int main(void){
    int i = 10;
    void *ptr = &i;  // void pointer pointing to an int (no warning)
    printf("Value of i: %d", *(int *)ptr);
}