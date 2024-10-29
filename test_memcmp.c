#include <stdio.h>
#include "libft.h"
#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n);

int main() {
    // Test cases
    const char *str1 = "Hello, World!";
    const char *str2 = "Hello, World!";
    const char *str3 = "Hello, Earth!";
    const char *str4 = "Hello, Wxrld!";
    
    // Test case 1: identical strings
    int result1 = ft_memcmp(str1, str2, 13);
    printf("Test 1 (identical): %d (expected 0)\n", result1);

    // Test case 2: different strings
    int result2 = ft_memcmp(str1, str3, 13);
    printf("Test 2 (different): %d (expected positive value)\n", result2);

		// Test case 3: different characters
		int result3 = ft_memcmp(str1, str4, 13);
		printf("Test 3 (different characters): %d (expected negative value)\n", result3);


    return 0;
}
