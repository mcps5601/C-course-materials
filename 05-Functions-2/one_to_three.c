#include <stdio.h>
// print one to three recursively
int do_print(int n){
    if (n == 0){
        return 0;
    }
    do_print(n - 1);
    printf("%d\n", n);
    return 0;
}
int main(void){
    do_print(3);
    return 0;
}