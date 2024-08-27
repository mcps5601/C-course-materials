#include <stdio.h>
int main(){
    int a, b, c;
    scanf("%d %d", &a, &b);
    printf("a是否等於b: %d\n", a == b);
    c = a != b;
    printf("c的值為%d\n", c);
}