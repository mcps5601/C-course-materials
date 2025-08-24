#include <stdio.h>
#include <string.h>

int main(void){
    char str_1[10] = "Left";
    char str_2[] = " Right";
    // sizeof(str_1): 10
    // strlen(str_2): 6
    strncat(str_1, str_2, sizeof(str_1) - 1 - strlen(str_2));
    printf("%s\n", str_1);
    printf("%s\n", str_2);
}