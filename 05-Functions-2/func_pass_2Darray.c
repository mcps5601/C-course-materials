#include <stdio.h>
void print_array(int arr[][4]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("Finish printing an array\n");
}
void modifyArray(int arr[][4]) {
    printf("Address of parameter 'arr' inside function: %p\n", arr);
    arr[0][3] = 999; // Modify the first element
}
int main(void) {
    int score[][4] = {
        {80, 85, 90, 100}, 
        {60, 65, 70, 100}
    };
    print_array(score);
    modifyArray(score);
    print_array(score);
}