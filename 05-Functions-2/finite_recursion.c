#include <stdio.h>
void do_print(int i){   
    if (i < 3){
        printf("Hello, World!\n");
        do_print(i + 1);
    }
}
int main(void){
    int i = 0;
    do_print(i);
    return 0;
}