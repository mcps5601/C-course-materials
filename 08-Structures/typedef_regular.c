#include <stdio.h>
typedef char new_type[50];

int main(void) {
    char string_a[50] = "Hello World!";
    new_type string_b = "Hello World!";
    printf("String A: %s\n", string_a);
    printf("String B: %s\n", string_b);
    printf("Size of string_b: %d\n", sizeof(string_b));
}