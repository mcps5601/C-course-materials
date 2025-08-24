#include <stdio.h>
// Input: s = "abc", t = "ahbgdc"
// Output: true
int isSubsequence(char* s, char* t) {
    while (*t) {
        if (*s == *t) {
            s++;
        }
        t++;
    }
    return !*s;
}
int main(void) {
    char s[] = "longamping";
    char t[] = "longexampleCprogrammmmming";
    printf("%d\n", isSubsequence(s, t));
    return 0;
}