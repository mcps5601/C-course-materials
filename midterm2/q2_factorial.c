/*
https://github.com/mcps5601/C-course-materials/blob/main/05-Functions-2/factorial.c
*/

#include <stdio.h>
int do_factorial(int n){
    if (n == 0){
        return 1;
    }
    return n * do_factorial(n - 1);
}
int main(void){
    int num = 3;
    int ans = do_factorial(num);
    printf("%d! = %d", num, ans);
    return 0;
}