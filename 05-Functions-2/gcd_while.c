#include <stdio.h>
int gcd(int a, int b) {
    int temp;
    while (b != 0) {
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}
int main() {
    int num1 = 48, num2 = 18;
    printf("%d", gcd(num1, num2));
    return 0;
}