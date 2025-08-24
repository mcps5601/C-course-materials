#include <stdio.h>
int main() {
    struct Student {
        char name;
        double grade;
    };
    struct Student students[10];
    printf("%d\n", sizeof(students));
    printf("%d\n", sizeof(students[0].name));
}