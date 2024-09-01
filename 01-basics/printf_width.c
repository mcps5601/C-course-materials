#include <stdio.h>
int main() {
    int target = 95;
    printf("|%-6d|\n", target); // 總共寬度為6個字元
    printf("| %-5d|\n", target); // 前有1個空格
    printf("|  %-4d|\n", target); // 前有2個空格
    printf("|   %-3d|\n", target); // 前有3個空格
    printf("|    %-2d|\n", target); // 前有4個空格
    printf("|%6d|\n", target); // 總共寬度為6個字元
}