# Merging Binary Files and Sorting

## Task Description:
Given two binary files, `file1.bin` and `file2.bin`, write a program that merges the two files and sorts the contents in an ascending order. You can check the content of `file1.bin` and `file2.bin` via:
```c
#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main(void) {
    const char *filename1 = "file1.bin";
    const char *filename2 = "file2.bin";

    int numbers1[MAX];
    int numbers2[MAX];
    int size1, size2;

    // read files to the arrays
    FILE *readFile1 = fopen(filename1, "rb");
    FILE *readFile2 = fopen(filename2, "rb");
    size1 = fread(numbers1, sizeof(int), MAX, readFile1);
    size2 = fread(numbers2, sizeof(int), MAX, readFile2);
    for (int i = 0; i < size1; i++) {
        printf("%d ", numbers1[i]);
    }
    printf("\n");
    for (int i = 0; i < size2; i++) {
        printf("%d ", numbers2[i]);
    }
}
```
After running the code above, you will see the content of `file1.bin` and `file2.bin` in the console.
```
90 70 30 100 50 
60 20 80 10 40
```
As we can see, both `file1.bin` and `file2.bin` contain 5 integers.
Therefore, your task is to:
1. Merge these integers
2. Sort them in an ascending order
3. Write the sorted integers to **a new binary file**, `sorted_output.bin`.

## Expected output of this assignment:
```
10 20 30 40 50 60 70 80 90 100
```
This output should be written to a new binary file, `sorted_output.bin`, which you need to create in your code.

## Requirements:
1. The program should read the content of `file1.bin` and `file2.bin`.
2. The program should merge the integers from `file1.bin` and `file2.bin`.
3. The program should contain a function to sort the integers in an ascending order.
4. The program should write the sorted integers to a new binary file, `sorted_output.bin`.
5. The program should check if the files are opened successfully.
6. The program should contain lines for closing the files.

## Scoring (Total 100):
- Code correctness: 60%
- Report: 40%
    - Clear comments in the code explaining key logic.
    - A summary of how the problem was solved, including key decisions or challenges encountered.

## Submission:
Upload your code and report as a zip file (`student_id_hw5.zip`) containing the following **three** files:
- code: `student_id_hw5.c`
- sorted_binary_file: `student_id_sorted_output.bin`
- report: `student_id_hw5.pdf` (.md, .docx are also acceptable)
- **Example filenames**: `1234567890_hw5.zip`
    - `1234567890_hw5.c`
    - `1234567890_sorted_output.bin`
    - `1234567890_hw5.pdf`