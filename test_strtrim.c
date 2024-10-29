#include "libft.h"
#include <stdio.h>

void test_strtrim(const char *s1, const char *set) {
    char *result = ft_strtrim(s1, set);
    printf("ft_strtrim(\"%s\", \"%s\") = \"%s\"\n", s1, set, result);
    free(result);
}

int main() {
    test_strtrim("   Hello, World!   ", " ");
    test_strtrim("##Hello, World!##", "#");
    test_strtrim("Hello, World!", " ");
    test_strtrim("###", "#");
    test_strtrim("", "#");
   test_strtrim("**Hello, World!**", "* ");
    test_strtrim("!!!Hello!!!", "!");

    return 0;
}
