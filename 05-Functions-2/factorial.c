#include <stdio.h>
int do_factorial(int n){
    if (n == 0){
        return 1;
    }
    return n * do_factorial(n - 1);
}
int do_factorial(){
    printf("Hello, World!\n");
}
int main(void){
    int num = 3;
    int ans = do_factorial(num);
    printf("%d! = %d", num, ans);
    return 0;
}