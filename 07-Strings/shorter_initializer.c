#include <stdio.h>
int main(void){
    char a_string[10] = "Hello";
    for (int i = 0; i < sizeof(a_string); i++){
        if (a_string[i] == '\0') {
            printf("\\0");
        } else {
            printf("%c", a_string[i]);
        }
    }
    char c = 223;
    printf("%c\n", c);
}