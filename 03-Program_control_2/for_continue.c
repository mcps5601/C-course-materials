#include <stdio.h>
int main() {
    int i;
    for (i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            continue;  // 如果 i 是偶數，跳過本次迴圈
        }
        printf("%d\n", i);
    }
}