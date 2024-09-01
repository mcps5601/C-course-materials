// 範例 1：有大括號
// 輸入 74，結果：沒有輸出
#include <stdio.h>
int main(){
    int score;
    scanf("%d", &score);
    if (score >= 60){
        if (score >= 75)
            printf("等級為 B");
    }
    else
        printf("Failed!");
}

// 範例 2：沒有大括號
// 輸入 74，結果：Failed!
#include <stdio.h>
int main(){
    int score;
    scanf("%d", &score);
    if (score >= 60)
        if (score >= 75)
            printf("等級為 B");
    else
        printf("Failed!");
}