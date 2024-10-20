#include <stdio.h>
int is_leap_year(int year){
    int is_leap = ((year%400==0)||(year%4==0 && year%100!=0))? 1: 0;
    return is_leap;
}
int get_days(int month, int leap_year){
    if (month < 1 || month > 12)
        return -1;
    else{
        if (month == 2){
            if (leap_year == 1)
                return 29;
            else
                return 28;
        }
        else if (month == 4 || month == 6 || month == 9 || month == 11)
            return 30;
        else
            return 31;
    }
}
int main(){
    int month, leap_year;
    int year = 2024;
    scanf("%d", &month);
    leap_year = is_leap_year(year);
    printf("%d is a leap year: %d\n", year, leap_year);
    int days = get_days(month, leap_year);
    if (days == -1)
        printf("Invalid month number.");
    else
        printf("Number of days in month %d is %d.", month, days);
    return 0;
}