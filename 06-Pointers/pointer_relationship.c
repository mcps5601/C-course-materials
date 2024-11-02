#include <stdio.h>
int main(void){
    int *iptr; // Declaration of a pointer
    int i = 10;
    iptr = &i; // Assigning the address of i to the pointer
    printf("%d\n", *iptr); // 取得指標所指向的值
    printf("變數i的位址：%p\n", &i);
    printf("指標指向的位址：%p\n", iptr);
    printf("指標本身的位址：%p\n", &iptr);
}
