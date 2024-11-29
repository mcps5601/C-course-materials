#include <stdio.h>
#include <string.h>
int main(void){
    char str_1[] = "hello world";
    char str_2[] = "hello world";
    printf("%d\n", strcmp(str_1, str_2));
}