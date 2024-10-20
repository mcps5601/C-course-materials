#include <stdio.h>
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
    int month, leap_year = 1;
    scanf("%d", &month);
    int days = get_days(month, leap_year);
    if (days == -1)
        printf("Invalid month number.");
    else
        printf("Number of days in month %d is %d.", month, days);
    return 0;
}