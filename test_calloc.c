
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdint.h>

// Test function
void test_ft_calloc(size_t nmemb, size_t size) {
    void *result_ft_calloc = ft_calloc(nmemb, size);
    void *result_calloc = calloc(nmemb, size);

    printf("Testing ft_calloc(%zu, %zu)\n", nmemb, size);

    if (result_ft_calloc == NULL && result_calloc == NULL) {
        printf("Both returned NULL (Expected if allocation fails or zeroed sizes)\n");
    } else if (result_ft_calloc == NULL || result_calloc == NULL) {
        printf("Mismatch: ft_calloc returned %p, calloc returned %p\n", result_ft_calloc, result_calloc);
    } else if (memcmp(result_ft_calloc, result_calloc, nmemb * size) != 0) {
        printf("Mismatch in content of allocated memory.\n");
    } else {
        printf("Both allocated memory match.\n");
    }

    free(result_ft_calloc);
    free(result_calloc);
}

int main() {
    // Tests cases
    test_ft_calloc(0, 0);                 // Zero members and size
    test_ft_calloc(1, 0);                 // Zero size
    test_ft_calloc(0, 1);                 // Zero members
    test_ft_calloc(5, sizeof(int));       // Normal allocation
    test_ft_calloc(SIZE_MAX, 2);          // Should return NULL due to overflow
    test_ft_calloc(10, 10);               // Small allocation
    test_ft_calloc(SIZE_MAX / 2, 2);      // Edge case for max limit without overflow

    return 0;
}

// --archived calloc
// void	*ft_calloc(size_t nmemb, size_t size)
// {
// 	void	*ptr;

// 	if (nmemb == 0 || size == 0)
// 	{
// 		return (NULL);
// 	}
// 	if (nmemb > SIZE_MAX / size)
// 	{
// 		return (NULL);
// 	}
// 	ptr = malloc(nmemb * size);
// 	if (!ptr)
// 	{
// 		return (NULL);
// 	}
// 	ft_bzero(ptr, nmemb * size);
// 	return (ptr);
// }
