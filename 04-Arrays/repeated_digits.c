#include <stdio.h>
int main() {
    int digit_seen[10] = {0};
    int input_number, digit;
    scanf("%d", &input_number);

    while (input_number > 0) {
        digit = input_number % 10; // Extract the last digit
        if (digit_seen[digit] == 1) {
            printf("Repeated digit found!!");
            break;
        }
        else
            digit_seen[digit] = 1; // Mark the digit as seen
        input_number /= 10; // Remove the last digit from the input number
    }
    if (input_number == 0)
        printf("No repeated digit!!");
}