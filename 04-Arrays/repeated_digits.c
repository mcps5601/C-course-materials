#include <stdio.h>
int main() {
    int digit_seen[10] = {0};
    int digit, number;
    scanf("%d", &number);

    // Process each digit of the number
    while (number > 0) {
        digit = number % 10; // Extract the last digit
        if (digit_seen[digit] == 1) {
            printf("Repeated digit\n");
            break;
        }
        else
            digit_seen[digit] = 1; // Mark the digit as seen
        number /= 10; // Remove the last digit from the number
    }
    if (number == 0)
        // If no repeated digit is found
        printf("No repeated digit\n");
}