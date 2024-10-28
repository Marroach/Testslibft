#include "libft.h"
#include <stdio.h>

int main()
{
	int test = 'A';
	int test2 = 255;
	int test3 = -1;
	
	printf("1 true 0 false. result: %d \n", ft_isupper(test));
	printf("1 true 0 false. result: %d \n", ft_isupper(test2));
	printf("1 true 0 false. result: %d \n", ft_isupper(test3));
}