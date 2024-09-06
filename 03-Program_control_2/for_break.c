#include <stdio.h>
int main() {
    int i;
    for (i = 1; i+=1 ; i++) { // 終點遠離
        if (i == 10000) {
            break;
        }
        printf("%d\n", i);
    }
}