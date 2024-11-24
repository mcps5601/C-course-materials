#include <stdio.h>
int main(void){
    /*
    Hexadecimal values for 'H', 'e', 'l', 'l', 'o'
    */
    int nums[5] = {0x48, 0x65, 0x6C, 0x6C, 0x6F};
    char c;
    for (int i = 0; i < 5; i++){
        c = nums[i];
        printf("%c", c);
    }
}