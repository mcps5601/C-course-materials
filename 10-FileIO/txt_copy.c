#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
#define SIZE 100

int main(void){
    char buffer[SIZE];
    int f1, f2, bytes;

    f1 = open("hello.txt", O_RDONLY); // Linux
    f2 = open("hello2.txt", O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
    
    if (f1 != -1 || f2 != -1){
        while ((bytes = read(f1, buffer, SIZE)) > 0){
            write(f2, buffer, bytes);
        }
        close(f1);
        close(f2);
        printf("File copied successfully\n");
    }
    else{
        printf("Error in opening file\n");
    }
}