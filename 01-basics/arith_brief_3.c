#include <stdio.h>
int main(){
    int a = 20, b = 5;
    a++; // a = a + 1;
    printf("%d\n", a);
    a /= --b;  // 先將b減1，再用b的值進行運算
    printf("a值為%d\n", a);
    printf("b值為%d\n", b);
}