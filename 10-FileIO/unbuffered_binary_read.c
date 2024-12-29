#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#define MAX 10

int main(void) {
    const char *filename1 = "file1.bin";
    int numbers1[MAX], bytes;

    int fd = open(filename1, O_RDONLY); // file descriptor
    if (fd == -1) {
        perror("無法開啟檔案進行讀取");
    }

    bytes = read(fd, numbers1, sizeof(numbers1));
    if (bytes == -1) {
        perror("讀取檔案時發生錯誤");
        close(fd);
    }

    bytes /= sizeof(int); // actual number of elements read
    for (int i = 0; i < bytes; i++) {
        printf("%d ", numbers1[i]);
    }
    close(fd);
}
