#include <stdio.h>
int main() {
    int score, sum = 0, count = 0;
    float average;
    while (1){
        if (scanf("%d", &score) == EOF)
            break;
        else {
            sum += score;
            count++;
        }
    }
    printf("平均成績: %f", (float)sum / count);
}