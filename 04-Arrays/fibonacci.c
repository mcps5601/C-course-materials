#include <stdio.h>
int main(){
    int fib[100];
    int n;
    scanf("%d", &n);
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i < n; i++){
        fib[i] = fib[i-1] + fib[i-2];
        printf("%d\n", fib[i]);
    }
    printf("The n-th number is: %d\n", fib[n-1]);
}
