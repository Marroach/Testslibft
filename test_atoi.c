#include "libft.h"
#include <stdio.h>

void check_type(int value) {

    typeof(value) test_var; 
    printf("The type is: %s\n", (sizeof(test_var) == sizeof(int) ? "int" : "char"));
}

int main() {
    char *s = "12345";

    int result = ft_atoi(s);
    printf("ft_atoi(\"%s\") = %d\n", s, result);

    check_type(result);

    return 0;
}