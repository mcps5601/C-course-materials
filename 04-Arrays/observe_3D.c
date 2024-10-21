#include <stdio.h>
int main(){
    int score[3][2][4] = {
        {
            {80, 85, 90, 100}, 
            {61, 65, 70, 100}
        },
        {
            {70, 85, 90, 100}, 
            {62, 65, 70, 100}
        },
        {
            {60, 85, 90, 100}, 
            {63, 65, 70, 100}
        }
    };
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%2d ", score[2][i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 4; i++) {
        printf("%2d ", score[0][1][i]);
    }
}
