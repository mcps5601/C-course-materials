#include <stdio.h>
int main(void){
    char strings[3][10];
    int count = 0;
    while (scanf("%s", strings[count]) != EOF){
        printf("%s is read to the array.\n", strings[count]);
        count++;
    }
    // strings[0] = "Tom";
    // strings[1] = "Lily";
    // strings[2] = "James Lee";
    for (int i = 0; i < count; i++){
        printf("strings[%d]: %s\n", i, strings[i]);
    }
}