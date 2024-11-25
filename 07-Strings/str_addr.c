#include <stdio.h>
int main(void){
    char a_string[] = "Hello";
    printf("size: %d\n", sizeof(a_string));
    printf("a_string: %p\n", a_string);
    for (int i = 0; i < sizeof(a_string); i++){
        printf("a_string[%d]: %p\n", i, &a_string[i]);
    }
}