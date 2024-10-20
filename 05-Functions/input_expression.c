#include <stdio.h>
int add(int, int); // prototype

int main() {
    int result = add(3 + 3, 4 / 2);
    printf("Result: %d", result);
    return 0;
}

int add(int a, int b) {
    return a + b;
}