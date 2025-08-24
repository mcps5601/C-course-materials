#include <stdio.h>

int find_intersection_with_count(int *arr1, int n1, int *arr2, int n2, int *result, int *count) {
    int k = 0; // 記錄交集元素的數量

    // 遍歷 arr1 中的每個元素
    for (int i = 0; i < n1; i++) {
        int element = *(arr1 + i);
        int count1 = 0, count2 = 0;

        // 計算 element 在 arr1 中的出現次數
        for (int x = 0; x < n1; x++) {
            if (*(arr1 + x) == element) {
                count1++;
            }
        }

        // 計算 element 在 arr2 中的出現次數
        for (int y = 0; y < n2; y++) {
            if (*(arr2 + y) == element) {
                count2++;
            }
        }

        // 如果在兩個數組中都至少出現一次，則加入交集
        if (count1 > 0 && count2 > 0) {
            int already_in_result = -1;

            // 檢查是否已經在 result 陣列中
            for (int m = 0; m < k; m++) {
                if (*(result + m) == element) {
                    already_in_result = m;
                    break;
                }
            }

            // 如果還不在 result 陣列中，則加入並記錄出現次數
            if (already_in_result == -1) {
                *(result + k) = element;
                *(count + k) = (count1 < count2) ? count1 : count2; // 記錄兩者的最小出現次數
                k++;
            }
        }
    }

    return k; // 返回交集元素的數量
}

void print_with_sorted_count(int *result, int *count, int size) {
    // 依照出現次數由大到小排序
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (*(count + i) < *(count + j)) {
                int temp = *(count + i);
                *(count + i) = *(count + j);
                *(count + j) = temp;

                temp = *(result + i);
                *(result + i) = *(result + j);
                *(result + j) = temp;
            }
        }
    }
    
    // 輸出結果
    for (int i = 0; i < size; i++) {
        printf("%d (%d) ", *(result + i), *(count + i));
    }
    printf("\n");
}

int main() {
    int arr1[10], arr2[10], result[10], count[10];
    int n1, n2;

    // 輸入第一個數組的大小與元素
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    printf("Enter %d elements for the first array: ", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // 輸入第二個數組的大小與元素
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);
    printf("Enter %d elements for the second array: ", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // 找出交集並計算每個交集元素的出現次數
    int intersection_size = find_intersection_with_count(arr1, n1, arr2, n2, result, count);

    // 輸出結果
    if (intersection_size == 0) {
        printf("No intersection\n");
    } else {
        printf("Intersection: ");
        for (int i = 0; i < intersection_size; i++) {
            printf("%d (%d) ", result[i], count[i]);
        }
        printf("\n");
    }
    print_with_sorted_count(result, count, intersection_size);

    return 0;
}