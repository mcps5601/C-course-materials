# Is Subsequence With Spaces
## Task Description:
Write a program that takes two lines of inputs and determines if the string s is a subsequence of string t. The task rules are listed below:
- The first line of input contains a string s, while the second line of input contains a string t.
- The number of characters in s is less than or equal to the number of characters in t.
- Both s and t may contain random characters.
- Length: 1 ≤ |s| ≤ |t| ≤ 1000
- Only lowercase letters are included in s and t.

## Your program must:
- Return 1 if s is a valid subsequence of t under these conditions, otherwise return 0.
- There won't be white spaces in s or t.
- You don't need to handle the case where s is an empty string (not in the test cases).

### Hint:
Ignore all non-space characters in t that do not contribute to the sequential order of characters in s.

## Example Input and Output:
### Example 1 (correct):
- Input:
```
longamp
longexampleCprogramming
```
- Output:
```
1
```
- Explanation:
    - The sequence of non-space characters matches.
### Example 2 (wrong):
- Input:
```
longmap
longexampleCprogramming
```
- Output:
```
0
```
- Explanation:
    - The sequence of non-space characters does not match.

### Example 3 (wrong):
- Input:
```
longaamp
longexampleCprogramming
```
- Output:
```
0
```
- Explanation:
    - There are repeated characters in s, but they are not in the same order in t.

### Example 4 (correct):
- Input:
```
longamping
longexampleCprogrammmmming
```
- Output:
```
1
```
- Explanation:
    - It does not matter if there are extra repeated characters in t as long as the sequence of characters in s can show up in t in the same order.

## Scoring (Total 100):
- Code correctness: 60%
- Report: 40%
    - Clear comments in the code explaining key logic.
    - A summary of how the problem was solved, including key decisions or challenges encountered.

## Submission:
Upload your code and report as a zip file (`student_id_name_hw4.zip`) containing the following files:
- code: `student_id_name_hw4.c`
- report: `student_id_name_hw4.pdf` (.md, .docx are also acceptable)
- **Example filenames**: `1234567890_林英嘉_hw4.zip`
    - `1234567890_林英嘉_hw4.c`
    - `1234567890_林英嘉_hw4.pdf`