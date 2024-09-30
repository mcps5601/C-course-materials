#include <stdio.h>
int main() {
    int rows = 5;
    for (int i = rows; i > 0; i--) {  // 控制行數量
        for (int j = 0; j < rows-i; j++) {  // 控制每行的空格數量
            printf("  ");
        }
        for (int j = 1; j <= 2*i-1; j++) {  // 控制每行的星號數量
            printf("* ");
        }
        printf("\n");
    }
}