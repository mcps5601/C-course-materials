#include <stdio.h>
int main(void){
    char a_char = 'Y';
    char str_11[11] = "Sweet home";

    printf("a_name: %c\n", a_char);
    printf("str_11: %s\n", str_11);

    // char a_name = “Y"; // This line will cause an error
    // char a_name[] = 'S'; // This line will cause an error
    // char a_char[] = {'Y'}; // This line will cause an error
}
