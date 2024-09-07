#include <stdio.h>
int main(){
    int a, b, temp;
    scanf("%d %d", &a, &b);
    while (b != 0) {
        temp = a % b;
        a = b;
        b = temp;
    }
    printf("最大公因數為%d", a);
}