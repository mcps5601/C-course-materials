/*
Perform combinations
*/

#include <stdio.h>
int do_factorial(int n){
    if (n == 0){
        return 1;
    }
    return n * do_factorial(n - 1);
}
int main(void){
    int n, r;
    scanf("%d %d", &n, &r);
    if (n < r) {
        printf("-1");
        return 0;
    }
    int ans = do_factorial(n) / (do_factorial(r) * do_factorial(n - r));
    printf("%d", ans);
    return 0;
    // 5 3 => 10
    // 6 2 => 15
    // 10 4 => 210
    // 4 2 => 6
    // 2 4 => -1
}
