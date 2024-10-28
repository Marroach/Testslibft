#include "libft.h"
#include <stdio.h>

void test_strtrim(const char *s1, const char *set) {
    char *result = ft_strtrim(s1, set);
    printf("ft_strtrim(\"%s\", \"%s\") = \"%s\"\n", s1, set, result);
    free(result); // Free allocated memory
}

int main() {
    // Test case 1: Normal trim
    test_strtrim("   Hello, World!   ", " ");
    
    // Test case 2: Trim specific characters
    test_strtrim("##Hello, World!##", "#");

    // Test case 3: No characters to trim
    test_strtrim("Hello, World!", " ");

    // Test case 4: All characters to trim
    test_strtrim("###", "#");

    // Test case 5: Empty string
    test_strtrim("", "#");

    // Test case 6: Trim with multiple characters
    test_strtrim("**Hello, World!**", "* ");

    // Test case 7: Set of characters to trim
    test_strtrim("!!!Hello!!!", "!");

    return 0;
}
