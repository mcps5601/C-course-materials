#include <stdio.h>
int* fun(){
    int x = 10;
    return &x;
}
int main(void){
    int *ptr = fun();
    printf("%d\n", *ptr);
    return 0;
}