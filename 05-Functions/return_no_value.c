#include <stdio.h>
int print_array(int arr[], int size){
    for (int i=0; i<size; i++){
        if (i == 0)
            printf("%d", arr[i]);
        else
            printf(" %d", arr[i]);
    }
    return;
}
int main(void){
    int arr[5];
    int i = 0;
    while (i < 5){
        scanf("%1d", &arr[i]);
        i++;
    }
    print_array(arr, 5);
    return 0;
}