#include <stdio.h>
int main(){
    int score[3] = {80, 85, 90, 100};
    for (int i = 0; i < 4; i++){
        printf("Value: %d (index: %d)\n", score[i], i);
    }
}