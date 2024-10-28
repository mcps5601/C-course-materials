#include <stdio.h>
add(float a, float b){
    return a + b;
}
int main(void){
    int sum;
    sum = add(5.5, 6.1);
    printf("Sum: %d", sum);
    return 0;
}