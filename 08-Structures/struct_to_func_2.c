#include <stdio.h>
#include <string.h>
struct data {
    char name[50];
    float grade;
};
// Function to modify student details (pass by reference)
void modifyStudent(struct data *s) {
    // incorrect: s->name = "Daniel";
    strcpy(s->name, "Daniel"); // Assign a new name
    s->grade = 90.5; // Assign a new grade
    printf("Student Details Modified (By Reference):\n");
    printf("Name: %s\n", s->name);
    printf("New Grade: %.1f\n", s->grade);
}
int main(void){
    struct data student1 = {"John", 98.5};
    modifyStudent(&student1);
}