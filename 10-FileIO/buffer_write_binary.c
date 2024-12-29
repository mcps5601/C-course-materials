#include <stdio.h>
#include <stdlib.h>

// write binary function
void write_binary(const char *filename, int numbers[], int size) {
    FILE *writeFile = fopen(filename, "wb"); // 開啟檔案用於二進位寫入
    if (writeFile == NULL) {
        perror("無法開啟檔案進行寫入");
        exit(1);
    }

    // 將整數陣列寫入檔案
    if (fwrite(numbers, sizeof(int), size, writeFile) != size) {
        perror("寫入檔案時發生錯誤");
        fclose(writeFile);
        exit(1);
    }

    fclose(writeFile);
    printf("成功將整數陣列寫入檔案 '%s'\n", filename);
}

int main() {
    const char *filename1 = "file1.bin";
    const char *filename2 = "file2.bin";

    int numbers1[] = {90, 70, 30, 100, 50};
    int numbers2[] = {60, 20, 80, 10, 40};
    int size1 = sizeof(numbers1) / sizeof(numbers1[0]);
    int size2 = sizeof(numbers2) / sizeof(numbers2[0]);

    write_binary(filename1, numbers1, size1);
    write_binary(filename2, numbers2, size2);

    // // **讀取二進位檔案**
    // FILE *readFile = fopen(filename, "rb"); // 開啟檔案用於二進位讀取
    // if (readFile == NULL) {
    //     perror("無法開啟檔案進行讀取");
    //     return 1;
    // }

    // int readNumbers[size]; // 用於儲存讀取的資料
    // if (fread(readNumbers, sizeof(int), size, readFile) != size) {
    //     perror("讀取檔案時發生錯誤");
    //     fclose(readFile);
    //     return 1;
    // }

    // fclose(readFile);

    // // **打印讀取的內容**
    // printf("從檔案 '%s' 中讀取到的整數陣列：\n", filename);
    // for (int i = 0; i < size; i++) {
    //     printf("%d ", readNumbers[i]);
    // }
    // printf("\n");

    // return 0;
}
