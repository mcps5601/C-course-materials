#include <stdio.h>

void modifyArray(int arr[]) {
    printf("Address of parameter 'arr' inside function: %p\n", arr);
    arr[0] = 999; // Modify the first element
}

int main(void) {
    int score[4] = {80, 85, 90, 100};
    printf("Address of argument 'score' in main: %p\n", score);
    
    printf("First element before modification: %d\n", score[0]);
    modifyArray(score);
    printf("First element after modification: %d\n", score[0]);
    return 0;
}
