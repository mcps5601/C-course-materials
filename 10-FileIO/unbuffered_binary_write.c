#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

// write binary function
void write_binary(const char *filename, int numbers[], int size) {
    int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
    if (fd == -1) {
        perror("無法開啟檔案進行寫入");
    }

    size_t bytes_written = write(fd, numbers, size * sizeof(int));
    if (bytes_written != size * sizeof(int)) {
        perror("寫入檔案時發生錯誤");
        close(fd);
    }

    close(fd); // 關閉檔案
    printf("成功將整數陣列寫入檔案 '%s'\n", filename);
}

int main(void) {
    const char *filename1 = "file1.bin";
    int numbers1[] = {90, 70, 30, 100, 50};
    int size1 = sizeof(numbers1) / sizeof(numbers1[0]);

    write_binary(filename1, numbers1, size1);
}