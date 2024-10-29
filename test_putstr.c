#include "libft.h"
#include <stdio.h>
#include <unistd.h> // For write

int main() {
    // Test ft_putstr_fd with various strings
    printf("Testing ft_putstr_fd with different strings:\n");

    ft_putstr_fd("Hello, World!\n", 1);  
    ft_putstr_fd("This is a test.\n", 1); 
    ft_putstr_fd("ft_putstr_fd works!\n", 1); 

    // Test with an empty string
    ft_putstr_fd("", 1);
    ft_putchar_fd('\n', 1); 

    // Test with a NULL string
    ft_putstr_fd(NULL, 1); 

    return 0;
}
