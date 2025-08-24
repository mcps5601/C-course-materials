#include <stdio.h>
// print one to three recursively
void do_print(int max_n, int init_n){
    if (init_n <= max_n){
        do_print(max_n, init_n + 1);
        printf("%d\n", init_n);
    }
    return;
}
int main(void){
    do_print(3, 1);
    return 0;
}