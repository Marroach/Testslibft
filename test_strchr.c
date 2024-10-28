#include "libft.h"
#include <stdio.h>
#include <string.h>

void test_ft_strchr(const char *str, int ch) {
    char *result = ft_strchr(str, ch);
    char *expected = strchr(str, ch);

    if (result == expected) {
        printf("Test passed for input ('%s', '%c')\n", str, ch);
    } else {
        printf("Test failed for input ('%s', '%c')\n", str, ch);
        printf("Expected: %p, Result: %p\n", (void *)expected, (void *)result);
    }
}

int main() {
    // Tests for ft_strchr
    test_ft_strchr("Hello, world!", 'w');        // Normal case: character found
    test_ft_strchr("Hello, world!", 'z');        // Character not found
    test_ft_strchr("Hello, world!", '\0');       // Searching for null terminator
    test_ft_strchr("Another example", 'e');      // Character appears multiple times
    test_ft_strchr("SingleChar", 'S');           // First character in the string
    test_ft_strchr("EndsWithE", 'E');            // Last character in the string
    test_ft_strchr("", 'a');                     // Empty string case
    test_ft_strchr("12345", '5');                // Character found at the end

    return 0;
}