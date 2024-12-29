#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main(void) {
    const char *filename1 = "file1.bin";
    int numbers1[MAX];
    int size1;

    // read files to the arrays
    FILE *readFile1 = fopen(filename1, "rb");
    size1 = fread(numbers1, sizeof(int), MAX, readFile1);
    for (int i = 0; i < size1; i++) {
        printf("%d ", numbers1[i]);
    }
}