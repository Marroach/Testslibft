#include "libft.h"
#include <stdio.h>

	void check_type(char value) {

    typeof(value) test_var; 
    printf("The type of the variable is: %s\n", (sizeof(test_var) == sizeof(char) ? "char" : "unknown"));
	}
int main() {


    char *result;


    result = ft_itoa(123);
    printf("ft_itoa(123) = %s\n", result);
	check_type(*result);
    free(result); 

    result = ft_itoa(-456);
    printf("ft_itoa(-456) = %s\n", result);
	check_type(*result);
    free(result);

    result = ft_itoa(0);
    printf("ft_itoa(0) = %s\n", result);
	check_type(*result);
    free(result);

    result = ft_itoa(789);
    printf("ft_itoa(789) = %s\n", result);
	check_type(*result);
    free(result);

    result = ft_itoa(-321);
    printf("ft_itoa(-321) = %s\n", result);
	check_type(*result);
    free(result);

    return 0;
}
