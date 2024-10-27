#include <stdio.h>
int do_factorial(int n){
    int i, total = 1;
    for (i = 1; i <= n; i++){
        total *= i;
    }
    return total;
}
int main(void){
    int ans;
    ans = do_factorial(5);
    printf("Factorial(5): %d", ans);
    return 0;
}