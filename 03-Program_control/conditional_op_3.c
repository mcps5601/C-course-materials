#include <stdio.h>
int main() {
    int score;
    scanf("%d", &score);
    score = (score >= 60) ? (score + 10) : 60;
    printf("Adjusted score = %d\n", score);
}