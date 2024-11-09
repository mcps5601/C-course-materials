#include <stdio.h>
int main(void){
    int arr[5] = {1, 2, 3, 4, 5};
    int *p;
    for (int i = 0; i < 5; i++){
        p = &arr[i];
        printf("%d\n", *p);
    }
}