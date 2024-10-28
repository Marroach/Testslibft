#include "libft.h"
#include <stdio.h>

int main()
{
	char test = 'a';
	char test2 = '2' ;
	char test3 = 'A';
	
	printf("1 true 0 false. result:%d \n", ft_isalpha(test));
	printf("1 true 0 false. result: %d \n", ft_isalpha(test2));
	printf("1 true 0 false. result: %d \n", ft_isalpha(test3));
}