#include <stdio.h>
int main(){
    int a = 1, b = 2, c = 3, d;
    d = (a > b) && (b <= c);
    printf("d的值為%d\n", d);
    d = (a > b) || (b < c);
    printf("d的值為%d\n", d);
}