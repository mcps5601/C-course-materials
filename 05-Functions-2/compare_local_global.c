#include <stdio.h>
int globalVar = 100;

void do_print(void){
    printf("Global variable: %d\n", globalVar);
    // printf("Local variable: %d\n", localVar); // will cause an error
}
int main(void){
    int localVar = 0;
    printf("Global variable: %d\n", globalVar);
    do_print();
}