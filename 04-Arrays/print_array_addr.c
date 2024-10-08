#include <stdio.h>
int main(){
    int score[4] = {80, 85, 90, 100};
    printf("The address of this array: %p\n", &score);
    for (int i = 0; i < 4; i++){
        printf("The address of score[%d]: %p\n", i, &score[i]);
    }
}