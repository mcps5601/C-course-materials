#include <stdio.h>
int main(){
    int a = 5, b = 5, c = 1;
    printf("%d\n", a == b == c);
    printf("%d\n", a == b);
    printf("%d", a == b && b == c);
}