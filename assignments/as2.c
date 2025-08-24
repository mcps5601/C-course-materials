#include <stdio.h>

// Function to add two large integers represented as arrays of digits
void add(int num1[], int num2[], int result[]) {
    int carry = 0;
    for (int i = 10 - 1; i >= 0; i--) {
        int sum = num1[i] + num2[i] + carry;
        result[i] = sum % 10;  // Store the unit digit
        carry = sum / 10;      // Carry over the tens digit
    }
}

// Function to subtract two large integers represented as arrays of digits
void sub(int num1[], int num2[], int result[]) {
    int borrow = 0;
    for (int i = 10 - 1; i >= 0; i--) {
        int diff = num1[i] - num2[i] - borrow;
        if (diff < 0) {
            diff += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }
        result[i] = diff;
    }
}

// Function to print the result, skipping leading zeros
void print_result(int result[]) {
    int leading_zero = 1;  // Flag to skip leading zeros
    for (int i = 0; i < 10; i++) {
        if (result[i] != 0 || !leading_zero) {
            printf("%d", result[i]);
            leading_zero = 0;
        }
    }
    if (leading_zero) {
        printf("0");  // If all digits are zero, print a single zero
    }
    printf("\n");
}

int main() {
    int op_code;
    int num1[10] = {0};  // Array to store first large integer
    int num2[10] = {0};  // Array to store second large integer
    int result[10] = {0};  // Array to store result

    // Input the operation code (0 for addition, 1 for subtraction)
    scanf("%d", &op_code);

    // Input first large integer digit by digit
    for (int i = 0; i < 10; i++) {
        scanf("%1d", &num1[i]);
    }

    // Input second large integer digit by digit
    for (int i = 0; i < 10; i++) {
        scanf("%1d", &num2[i]);
    }

    // Perform the operation based on the op_code
    if (op_code == 0) {
        add(num1, num2, result);  // Perform addition
    } else if (op_code == 1) {
        sub(num1, num2, result);  // Perform subtraction
    }

    // Output the result
    print_result(result);

    return 0;
}