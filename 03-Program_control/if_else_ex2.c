#include <stdio.h>
int main(){
    int score;
    scanf("%d", &score);
    if (score >= 60){
        printf("分數為%d，", score);
        printf("Passed!");
    }
    else
        printf("分數為%d，", score);
        printf("Failed!"); // 這行一定會執行
}