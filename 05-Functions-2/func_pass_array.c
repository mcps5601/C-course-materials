#include <stdio.h>
void print_array(int arr[]) {
    for (int i = 0; i < 4; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nFinish printing an array\n");
}
void modifyArray(int arr[]) {
    printf("Address of parameter 'arr' inside function: %p\n", arr);
    arr[0] = 999; // Modify the first element
}
int main(void) {
    int score[4] = {80, 85, 90, 100};
    print_array(score);
    modifyArray(score);
    print_array(score);
    modifyArray(&score[1]);
    print_array(score);
    printf("%p\n", score);
    printf("%p", &score[0]);
}