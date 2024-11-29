#include <stdio.h>
#include <string.h>
int main(void){
    char str_1[] = "hello";
    char str_2[] = "bello";
    printf("%d\n", strcmp(str_1, str_2));
    printf("%d\n", strcmp(str_2, str_1));
}