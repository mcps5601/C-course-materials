#include <stdio.h>
int main(){
    int int_a;
    // 用 %d 接收 sizeof() 的返回值會出現警告，因為 sizeof() 回傳的是 size_t 型態 (unsigned long int)
    printf("Size of int: %d\n", sizeof(int_a));
    float float_a;
    printf("Size of float: %d\n", sizeof(float_a));
    char char_a;
    printf("Size of char: %d\n", sizeof(char_a));
    double double_a;
    printf("Size of double: %d\n", sizeof(double_a));
}