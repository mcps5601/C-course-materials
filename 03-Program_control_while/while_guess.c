#include <stdio.h>
int main() {
    int target = 7;  // 正確的數字
    int guess;

    printf("猜一個數字：\n");
    scanf("%d", &guess);

    while (guess != target) {
        if (guess < target) {
            printf("太小了！再試一次：\n");
        } else {
            printf("太大了！再試一次：\n");
        }
        scanf("%d", &guess);
    }
    printf("恭喜！你猜對了！\n");
}