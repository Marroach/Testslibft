#include "libft.h"
#include <stdio.h>

void test_toupper(int c) {
    int result = ft_toupper(c);
    printf("ft_toupper('%c') = '%c'\n", c, result);
}

void test_tolower(int c) {
    int result = ft_tolower(c);
    printf("ft_tolower('%c') = '%c'\n", c, result);
}

int main() {
    // Test cases for ft_toupper
    test_toupper('a'); // Expected: 'A'
    test_toupper('z'); // Expected: 'Z'
    test_toupper('A'); // Expected: 'A' (already uppercase)
    test_toupper('Z'); // Expected: 'Z' (already uppercase)
    test_toupper('1'); // Expected: '1' (non-alphabetic)
    test_toupper('!'); // Expected: '!' (non-alphabetic)
    test_toupper(' '); // Expected: ' ' (space)

    // Test cases for ft_tolower
    test_tolower('A'); // Expected: 'a'
    test_tolower('Z'); // Expected: 'z'
    test_tolower('a'); // Expected: 'a' (already lowercase)
    test_tolower('z'); // Expected: 'z' (already lowercase)
    test_tolower('1'); // Expected: '1' (non-alphabetic)
    test_tolower('!'); // Expected: '!' (non-alphabetic)
    test_tolower(' '); // Expected: ' ' (space)

    return 0;
}
