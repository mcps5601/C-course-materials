#include <stdio.h>
int main(void){
    int nums[5] = {72, 101, 108, 108, 111};
    char c;
    for (int i = 0; i < 5; i++){
        c = nums[i];
        printf("%c", c);
    }
}