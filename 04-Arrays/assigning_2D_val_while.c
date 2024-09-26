#include <stdio.h>
int main(){
    int score[2][4];
    int i = 0, row = 0, col = 0;
    
    while (i < 8) {
        scanf("%d", &score[row][col]);
        i++;  // index increment
        col++;
        if (i % 4 == 0){
            row++;
            col = 0;
        }
    }
    for (row = 0; row < 2; row++){
        for (col = 0; col < 4; col++){
            printf("%d at (%d, %d)\n", score[row][col], row, col);
        }
    }
}