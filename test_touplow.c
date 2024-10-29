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
    test_toupper('a');
    test_toupper('z'); 
    test_toupper('A'); 
    test_toupper('Z'); 
    test_toupper('1');
    test_toupper('!'); 
    test_toupper(' '); 

    // Test cases for ft_tolower
    test_tolower('A');
    test_tolower('Z'); 
    test_tolower('a'); 
    test_tolower('z');
    test_tolower('1'); 
    test_tolower('!');
    test_tolower(' '); 

    return 0;
}
