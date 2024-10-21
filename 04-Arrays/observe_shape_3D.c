#include <stdio.h>
int main(){
    int score[3][2][4] = {
        {
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
        }
    };
    printf("The size of this array: %d\n", sizeof(score));
    int total_elements = sizeof(score) / sizeof(score[0][0][0]);

    // Size of the first dimension
    int dim1 = sizeof(score) / sizeof(score[0]);

    // Size of the second dimension
    int dim2 = sizeof(score[0]) / sizeof(score[0][0]);

    // Size of the third dimension
    int dim3 = sizeof(score[0][0]) / sizeof(score[0][0][0]);

    printf("The shape of the 3D array is: [%d][%d][%d]\n", dim1, dim2, dim3);
    printf("Total elements: %d\n", total_elements);
}
