#include "libft.h"
#include "libft.h"
#include <stdio.h>
#include <ctype.h>  // For using isupper and islower functions

// Example transformation function: converts lowercase letters to uppercase
char to_uppercase(unsigned int index, char c) {
    return (c >= 'a' && c <= 'z') ? c - 32 : c; // Convert to uppercase
}

// Another transformation function: for testing odd/even index modification
char modify_odd_even(unsigned int index, char c) {
    if (index % 2 == 0) {
        return c; // Keep even indices the same
    } else {
        return (c >= 'a' && c <= 'z') ? c - 32 : c; // Convert to uppercase for odd indices
    }
}

int main() {
    char *result;

    // Test case 1: Basic usage with to_uppercase
    result = ft_strmapi("hello", to_uppercase);
    printf("Test 1: %s -> %s\n", "hello", result); // Expected: "HELLO"
    free(result); // Free the allocated memory

    // Test case 2: Applying odd/even modification
    result = ft_strmapi("abcdef", modify_odd_even);
    printf("Test 2: %s -> %s\n", "abcdef", result); // Expected: "AbCdEf"
    free(result); // Free the allocated memory

    // Test case 3: NULL string input
    result = ft_strmapi(NULL, to_uppercase);
    printf("Test 3: %s -> %s\n", "NULL", result); // Expected: ""
    free(result); // Free the allocated memory

    // Test case 4: NULL function pointer
    result = ft_strmapi("test", NULL);
    printf("Test 4: %s -> %s\n", "test", result); // Expected: "test"
    free(result); // Free the allocated memory

    // Test case 5: Empty string input
    result = ft_strmapi("", to_uppercase);
    printf("Test 5: %s -> %s\n", "", result); // Expected: ""
    free(result); // Free the allocated memory

    return 0;
}
