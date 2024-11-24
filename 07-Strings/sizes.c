#include <stdio.h>
int main(void){
    char a_char = 'S';
    printf("%d\n", sizeof(a_char));

    char a_string[] = "S";
    printf("%d\n", sizeof(a_string));

    char str_11[] = "Sweet home";
    printf("%d\n", sizeof(str_11));
}