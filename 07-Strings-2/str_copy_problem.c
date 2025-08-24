#include <stdio.h>
#include <string.h>

int main(void){
    char str_1[5] = "Left";
    char str_2[7] = " Right";
    printf("addr str_1: %p\n", str_1);
    printf("addr str_2: %p\n", str_2);
    strcpy(str_1, str_2);
    printf("str_1: %s\n", str_1);
    printf("str_2: %s\n", str_2);
}