#include <stdio.h>
int main() {
    int score;
    scanf("%d", &score);
    // 使用 if-else if 結構來判斷成績等級
    if (score >= 90) {
        printf("等級為 A");
    } else if (score >= 75) {
        printf("等級為 B");
    }
}