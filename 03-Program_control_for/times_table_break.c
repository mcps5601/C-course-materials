#include <stdio.h>
int main() {
    int i, j;
    int stop_num = 6;
    for (i = 1; i <= 9; i++) {
        for (j = 1; j <= 9; j++) {
            printf("%d * %d = %d\n", i, j, i * j);
            if (j == stop_num){
                break;
            }
        }
        printf("\n");
        // if (i == stop_num){
        //     break;
        // }
    }
}