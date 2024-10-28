#include <stdio.h>
int do_factorial(int n){
    int ans = 1;
    while (n > 0){
        ans *= n;
        n--;
    }
    return ans;
}
int main(void){
    int num = 3;
    int ans = do_factorial(num);
    printf("%d! = %d", num, ans);
}