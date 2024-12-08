#include <stdio.h>
int main() {
    struct Student {
        char name[50];
        float grade;
    };
    struct Student students[10];
    printf("%d\n", sizeof(students));
    printf("%d\n", sizeof(students[0]));
}