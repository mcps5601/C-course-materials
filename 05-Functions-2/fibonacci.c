#include <stdio.h>

int fib(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        // Fib(n) = Fib(n - 1) + Fib(n - 2)
        return fib(n - 1) + fib(n - 2);
    }
}
int main() {
    int n = 3;
    printf("Fib of %d is: %d", n, fib(n));
    return 0;
}