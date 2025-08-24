#include <stdio.h>
#include <string.h>

int main(void){
    char str_1[] = "Left";
    char str_2[] = " Right";
    printf("addr str_1: %p\n", str_1);
    printf("addr str_2: %p\n", str_2);
    strcat(str_1, str_2);
    printf("%s\n", str_1);
    printf("%s\n", str_2);
}