#include <stdio.h>
int main() {
    int sum = 0;
    int i = 1;
    do {
        sum += i;  // 每次將 i 加入總和
        i++;
    } while (i < 1000);  // 當 i 小於等於 1000 時繼續迴圈
    printf("1 到 1000 的總和是: %d", sum);
}