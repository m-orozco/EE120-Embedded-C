#include <stdio.h>
#include <stddef.h>   // for NULL

// EE120 HW3 - Question 8
// Returns the memory address of the last instance of c in str.
// Returns NULL if c is not found in str.
char *strrchr(const char *str, int c) {
    const char *last = NULL;   // no match found yet

    while (*str != '\0') {
        if (*str == (char)c) {
            last = str;        // remember this match, keep scanning
        }
        str++;
    }

    return (char *)last;
}

int main(void) {
    char str[] = "Cortex-M";
    char *result = strrchr(str, 'C');

    if (result)
        printf("Found c at index %ldv: \"%s\"\n", (long)(result - str), result);
    else
        printf("Not found\n");

    return 0;
}