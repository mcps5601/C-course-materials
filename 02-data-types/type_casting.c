#include <stdio.h>
int main() {
    int i = 10;
    float f = 3.14;
    int result;

    result = i + (int)f;
    printf("Result: %d\n", result);
    printf("Result float: %f\n", (float)result);
}