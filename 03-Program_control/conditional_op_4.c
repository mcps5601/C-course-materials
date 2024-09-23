#include <stdio.h>
int main(){
    int score = 49;
    scanf("%d", &score);
    score = (score >= 60) ? (score + 10) : ((score >= 50) ? 60 : (score + 10));
    printf("Adjusted score = %d\n", score);
}