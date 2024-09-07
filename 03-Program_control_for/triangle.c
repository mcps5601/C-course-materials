#include <stdio.h>
int main() {
    int rows = 5;
    for (int i = 1; i <= rows; i++) {  // 控制行數量
        for (int j = 1; j <= i; j++) {  // 控制每行的星號數量
            printf("* ");
        }
        printf("\n");
    }
}