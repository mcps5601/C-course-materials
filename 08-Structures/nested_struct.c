#include <stdio.h>
int main(void) {
    struct date
    {
        int month;
        int day;
    };
    struct Student1
    {
        char name[50];
        float grade;
        struct date birthday;
    // };
    // struct Student1 student1 = {"John", 98.5, {12, 25}};
    } student1 = {"John", 98.5, {12, 25}};
    printf("Name: %s\n", student1.name);
    printf("Grade: %.1f\n", student1.grade);
    printf("Birthday: %d/%d\n", student1.birthday.month, student1.birthday.day);
}