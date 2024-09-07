#include <stdio.h>
int main() {
    int num;
    // while (1) {  // 這將進入無限迴圈
    for (;;) {      // 這也將進入無限迴圈
        printf("現在數字為: %d\n", num);
        num++;
    }
}