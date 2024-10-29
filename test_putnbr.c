#include "libft.h"
#include <stdio.h>
#include <unistd.h> 

int main() {
    // Test with positive numbers
    printf("Testing ft_putnbr_fd with positive numbers:\n");
    ft_putnbr_fd(42, 1);       
     printf("\n");
    ft_putnbr_fd(12345, 1);     
     printf("\n");
    ft_putnbr_fd(2147483647, 1); 
     printf("\n");
    ft_putchar_fd('\n', 1);

    // Test  with negative numbers
    printf("Testing ft_putnbr_fd with negative numbers:\n");
    ft_putnbr_fd(-42, 1);      
    printf("\n");
    ft_putnbr_fd(-12345, 1);    
     printf("\n");
    ft_putnbr_fd(-2147483648, 1);
     printf("\n");
    ft_putchar_fd('\n', 1);     

    // Test with zero
    printf("Testing ft_putnbr_fd with zero:\n");
    ft_putnbr_fd(0, 1);         
     printf("\n");
    ft_putchar_fd('\n', 1);    

    return 0;
}
