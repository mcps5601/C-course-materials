#include <stdio.h>
#include <string.h>

int main(void){
    int len;
    len = strlen("abc"); /* len is now 3 */
    printf("%d\n", len);
    len = strlen(""); /* len is now 0 */
    printf("%d\n", len);

    char a_string[] = "Hello";
    printf("%d\n", strlen(a_string)); // 5
    printf("%d\n", sizeof(a_string)); // 6 (include \0)
}