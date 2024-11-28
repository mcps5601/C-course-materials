#include <stdio.h>
int print_str(char str[]){
    for (int i = 0; i < 10; i++){
        if (str[i] == '\0') {
            printf("\\0");
        } else {
            printf("%c", str[i]);
        }
    }
    printf("\n");
    return 0;
}
int main(void){
    char strings[3][10] = {"Tom", "Lily", "James Lee"};
    for (int i = 0; i < 3; i++){
        printf("strings[%d]: %s\n", i, strings[i]);
        print_str(strings[i]);
    }
    for (int i = 0; i < 3; i++){
        printf("Addr strings[%d]:%p\n", i, strings[i]);
        printf("Addr strings[%d][0]:%p\n", i, &strings[i][0]);
    }
}