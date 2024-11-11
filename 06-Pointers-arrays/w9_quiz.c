#include <stdio.h>

// 交換兩個整數值的函數
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int *arr, int size) {
    for(int i = 1; i < size; i++) {
        for(int j = 0; j < size - i; j++) {
            if(*(arr + j) > *(arr + j + 1)) {
                swap((arr + j), (arr + j + 1));
            }
        }
    }
}

// 印出陣列的函數
void printArray(int *arr, int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main(void) {
    int arr[4] = {99, 35, 34, 97};
    int size = 4;
    
    printf("排序前: ");
    printArray(arr, size);
    
    bubbleSort(arr, size);
    
    printf("排序後: ");
    printArray(arr, size);
    
    return 0;
}