#include <stdio.h>
int main() {
    int i = 5;
    
    // 不進行強制轉型
    float result1 = i / 2;    
    // 進行強制轉型
    float result2 = (float)i / 2;
    
    printf("不進行強制轉型的結果: %f\n", result1);
    printf("進行強制轉型的結果: %f\n", result2);
}