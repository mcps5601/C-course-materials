#include <stdio.h>
int main() {
    int a = 10;         // 宣告變數a並賦值
    int *p = &a;        // 宣告指標p並將指標p指向a的記憶體地址
    printf("a的值: %d\n", a);
    printf("a的記憶體地址: %p\n", p);  // 輸出a的記憶體地址
    printf("通過指標p訪問a的值: %d\n", *p);  // 使用指標存取a的值
}
/*Python
a = 10  # 宣告變數a並賦值
print("a的值:", a)
*/