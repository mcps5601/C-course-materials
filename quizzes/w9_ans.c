#include <stdio.h>
int swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int swap_all(int *a, int *b, int *c, int *d) {
    if (*a > *b) {
        swap(a, b);
    }
    if (*b > *c) {
        swap(b, c);
    }
    if (*c > *d) {
        swap(c, d);
    }
    if (*a > *b) {
        swap(a, b);
    }
    if (*b > *c) {
        swap(b, c);
    }
    if (*a > *b) {
        swap(a, b);
    }
}
int main(void) {
    int a = 99, b = 35, c = 34, d = 97;
    printf("Before: %d %d %d %d\n", a, b, c, d);
    swap_all(&a, &b, &c, &d);
    printf("After: %d %d %d %d\n", a, b, c, d);
}