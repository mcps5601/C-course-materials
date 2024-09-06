#include <stdio.h>
int main() {
    int sum = 0;
    for (int i = 1; i <= 1000; i++) {
        sum += i;
    }
    printf("1到1000的和是：%d\n", sum);
}