#include <stdio.h>
#include <string.h>

int main(void){
    char str_1[12] = "Left";
    char str_2[] = " Right";
    strcat(str_1, str_2);
    printf("%s\n", str_1);
}