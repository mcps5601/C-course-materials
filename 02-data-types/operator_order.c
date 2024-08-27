#include <stdio.h>
int main() {
    int a = 5, b = 10, c = 15;
    // 優先順序將決定運算順序
    int result = a < b || b > c && a == 5;
    printf("Result: %d\n", result);
    return 0;
}