#include <stdio.h>
int main(){
    int score[3][2][4] = {{
        {80, 85, 90, 100}, 
        {60, 65, 70, 100}
    },
    {
        {80, 85, 90, 100}, 
        {60, 65, 70, 100}
    },
    {
        {80, 85, 90, 100}, 
        {60, 65, 70, 100}
    }};
    printf("The address of this array: %p\n", &score);
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            for (int k = 0; k < 4; k++){
                printf("The address of score[%d][%d][%d]: %p\n", i, j, k, &score[i][j][k]);
            }
        }
    }
}