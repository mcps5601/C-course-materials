# Find intersection of two 1D arrays
## Task Description:
Write a C program that accepts two one-dimensional integer arrays and finds the intersection of the two arrays along with the number of occurrence of each element.

The intersection of two arrays is a new array that contains the common elements of the two arrays. The intersection array should contain the common elements of the two arrays along with the number of occurrence of each element. If there are no common elements between the two arrays, the program should output -1. Values of an element in an array only range from 0 to 9.

## Input format:
The program should accept inputs in the following format:
1. The first line contains an integer n (1 ≤ n ≤ 10) representing the number of elements in the first array.
2. The second line contains n integers separated by a space representing the elements of the first array.
3. The third line contains an integer m (1 ≤ m ≤ 10) representing the number of elements in the second array.
4. The fourth line contains m integers separated by a space representing the elements of the second array.

## Output format:
The program should output the elements of the intersection array with their mutual occurrences. You should use parantheses to show the number of occurrence of each element. Please note that "mutual occurrences" means the minimum number of occurrences in both arrays.

## Example Input and Output:
### Example 1:
- Input:
```
5
1 1 1 1 1
3
1 2 3
```
- Output:
```
1 (1)
```
### Example 2:
- Input:
```
10
5 7 7 8 1 8 5 8 7 8
6
5 7 7 8 8 8
```
- Output:
```
5 (1) 7 (2) 8 (3)
```
### Example 3:
- Input:
```
9
1 2 3 4 5 6 7 8 9
5
0 0 0 0 0
```
- Output:
```
-1
```

## Requirements:
1. You should write a function named `find_intersection_with_count` that takes two arrays and their sizes as input and returns the intersection array. The prototype of the function can be the following but not limited to:
```c
int find_intersection_with_count(int *arr1, int n1, int *arr2, int n2, int *result, int *count);
// result: the intersection array
// count: an array to store the mutual occurrence of each element
```
2. You should use pointer arithmetic to access the elements of the arrays.
3. The order in the output should be the same as the order in the first array.
4. You should not use any built-in functions or libraries from C.
5. Upload your code and report as a zip file (`student_id_name_hw3.zip`) containing the following files:
    - code: `student_id_name_hw3.c`
    - report: `student_id_name_hw3.pdf` (.md, .docx are also acceptable)
    - **Example filenames**: `1234567890_林英嘉_hw3.zip`
        - `1234567890_林英嘉_hw3.c`
        - `1234567890_林英嘉_hw3.pdf`

## Scoring (Total 105):
- Correctness of intersection: 35%
- Correctness of mutal occurrences: 35%
- Report: 30%
- Bonus: 5% (Also print the result sorted by the mutual occurrences in a descending order)

### Example Bonus Output:
- Input:
```
10
5 7 7 8 1 8 5 8 7 8
6
5 7 7 8 8 8
```
- Output:
```
5 (1) 7 (2) 8 (3)
8 (3) 7 (2) 5 (1)
```

## Punishment:
- Not using pointer arithmetic: -10%
- Usage of built-in functions or libraries from C: -50%
- Not following the filename requirement: -20%