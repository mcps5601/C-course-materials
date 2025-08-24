#include <stdio.h>

int main() {
    int arr[10];
    int n;

    // 輸入數組大小
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // 檢查輸入大小是否符合範圍
    if (n <= 0 || n > 10) {
        printf("Invalid array size. Please enter a number between 1 and 10.\n");
        return 1;
    }

    // 輸入數組元素
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 初始化最大值和最小值
    int max_value = *arr;
    int min_value = *arr;

    // 第一遍遍歷數組，找出單一的最大值和最小值
    for (int i = 1; i < n; i++) {
        if (*(arr + i) > max_value) {
            max_value = *(arr + i);
        }
        if (*(arr + i) < min_value) {
            min_value = *(arr + i);
        }
    }

    // 第二遍遍歷數組，找出所有最大值和最小值的索引
    printf("Max value: %d, indexes:", max_value);
    for (int i = 0; i < n; i++) {
        if (*(arr + i) == max_value) {
            printf(" %d", i);
        }
    }
    printf("\n");

    printf("Min value: %d, indexes:", min_value);
    for (int i = 0; i < n; i++) {
        if (*(arr + i) == min_value) {
            printf(" %d", i);
        }
    }
    printf("\n");

    return 0;
}