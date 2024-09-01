#include <stdio.h>
int main(){
    int score;
    scanf("%d", &score);
    (score >= 60) ? printf("Passed!") : printf("Failed!");
}