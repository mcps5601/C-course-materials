#include <stdio.h>
int main(){
    int score;
    scanf("%d", &score);
    if (score >= 60)
        printf("Passed!");
    if (score < 60)
        printf("Failed!");
}