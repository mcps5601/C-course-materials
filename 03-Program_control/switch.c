#include <stdio.h>
int main() {
    int score;
    scanf("%d", &score);
    switch (score / 10) {
        case 10:  // 成績是100
        case 9:
            printf("等級為 A");
        case 8:
            printf("等級為 B");
        case 7:
            printf("等級為 C");
            break;
        case 6:
            printf("等級為 D");
        default:
            printf("等級為 F");
    }
}