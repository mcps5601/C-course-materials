#include <stdio.h>
int main(){
    int a = 2, b = 1;
    a += b;
    printf("%d\n", a);
    a -= b;
    printf("%d\n", a);
    a *= b;
    printf("%d\n", a);
    a /= b;
    printf("%d\n", a);
    a %= b;
    printf("%d\n", a);
    a++;
    printf("%d\n", a);
    a/=b--;
    printf("%d\n", a);
}