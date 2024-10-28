#include <stdio.h>
int gcd(int a, int b) {
    if (b != 0) {
        return gcd(b, a % b);
    } else {
        return a;
    }
}
int main() {
    int num1 = 48, num2 = 18;
    printf("%d", gcd(num1, num2));
    return 0;
}