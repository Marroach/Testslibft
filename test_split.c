#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void print_split_result(char **result) {
    if (result == NULL) {
        printf("Result is NULL\n");
        return;
    }
    
    int index = 0;
    while (result[index] != NULL) {
        printf("Substring %d: '%s'\n", index, result[index]);
        index++;
    }
}

void free_split_result(char **result) {
    if (result == NULL) return;

    int index = 0;
    while (result[index] != NULL) {
        free(result[index]);
        index++;
    }
    free(result);
}

int main() {
    char **result;

    // Test 1: Basic splitting
    result = ft_split("hello world", ' ');
    print_split_result(result);
    free_split_result(result);

    // Test 2: Multiple delimiters
    result = ft_split("apple--banana-grape", '-');
    print_split_result(result);
    free_split_result(result);

    // Test 3: Edge case with empty string
    result = ft_split("", ' ');
    print_split_result(result);
    free_split_result(result);

    // Test 4: No delimiters
    result = ft_split("hello", ',');
    print_split_result(result);
    free_split_result(result);

    // Test 5: String with only delimiters
    result = ft_split("---", '-');
    print_split_result(result);
    free_split_result(result);

    return 0;
}
