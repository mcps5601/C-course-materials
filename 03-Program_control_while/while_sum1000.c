#include <stdio.h>
int main() {
    int i = 1, sum = 0;
    printf("%d", sum);
    while (i <= 1000) {
        sum += i;
        i += 1;
    }
    printf("1到1000的和是：%d\n", sum);
}