#include <stdio.h>
int main(void){
    char a_string[] = "Sweet home";
    char *ptr1 = a_string;
    char *ptr2 = "Sweet home";
    *(ptr1+6) = 'd';
    *(ptr2+6) = 'd'; // This line causes an error!
    for (int i = 0; i < 10; i++){
        printf("%c", ptr1[i]);
    }
}