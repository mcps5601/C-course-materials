#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main(void) {
    const char *filename1 = "file1.bin";
    const char *filename2 = "file2.bin";

    int numbers1[MAX];
    int numbers2[MAX];
    int size1, size2;

    // read file1.bin to numbers1
    FILE *readFile1 = fopen(filename1, "rb");
    FILE *readFile2 = fopen(filename2, "rb");
    size1 = fread(numbers1, sizeof(int), MAX, readFile1);
    size2 = fread(numbers2, sizeof(int), MAX, readFile2);
    for (int i = 0; i < size1; i++) {
        printf("%d ", numbers1[i]);
    }
    printf("\n");
    for (int i = 0; i < size2; i++) {
        printf("%d ", numbers2[i]);
    }
}
