#include <stdio.h>
int main() {
    int n, sum, chinese, english, math;
    int i = 0;  // counter
    scanf("%d", &n);  // 讀取輸入的組數

    while (i < n) {
        scanf("%d %d %d", &chinese, &english, &math);
        sum = chinese + english + math;
        printf("Total: %d\n", sum);
        i++;
    }
}