#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *fptr1, *fptr2;
    char ch;
    int count = 0;

    fptr1 = fopen("hello.txt", "r");
    fptr2 = fopen("hello_copy.txt", "w");
    if (fptr1 != NULL && fptr2 != NULL){
        while ((ch = fgetc(fptr1)) != EOF){
            fputc(ch, fptr2);
            count++;
        }
        fclose(fptr1);
        fclose(fptr2);
        printf("Num of characters: %d\n", count);
    }
    else{
        printf("Failed to open file\n");
    }
}