#include <stdio.h>
int main(void){
    char str_11[] = "Sweet home";
    for (int i = 0; i < sizeof(str_11); i++){
        if (str_11[i] == '\0') {
            printf("\\0");
        } else {
            printf("%c", str_11[i]);
        }
    }
}