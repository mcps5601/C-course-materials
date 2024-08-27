#include <stdio.h>
int main(){
    int a = 2, b = 1;
    a++; // a = a + 1;
    printf("%d\n", a);
    a/=b--;  // 先用b的值進行運算，再將b減1
    printf("a值為%d\n", a);
    printf("b值為%d\n", b);
}