#include <stdio.h>
int main(){
    int rows, i, j;
    scanf("%d", &rows);

    for (i = 0; i < rows; i++) {  // 控制行數量
        for (j = 0; j < i; j++) {  // 控制每行的星號數量
            printf(" ");
        }
        for (j = 0; j < rows - i; j++) {  // 控制每行的星號數量
            printf("*");
        }
        printf("\n");
    }
}