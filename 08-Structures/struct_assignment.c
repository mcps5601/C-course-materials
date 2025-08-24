#include <stdio.h>
int main(void) {
    struct data
    {
        char name[50];
        float grade;
    } student1 = {"John", 98.5};
    struct data2
    {
        char name1[50];
        float grade;
    };
    struct data2 student2;
    student2 = student1;
    printf("Name: %s\n", student1.name);
    printf("Grade: %f\n", student1.grade);
    printf("Name: %s\n", student2.name1);
    printf("Grade: %f\n", student2.grade);
}