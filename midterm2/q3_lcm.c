#include <stdio.h>
int gcd(int a, int b) {
    if (b != 0) {
        return gcd(b, a % b);
    } else {
        return a;
    }
}
int main() {
    int num1,num2;
    scanf("%d %d", &num1, &num2);
    int lcm = (num1 * num2) / gcd(num1, num2);
    printf("%d", lcm);
    // 5 2 => 10
    // 10 20 => 20
    // 3 5 => 15
    // 1 2 => 2
    // 4 10 => 20
}