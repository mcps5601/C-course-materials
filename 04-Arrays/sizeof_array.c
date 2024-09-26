#include <stdio.h>
int main(){
    int score[4] = {80, 85, 90, 100};
    printf("Size of the int array: %d bytes\n", sizeof(score));
    printf("Array length: %d\n", sizeof(score)/sizeof(score[0]));

    float f_score[4];
    printf("Size of the float array: %d bytes\n", sizeof(f_score));
    printf("Array length: %d\n", sizeof(f_score)/sizeof(f_score[0]));
    
    double d_score[4];
    printf("Size of the double array: %d bytes\n", sizeof(d_score));
    printf("Array length: %d\n", sizeof(d_score)/sizeof(d_score[0]));
}