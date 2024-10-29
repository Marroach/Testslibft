#include "libft.h"
#include <stdio.h>

void test_substr(const char *s, unsigned int start, size_t len) {
    char *result = ft_substr(s, start, len);
    printf("ft_substr(\"%s\", %u, %zu) = \"%s\"\n", s, start, len, result ? result : "(null)");
    free(result);
}

int main() {
    test_substr("Hello, World!", 7, 5);
    test_substr("Hello, World!", 15, 5); 
	test_substr("Hello, World!", 0, 20); 
   test_substr("Hello, World!", 0, 5); 
    test_substr("Hello, World!", 1, 1);
    test_substr("Hello, World!", 5, 0); 
    test_substr("Hello, World!", 0, 13); 
    test_substr("", 0, 5); 

    return 0;
}
