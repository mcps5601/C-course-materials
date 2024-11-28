#include <stdio.h>
#include <ctype.h>
int main(void){
    char str[] = "BELLO!";
    for (int i = 0; i < sizeof(str); i++){
        str[i] = tolower(str[i]);
    }
    printf("%s\n", str);
}