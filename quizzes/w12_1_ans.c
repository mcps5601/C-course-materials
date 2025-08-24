#include <stdio.h>

int main(void){
    char str1[100], str2[100];
    char prefix[100];
    int i = 0;
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);

    while (str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0'){
        prefix[i] = str1[i];
        i++;
    }
}