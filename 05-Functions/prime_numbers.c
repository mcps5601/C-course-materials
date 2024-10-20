#include <stdio.h>

// return 1 if num is prime, otherwise return 0
int is_prime(int num) {
    if (num < 2) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main(void) {
    int n, primeCount = 0;
    printf("請輸入一個正整數 n: ");
    scanf("%d", &n);
    for (int i = 2; i <= n; i++) { // start from 2
        if (is_prime(i)) {
            primeCount++;
        }
    }
    printf("%d", primeCount);
}