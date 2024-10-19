/*
描述： 撰寫程式來生成並打印一個 4×4 的螺旋矩陣。螺旋矩陣是指從左上角開始填入數字1，沿著螺旋路徑填滿整個矩陣。

Description: Write a program to generate and print a 4×4 spiral matrix.
A spiral matrix starts by filling in the number 1 at the top-left corner, and continues filling in numbers along a spiral path until the entire matrix is filled.

Output：
 1  2  3  4 
12 13 14  5 
11 16 15  6 
10  9  8  7
*/


#include <stdio.h>
int main(){
    int N = 4;
    int num = 1;
    int arr[4][4];
    int top = 0, bottom = N - 1, left = 0, right = N - 1;

    while (top <= bottom && left <= right) {
        // filling from left to right
        // Write your code here
        top++;

        // filling from top to bottom
        // Write your code here
        right--;

        // filling from right to left
        if (top <= bottom) {
            // Write your code here
        }

        // filling from bottom to top
        if (left <= right) {
            // Write your code here
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%2d ", arr[i][j]);
        }
        printf("\n");
    }
}
