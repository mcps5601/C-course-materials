#include <stdio.h>
#include <stdlib.h>

// write binary function
void write_binary(const char *filename, int numbers[], int size) {
    FILE *writeFile = fopen(filename, "wb"); // 開啟檔案用於二進位寫入
    if (writeFile == NULL) {
        printf("無法開啟檔案進行寫入");
    }
    if (fwrite(numbers, sizeof(int), size, writeFile) != size) {
        printf("寫入檔案時發生錯誤");
        fclose(writeFile);
    }
    fclose(writeFile);
    printf("成功將整數陣列寫入檔案 '%s'\n", filename);
}

int main(void) {
    const char *filename1 = "file1.bin";
    int numbers1[] = {90, 70, 30, 100, 50};
    int size1 = sizeof(numbers1) / sizeof(numbers1[0]);

    write_binary(filename1, numbers1, size1);
}
