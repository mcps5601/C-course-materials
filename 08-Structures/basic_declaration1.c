#include <stdio.h>
int main(void) {
    struct data
    {
        char name[50];
        float grade;
    };
    struct data student1;
    printf("Enter name: ");
    scanf("%s", student1.name);
    printf("Enter grade: ");
    scanf("%f", &student1.grade);
    printf("Name: %s\n", student1.name);
    printf("Grade: %f\n", student1.grade);
}