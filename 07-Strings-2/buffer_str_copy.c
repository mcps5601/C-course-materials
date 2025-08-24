#include <stdio.h>
#include <string.h>
int main(void){
    char str_1[5] = "Left";
    char str_2[] = " Right";
    strncpy(str_1, str_2, strlen(str_1));
    printf("%s\n", str_1);
    printf("%s\n", str_2);
}