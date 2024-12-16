#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Copy a string using dynamic allocation
char *copy_string_dynamic(const char *source) {
    char *new_string = (char *)malloc((strlen(source) + 1) * sizeof(char));
    strcpy(new_string, source);
    return new_string;
}
void copy_string_static(char *destination, const char *source, size_t size) {
    if (strlen(source) + 1 > size) {
        printf("Error! Destination is too small.\n");
        return;
    }
    strcpy(destination, source);
}

int main() {
    const char *original = "Hello, World!";

    // static allocation
    char static_buffer[20];
    copy_string_static(static_buffer, original, sizeof(static_buffer));
    printf("%s\n", static_buffer);

    // dynamic allocation
    char *dynamic_copy_ptr;
    dynamic_copy_ptr = copy_string_dynamic(original);
    printf("Result with malloc: %s\n", dynamic_copy_ptr);
}