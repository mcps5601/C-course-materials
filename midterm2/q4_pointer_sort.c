/*
https://github.com/mcps5601/C-course-materials/blob/main/06-Pointers-arrays/w9_quiz.c
*/

#include <stdio.h>

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

void printArray(int *arr, int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main(void) {
    int arr[4];
    int size = 4;
    // 99 35 34 97
    // 57 34 100 6

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    } 
    // printf("排序前: ");
    // printArray(arr, size);
    
    bubbleSort(arr, size);
    // printf("排序後: ");
    printArray(arr, size);
}