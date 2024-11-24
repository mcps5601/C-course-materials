#include <stdio.h>
int main(void){
    char a_string[10];
    while (scanf("%s", a_string) != EOF){
        printf("Now the string is: %s\n", a_string);
        for (int i = 0; i < sizeof(a_string); i++){
            if (a_string[i] == '\0') {
                break;
            }
            printf("%c ", a_string[i]);
        }
    }    
    return 0;
}