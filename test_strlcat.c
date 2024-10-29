#include "libft.h"
#include <stdio.h>
#include <string.h> 

int main() {
    char dst[20];    
    const char *src = "World!";
    
    // Test case 1: Standard concatenation
    strcpy(dst, "Hello,  there"); 
    size_t ret1 = ft_strlcat(dst, src, sizeof(dst));
    printf("Test 1: ft_strlcat -> \"%s\" (return value: %zu)\n", dst, ret1); 
    strcpy(dst, "Hello, "); 
    size_t ret2 = ft_strlcat(dst, src, 10);
    printf("Test 2: ft_strlcat -> \"%s\" (return value: %zu)\n", dst, ret2); 
    strcpy(dst, "Hello, ");
    size_t ret3 = ft_strlcat(dst, src, sizeof(dst)); 
    printf("Test 3: ft_strlcat -> \"%s\" (return value: %zu)\n", dst, ret3); 
    strcpy(dst, "");

    size_t ret4 = ft_strlcat(dst, src, sizeof(dst)); 
    printf("Test 4: ft_strlcat -> \"%s\" (return value: %zu)\n", dst, ret4); 

    strcpy(dst, "Hello, ");
    size_t ret5 = ft_strlcat(dst, src, 0); 
    printf("Test 5: ft_strlcat -> \"%s\" (return value: %zu)\n", dst, ret5); 

    return 0;
}
