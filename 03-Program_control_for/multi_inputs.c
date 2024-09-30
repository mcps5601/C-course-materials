#include <stdio.h>
int main() {
    int n, sum, chinese, english, math;
    scanf("%d", &n);  // 讀取輸入的組數
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &chinese, &english, &math);
        sum = chinese + english + math;
        printf("Total: %d\n", sum);
    }
}