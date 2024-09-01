#include <stdio.h>
int main(){
    int score;
    scanf("%d", &score);
    if (score >= 60)
        printf("Passed!");
    if (score < 60 && score >= 55)
        printf("算你合格");
    else
        printf("Failed!");
}