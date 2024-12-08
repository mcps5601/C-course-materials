#include <stdio.h>
int main(void) {
    struct Data
    {
        char name[50];
        float grade;
    };
    struct Data student1 = {"John", 98.5};
    struct Data student2 = {"Mary", 100.0};
    printf("Name: %s\n", student1.name);
    printf("Grade: %f\n", student1.grade);
    printf("Name: %s\n", student2.name);
    printf("Grade: %f\n", student2.grade);
}