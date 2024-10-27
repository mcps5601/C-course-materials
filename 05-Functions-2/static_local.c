#include <stdio.h>
int add(int a, int b){
    static int sum = 0;
    sum += (a + b);
    return sum;
}
int main(void){
    int num_a = 5;
    int num_b = 6;
    int result;
    for (int i = 0; i < 5; i++){
        result = add(num_a, num_b);
        printf("Sum: %d\n", result);
    }
}