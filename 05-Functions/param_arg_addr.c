#include <stdio.h>

void increment_and_print(int func_num){
    printf("func_num address before ++: %p\n", &func_num);
    func_num++;
    printf("func_num address after ++: %p\n", &func_num);
    return;
}
int main(void){
    int input_num = 10;
    printf("input_num address before calling: %p\n", &input_num);
    increment_and_print(input_num);
    printf("input_num address after calling: %p\n", &input_num);
    return 0;
}