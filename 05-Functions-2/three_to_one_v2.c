#include <stdio.h>
// print one to three recursively
void do_print(int min_n, int init_n){
    if (init_n > min_n){
        printf("%d\n", init_n);
        do_print(min_n, init_n - 1);
    }
    return;
}
int main(void){
    do_print(0, 3);
    return 0;
}