#include <stdio.h>
int main(){
    int score[4]; // 4 integer elements in the array `score`
    score[0] = 80;
    score[1] = 85;
    score[2] = 90;
    score[3] = 100;
    
    for (int i = 0; i < 4; i++){
        printf("Value: %d (index: %d)\n", score[i], i);
    }
}
