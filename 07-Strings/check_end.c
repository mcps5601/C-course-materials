#include <stdio.h>
int main(void){
    char str_11[5] = {'H', 'e', 'l', 'l', 'o', '\0'};
    for (int i = 0; i < sizeof(str_11); i++){
        if (str_11[i] == '\0') {
            printf("\\0");
        } else {
            printf("%c", str_11[i]);
        }
    }
}