#include <stdio.h>
int main(){
    int score[4] = {80, 85, 90, 100};
    printf("The address of this array: %p\n", score[0]);
    printf("The address of this array: %p\n", score[1]);
    printf("The address of this array: %p\n", score[2]);
    printf("The address of this array: %p\n", score[3]);
}