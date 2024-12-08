#include <stdio.h>
struct Student {
    char name[50];
    float grade;
};
int main() {
    struct Student students[10] = {
        {"John", 98.5},
        {"Alice", 87.0},
        {"Bob", 92.3},
        {"Mary", 76.4}
    };
    int studentCount = sizeof(students) / sizeof(students[0]);
    printf("學生名單：\n");
    for (int i = 0; i < studentCount; i++) {
        // break when no students
        if (students[i].name[0] == '\0') {
            break;
        }
        printf("姓名: %s, 成績: %.1f\n", students[i].name, students[i].grade);
    }
}