#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

int main(void){
    FILE *fptr;
    char str[MAX], ch;
    int i = 0;
    fptr = fopen("hello.txt", "a");
    fputc('\n', fptr);

    printf("Please enter a string: ");
    fgets(str, MAX, stdin);    
    fwrite(str, sizeof(char), strlen(str), fptr);
    fclose(fptr);
    printf("Data written to file\n");
}