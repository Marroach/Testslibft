#include "libft.h"
#include <stdio.h>
#include <string.h>

void test_ft_strchr(const char *str, int ch) {
    char *result = ft_strchr(str, ch);
    char *expected = strchr(str, ch);

    if (result == expected) {
        printf("Test passed for input ('%s', '%c')\n", str, ch);
    } else {
        printf("Test failed for input ('%s', '%c')\n", str, ch);
        printf("Expected: %p, Result: %p\n", (void *)expected, (void *)result);
    }
}

int main() {
    // Tests for ft_strchr
    test_ft_strchr("Hello, world!", 'w');       
    test_ft_strchr("Hello, world!", 'z');        
    test_ft_strchr("Hello, world!", '\0');      
    test_ft_strchr("Another example", 'e');      
    test_ft_strchr("SingleChar", 'S');        
    test_ft_strchr("EndsWithE", 'E');           
    test_ft_strchr("", 'a');                     
    test_ft_strchr("12345", '5');               

    return 0;
}