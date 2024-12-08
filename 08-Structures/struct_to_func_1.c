#include <stdio.h>
struct data {
    char name[50];
    float grade;
};
// Function to display a student's info
void displayStudent(struct data s) {
    printf("Student's info (By Value):\n");
    printf("Student name: %s\n", s.name);
    printf("Student grade: %.1f\n", s.grade);
}
int main(void){
    struct data student1 = {"John", 98.5};
    displayStudent(student1);
}