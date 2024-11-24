#include <stdio.h>
int main(void){
    char str_5[5] = {'H', 'e', 'l', 'l', 'o'}; 
    char a_char = {'Y'}; 
    printf("%c\n", a_char);

    for (int i = 0; i < sizeof(str_5); i++){
        if (str_5[i] == '\0') {
            printf("\\0");
        } else {
            printf("%c", str_5[i]);
        }
    }
}