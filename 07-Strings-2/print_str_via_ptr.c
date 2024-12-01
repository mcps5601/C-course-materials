#include <stdio.h>
int main(void){
    char a_string[] = "Sweet home"; 
    char *ptr = a_string;
    for (int i = 0; i < sizeof(a_string); i++){
        printf("%c", *(ptr + i));
    }
}

    // while(*ptr != '\0'){
    //     printf("%c", *ptr);
    //     ptr++;
    // }