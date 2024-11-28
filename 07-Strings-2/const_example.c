#include <stdio.h>
#include <ctype.h>
int main(void){
    // Error! We cannot modify a const variable.
    const char str[] = "hello, world!";
    for (int i = 0; i < sizeof(str); i++){
        str[i] = toupper(str[i]);
    }
    printf("%s\n", str);
}