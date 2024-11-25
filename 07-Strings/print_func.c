#include <stdio.h>
void print_char(char c){
    printf("%c", c);
}
void print_str(char str[]){
    for (int i = 0; str[i] != '\0'; i++){
        print_char(str[i]);
    }
}
int main(void){
    char a_char = 'Y', str_5[] = "Hello";
    print_char(a_char);
    printf("\n");
    print_str(str_5);
}