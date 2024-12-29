#include <stdio.h>
#include <stdlib.h>
int main(void){
    FILE *fptr;
    char ch;
    int count = 0;

    fptr = fopen("hello.txt", "r");
    if (fptr != NULL){
        while ((ch = fgetc(fptr)) != EOF){
            printf("%c", ch);
            count++;
        }
        fclose(fptr);
        printf("\nNum of characters: %d\n", count);
    }
    else{
        printf("Failed to open file\n");
    }
}