#include "libft.h"
#include <stdio.h>

void test_substr(const char *s, unsigned int start, size_t len) {
    char *result = ft_substr(s, start, len);
    printf("ft_substr(\"%s\", %u, %zu) = \"%s\"\n", s, start, len, result ? result : "(null)");
    free(result); // Free allocated memory
}

int main() {
    // Test case 1: Basic substring extraction
    test_substr("Hello, World!", 7, 5); // Expected: "World"

    // Test case 2: Start index out of bounds
    test_substr("Hello, World!", 15, 5); // Expected: ""

    // Test case 3: Length exceeds remaining characters
    test_substr("Hello, World!", 0, 20); // Expected: "Hello, World!"

    // Test case 4: Extract from the beginning
    test_substr("Hello, World!", 0, 5); // Expected: "Hello"

    // Test case 5: Extract a single character
    test_substr("Hello, World!", 1, 1); // Expected: "e"

    // Test case 6: Extract empty string
    test_substr("Hello, World!", 5, 0); // Expected: ""

    // Test case 7: Entire string with start 0
    test_substr("Hello, World!", 0, 13); // Expected: "Hello, World!"

    // Test case 8: Extract from an empty string
    test_substr("", 0, 5); // Expected: ""

    return 0;
}
