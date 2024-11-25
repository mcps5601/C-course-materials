#include <stdio.h>
int main(void){
    char a_string[5] = "Hello";
    for (int i = 0; i < sizeof(a_string); i++){
        printf("Decimal: %d, ", a_string[i]);
        printf("Hexadecimal: %x", a_string[i]);
        printf("\n");
    }
}