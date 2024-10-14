#include <stdio.h>
int main(){
    int score[4];
    int i = 0; // i: index
    
    while (i < 4) {
        scanf("%d", &score[i]);
        i++;
    }
    for (int i = 0; i < 4; i++){
        printf("Value: %d (index: %d)\n", score[i], i);
    }
}