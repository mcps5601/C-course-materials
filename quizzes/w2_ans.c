#include <stdio.h>
int main(){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int total;
    float average;

    printf("小明的成績單\n");
    printf("國文: %5d\n", a);
    printf("英文: %5d\n", b);
    printf("數學: %5d\n", c);

    total = a + b + c;
    average = total / 3.0;
    average = total / 5.0;
    printf("總分: %5d\n", total);
    printf("平均: %.2f\n", average);

    if (average >= 90)
        printf("Grade: A\n");
    if (average >= 80 && average < 90)
        printf("Grade: B\n");
    if (average >= 70 && average < 80)
        printf("Grade: C\n");
    if (average >= 60 && average < 70)
        printf("Grade: D\n");
    if (average < 60)
        printf("Grade: F\n");
}