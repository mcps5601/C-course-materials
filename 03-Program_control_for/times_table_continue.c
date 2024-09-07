#include <stdio.h>
int main() {
    int i, j;
    for (i = 1; i <= 9; i++) {
        for (j = 1; j <= 9; j++) {
            if ((j == 5) || (j == 7)){
                // 跳過 5 和 7
                continue;
            }
            printf("%d * %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }
}