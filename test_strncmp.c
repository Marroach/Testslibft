#include "libft.h"
#include <stdio.h>
#include <string.h> // For standard strncmp comparison

int main() {
    char *s1;
    char *s2;

    // Test case 1: Basic comparison with equal strings
    s1 = "hello";
    s2 = "hello";
    printf("Test 1: ft_strncmp(\"%s\", \"%s\", 5) = %d (Expected: 0)\n", s1, s2, ft_strncmp(s1, s2, 5));

    // Test case 2: Comparison with different strings
    s1 = "hello";
    s2 = "helli";
    printf("Test 2: ft_strncmp(\"%s\", \"%s\", 5) = %d (Expected: > 0)\n", s1, s2, ft_strncmp(s1, s2, 5));

    // Test case 3: Comparison with the first string being shorter
    s1 = "abc";
    s2 = "abcd";
    printf("Test 3: ft_strncmp(\"%s\", \"%s\", 4) = %d (Expected: < 0)\n", s1, s2, ft_strncmp(s1, s2, 4));

    // Test case 4: Comparison with the second string being shorter
    s1 = "abcd";
    s2 = "abc";
    printf("Test 4: ft_strncmp(\"%s\", \"%s\", 4) = %d (Expected: > 0)\n", s1, s2, ft_strncmp(s1, s2, 4));

    // Test case 5: Comparison with n = 0 (should return 0)
    s1 = "hello";
    s2 = "world";
    printf("Test 5: ft_strncmp(\"%s\", \"%s\", 0) = %d (Expected: 0)\n", s1, s2, ft_strncmp(s1, s2, 0));

    // Test case 6: Comparison of strings where one is empty
    s1 = "";
    s2 = "hello";
    printf("Test 6: ft_strncmp(\"%s\", \"%s\", 5) = %d (Expected: < 0)\n", s1, s2, ft_strncmp(s1, s2, 5));

    // Test case 7: Comparison of two empty strings
    s1 = "";
    s2 = "";
    printf("Test 7: ft_strncmp(\"%s\", \"%s\", 5) = %d (Expected: 0)\n", s1, s2, ft_strncmp(s1, s2, 5));

    return 0;
}
