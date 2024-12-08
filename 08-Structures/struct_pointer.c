#include <stdio.h>
int main() {
    struct data {
        char name[50];
        float grade;
    } student1;

    struct data *ptr;
    ptr = &student1; // struct data *ptr = &student1;
    printf("Enter name: ");
    scanf("%s", student1.name);
    printf("Enter grade: ");
    scanf("%f", &student1.grade);
    printf("Name: %s\n", ptr->name);
    printf("Grade: %f\n", ptr->grade);
    printf("Name: %s\n", (*ptr).name);
    printf("Grade: %f\n", (*ptr).grade);
}