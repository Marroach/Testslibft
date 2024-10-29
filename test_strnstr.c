#include "libft.h"
#include <stdio.h>
#include <string.h> // For using standard strnstr for comparison

int main() {
    // Test case 1: Basic usage - needle present in haystack
    char *haystack1 = "Hello, world!";
    char *needle1 = "world";
    char *result1 = ft_strnstr(haystack1, needle1, 13);
    printf("Test 1: ft_strnstr(\"%s\", \"%s\", 13) = %s (Expected: %s)\n", 
           haystack1, needle1, result1, strstr(haystack1, needle1));

    char *haystack2 = "Hello, world!";
    char *needle2 = "foo";
    char *result2 = ft_strnstr(haystack2, needle2, 13);
    printf("Test 2: ft_strnstr(\"%s\", \"%s\", 13) = %s (Expected: %s)\n", 
           haystack2, needle2, result2, strstr(haystack2, needle2));


    char *haystack3 = "Hello, world!";
    char *needle3 = "";
    char *result3 = ft_strnstr(haystack3, needle3, 13);
    printf("Test 3: ft_strnstr(\"%s\", \"%s\", 13) = %s (Expected: %s)\n", 
           haystack3, needle3, result3, strstr(haystack3, needle3));


    char *haystack4 = "";
    char *needle4 = "world";
    char *result4 = ft_strnstr(haystack4, needle4, 0);
    printf("Test 4: ft_strnstr(\"%s\", \"%s\", 0) = %s (Expected: %s)\n", 
           haystack4, needle4, result4, strstr(haystack4, needle4));


    char *haystack5 = "Hello, world!";
    char *needle5 = "Hello, world!";
    char *result5 = ft_strnstr(haystack5, needle5, 5);
    printf("Test 5: ft_strnstr(\"%s\", \"%s\", 5) = %s (Expected: %s)\n", 
           haystack5, needle5, result5, strstr(haystack5, needle5));


    char *haystack6 = "Hello, world!";
    char *needle6 = "Hello";
    char *result6 = ft_strnstr(haystack6, needle6, 5);
    printf("Test 6: ft_strnstr(\"%s\", \"%s\", 5) = %s (Expected: %s)\n", 
           haystack6, needle6, result6, strstr(haystack6, needle6));

 
    char *haystack7 = "Hello, world!";
    char *needle7 = "world";
    char *result7 = ft_strnstr(haystack7, needle7, 12);
    printf("Test 7: ft_strnstr(\"%s\", \"%s\", 12) = %s (Expected: %s)\n", 
           haystack7, needle7, result7, strstr(haystack7, needle7));

    return 0;
}
