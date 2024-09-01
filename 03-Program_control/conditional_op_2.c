#include <stdio.h>
int main(){
    int score;
    scanf("%d", &score);
    (score >= 60) ? (score += 10) : (score = 60);
    printf("Adjusted score = %d\n", score);
}