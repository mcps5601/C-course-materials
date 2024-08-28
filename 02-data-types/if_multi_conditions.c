#include <stdio.h>
int main(){
    int a = 5;
    int b = 10;
    if ((a < b) && (a >= 0))
        printf("a < b\n");
        printf("a >= 0\n");
    if ((a < b) || (b > 10))
        printf("Or 成立\n");
}