#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

void print_str(char str1[], int size){
    for (int i = 0; i < size; i++){
        if (str1[i] == '\0'){
            printf("\\0");
        }
        else{
            printf("%c", str1[i]);
        }
    }
}

int main(void){
    FILE *fptr;
    char str[MAX];
    int num_of_chars = 0;
    fptr = fopen("hello.txt", "r");
    size_t bytes_read;

    while ((bytes_read = fread(str, sizeof(char), MAX, fptr)) > 0){
        num_of_chars += bytes_read; // TODO: bytes_read
        if (num_of_chars < MAX){
            str[num_of_chars] = '\0';
        }
        // printf("%s", str);
        print_str(str, num_of_chars);
    }
    fclose(fptr);
}