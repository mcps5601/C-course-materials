#include <stdio.h>
int main(){
    int score[2][3][4] = {
        {
            {80, 85, 90, 100},
            {75, 80, 85, 90},
            {60, 65, 70, 75}
        },
        {
            {55, 60, 65, 70},
            {50, 55, 60, 65},
            {45, 50, 55, 60}
        }
    };
    printf("The address of score: %p\n", &score);
    printf("The address of score[0]: %p\n", &score[0]);
    printf("The address of score[0][0]: %p\n", &score[0][0]);
    printf("The address of score[0][0][0]: %p\n", &score[0][0][0]);
    printf("The address of score[1]: %p\n", &score[1]);
    printf("The address of score[1][0]: %p\n", &score[1][0]);
    printf("The address of score[1][0][0]: %p\n", &score[1][0][0]);

    printf("The address of this array: %p\n", &score);
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            for (int k = 0; k < 4; k++){
                printf("The address of score[%d][%d][%d]: %p\n", i, j, k, &score[i][j][k]);
            }
        }
    }
}