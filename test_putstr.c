#include "libft.h"
#include <stdio.h>
#include <unistd.h> // For write

int main() {
    // Test ft_putstr_fd with various strings
    printf("Testing ft_putstr_fd with different strings:\n");

    ft_putstr_fd("Hello, World!\n", 1);  // Should print "Hello, World!" to stdout
    ft_putstr_fd("This is a test.\n", 1); // Should print "This is a test." to stdout
    ft_putstr_fd("ft_putstr_fd works!\n", 1); // Should print "ft_putstr_fd works!" to stdout

    // Test with an empty string
    ft_putstr_fd("", 1); // Should print nothing, just a newline
    ft_putchar_fd('\n', 1); // New line for better output format

    // Test with a NULL string
    ft_putstr_fd(NULL, 1); // Should do nothing

    return 0;
}
