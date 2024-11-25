#include <stdio.h>
#include <string.h>
int is_palindrome(char str[]) {
    int length = strlen(str); // strlen excludes '\0'
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            return 0;
        }
    }
    return 1;
}
int main(void) {
    char str[100];
    printf("Please enter a string: ");
    scanf("%s", str);
    if (is_palindrome(str)) {
        printf("Palindrome\n");
    } else {
        printf("Not a palindrome\n");
    }
    return 0;
}