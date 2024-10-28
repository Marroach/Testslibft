#include "libft.h"
#include <stdio.h>
#include <string.h>  // For comparison with the standard strlcat

int main() {
    char dst[20];    // Destination buffer with enough size for most tests
    const char *src = "World!";
    
    // Test case 1: Standard concatenation
    strcpy(dst, "Hello, "); // Initializing dst
    size_t ret1 = ft_strlcat(dst, src, sizeof(dst));
    printf("Test 1: ft_strlcat -> \"%s\" (return value: %zu)\n", dst, ret1); // Should print "Hello, World!"

    // Reset dst for the next test
    strcpy(dst, "Hello, "); 
    // Test case 2: Destination buffer size is too small
    size_t ret2 = ft_strlcat(dst, src, 10);
    printf("Test 2: ft_strlcat -> \"%s\" (return value: %zu)\n", dst, ret2); // Should print "Hello, Wo"

    // Reset dst for the next test
    strcpy(dst, "Hello, ");
    // Test case 3: Exact fit
    size_t ret3 = ft_strlcat(dst, src, sizeof(dst)); 
    printf("Test 3: ft_strlcat -> \"%s\" (return value: %zu)\n", dst, ret3); // Should print "Hello, World!"

    // Reset dst for the next test
    strcpy(dst, "");
    // Test case 4: Empty destination
    size_t ret4 = ft_strlcat(dst, src, sizeof(dst)); 
    printf("Test 4: ft_strlcat -> \"%s\" (return value: %zu)\n", dst, ret4); // Should print "World!"

    // Test case 5: Zero destination size
    strcpy(dst, "Hello, ");
    size_t ret5 = ft_strlcat(dst, src, 0); 
    printf("Test 5: ft_strlcat -> \"%s\" (return value: %zu)\n", dst, ret5); // Should print "Hello, "

    return 0;
}
