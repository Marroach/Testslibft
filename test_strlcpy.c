#include "libft.h"
#include <stdio.h>
#include <string.h> // For comparison with the standard strlcpy

int main() {
    char dst[20];  // Sufficient buffer for most tests
    const char *src = "Hello, World!";

    // Test case 1: Standard copy
    size_t ret1 = ft_strlcpy(dst, src, sizeof(dst));
    printf("Test 1: ft_strlcpy -> \"%s\" (return value: %zu)\n", dst, ret1); // Should print "Hello, World!"

    // Reset dst for the next test
    memset(dst, 0, sizeof(dst)); // Clear dst
    // Test case 2: Destination buffer too small
    size_t ret2 = ft_strlcpy(dst, src, 10);
    printf("Test 2: ft_strlcpy -> \"%s\" (return value: %zu)\n", dst, ret2); // Should print "Hello, Wo"

    // Reset dst for the next test
    memset(dst, 0, sizeof(dst)); // Clear dst
    // Test case 3: Exact fit
    size_t ret3 = ft_strlcpy(dst, src, sizeof(dst)); 
    printf("Test 3: ft_strlcpy -> \"%s\" (return value: %zu)\n", dst, ret3); // Should print "Hello, World!"

    // Reset dst for the next test
    memset(dst, 0, sizeof(dst)); // Clear dst
    // Test case 4: Empty destination buffer
    size_t ret4 = ft_strlcpy(dst, "", sizeof(dst)); 
    printf("Test 4: ft_strlcpy with empty src -> \"%s\" (return value: %zu)\n", dst, ret4); // Should print "" and return 0

    // Reset dst for the next test
    memset(dst, 0, sizeof(dst)); // Clear dst
    // Test case 5: Zero destination size
    size_t ret5 = ft_strlcpy(dst, src, 0); 
    printf("Test 5: ft_strlcpy with zero dstsize -> \"%s\" (return value: %zu)\n", dst, ret5); // Should print "" and return length of src

    return 0;
}
