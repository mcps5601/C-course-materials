#include <stdio.h>
void do_print(void){
    printf("Hello, World!\n");
    do_print();
}
int main(void){
    do_print();
    return 0;
}