#include <stdio.h>
int main(){
    int score;
    scanf("%d", &score);
    // 使用巢狀 if 結構來判斷成績等級
    if (score >= 90) {
        if (score == 100) {
            printf("等級為 A+，滿分！");
        } else {
            printf("等級為 A");
        }
    }
    else if (score >= 70) {
        if (score >= 85) {
            printf("等級為 B+");
        } else {
            printf("等級為 B");
        }
    }
    else
        printf("等級為 C");
}