#include <stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("a + b 等於 %d\n", a + b);
    printf("a - b 等於 %d\n", a - b);
    printf("a * b 等於 %d\n", a * b);
    printf("a / b 等於 %d\n", a / b);
    printf("a %% b 等於 %d\n", a % b);
    printf("把 a 取負數：%d", -a);
}