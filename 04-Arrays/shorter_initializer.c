#include <stdio.h>
int main(){
    int score[4] = {};
    for (int i = 0; i < 4; i++){
        printf("Value: %d (index: %d)\n", score[i], i);
    }
}