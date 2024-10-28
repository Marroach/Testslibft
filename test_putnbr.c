#include "libft.h"
#include <stdio.h>
#include <unistd.h> 
int main() {
    // Test ft_putnbr_fd with positive numbers
    printf("Testing ft_putnbr_fd with positive numbers:\n");
    ft_putnbr_fd(42, 1);        // Should print "42"
     printf("\n");
    ft_putnbr_fd(12345, 1);     // Should print "12345"
     printf("\n");
    ft_putnbr_fd(2147483647, 1); // Should print "2147483647"
     printf("\n");
    ft_putchar_fd('\n', 1);     // New line for better output format

    // Test ft_putnbr_fd with negative numbers
    printf("Testing ft_putnbr_fd with negative numbers:\n");
    ft_putnbr_fd(-42, 1);       // Should print "-42"
    printf("\n");
    ft_putnbr_fd(-12345, 1);    // Should print "-12345"
     printf("\n");
    ft_putnbr_fd(-2147483648, 1); // Should print "-2147483648"
     printf("\n");
    ft_putchar_fd('\n', 1);     // New line for better output format

    // Test ft_putnbr_fd with zero
    printf("Testing ft_putnbr_fd with zero:\n");
    ft_putnbr_fd(0, 1);         // Should print "0"
     printf("\n");
    ft_putchar_fd('\n', 1);     // New line for better output format

    return 0;
}
