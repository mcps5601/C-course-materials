#include <stdio.h>
#include <stdlib.h>
struct s {
    int i;
};
int main(void){
    struct s *p1 = malloc(sizeof(struct s));
    p1->i = 42;
    printf("(p1) before free: p->i = %d\n", p1->i);

    free(p1);
    struct s *p2 = malloc(sizeof(struct s));
    p2->i = 100;
    // Trying to use the dangling pointer p1
    printf("(p1) after free: p->i = %d\n", p1->i);
    printf("(p2): p2->i = %d\n", p2->i);
}