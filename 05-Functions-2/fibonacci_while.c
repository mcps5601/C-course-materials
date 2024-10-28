#include <stdio.h>
int fibonacci(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    int a = 0, b = 1; // a = Fib(0), b = Fib(1)
    int fib = 0;
    int count = 2; // start from 2

    while (count <= n) {
        fib = a + b;  // for current n, fib = a + b
        a = b;        // Update a
        b = fib;      // Update b
        count++;
    }
    return fib;
}
int main(void) {
    int n = 3;
    printf("Fibonacci of %d is: %d", n, fibonacci(n));
    return 0;
}