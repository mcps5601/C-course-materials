#include <stdio.h>
void swap(int *p1, int *p2){
    int temp = *p1;
    printf("%p", &temp);
    *p1 = *p2;
    *p2 = temp;
}
int main(void){
    int a = 5, b = 10;
    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After swap: a = %d, b = %d\n", a, b);
}