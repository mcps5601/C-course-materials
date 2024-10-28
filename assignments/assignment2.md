# Assignment2: Addition and Subtraction for Large Integers
## Description
Please write a program that can take three integers as input and perform the addition or subtraction of two large integers. The first integer is the operation code, which is 0 for addition and 1 for subtraction. The second and third integers are the operands. The second and third inputs are large integers, each of which has 10 digits (values between 1,111,111,111 and 9,999,999,999).

## Requirements
- Use scanf("%1d") to read each digit of the large integers and store these digits in arrays.
- Write two functions, `add` and `sub`, to manually perform addition and subtraction given arrays. For `sub`, the function should perform the subtraction of the second integer from the first integer.
- In your functions, you should handle carries and borrows for the addition and subtraction of large integers.
- Upload your code and report as a zip file (`student_id_name_hw2.zip`) containing the following files:
    - code: `student_id_name_hw2.c`
    - report: `student_id_name_hw2.pdf` (.md, .docx are also acceptable)
    - **Example filenames**: `1234567890_林英嘉_hw2.zip`
        - `1234567890_林英嘉_hw2.c`
        - `1234567890_林英嘉_hw2.pdf`

## Input Format
1. The first input is an integer (0 for addition, 1 for subtraction).
2. The second and third inputs are large integers with 10 digits.

## Example input code snippet
```c
int num1[10], num2[10];
for (int i = 0; i < 10; i++) {
    scanf("%1d", &num1[i]);
}
```

## Expected Output
### Addition
- Input
```
0 1234567891 1234567890
```
- Output
```
2469135781
```
### Subtraction
- Input
```
1 9876543210 1234567890
```
- Output
```
8641975320
```

## Notes
- The output will always be a positive integer with 10 digits.
- Using strings to store large integers is not necessary for this assignment.
- For the test cases of `sub`, the second integer is always larger than the third integer.

## Scoring (Total 100)
- Correctness of Addition: 35%
- Correctness of Subtraction: 35%
- Report: 30%

## Punishment
- Not using arrays to store digits: -50%
- Not following the filename requirement: -20%