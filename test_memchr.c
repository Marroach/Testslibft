#include <stdio.h>
#include <string.h>
#include "libft.h"

void compare_memchr(const char *test_str, char ch, size_t len) {
    void *my_result = ft_memchr(test_str, ch, len);
    void *std_result = memchr(test_str, ch, len);
    
    
    if (my_result == std_result) {
        printf("ft_memchr and memchr returned the same pointer for '%c' in \"%s\"\n", ch, test_str);
    } else {
        printf("ft_memchr: %s\n", (my_result ? (char *)my_result : "NULL"));
        printf("memchr:   %s\n", (std_result ? (char *)std_result : "NULL"));
    }
}

void print_result(const char *test_str, int ch, size_t len) {
    char *result = ft_memchr(test_str, ch, len);
    
    // Print the original string and the result
    if (result) {
        printf("ft_memchr found '%c' in \"%s\" at position: %ld\n", ch, test_str, (result - test_str));
    } else {
        printf("ft_memchr did not find '%c' in \"%s\"\n", ch, test_str);
    }
}

int main() {
    // Test cases
    const char *test1 = "Hello, World!";
    print_result(test1, 'W', ft_strlen(test1)); // Searching for 'W'
    
    const char *test2 = "Another test string";
    print_result(test2, 'a', ft_strlen(test2)); // Searching for 'a'

    const char *test3 = "This is a test";
    print_result(test3, 'z', ft_strlen(test3)); // Searching for a character not present
    
    const char *test4 = "Last one!";
    print_result(test4, '!', ft_strlen(test4)); // Searching for '!'

    const char *test5 = "Check first character";
    print_result(test5, 'C', ft_strlen(test5)); // Searching for 'C'

    const char *test6 = "Check last character";
    print_result(test6, 'r', ft_strlen(test6)); // Searching for 'r'

    return 0;
}

