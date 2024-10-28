#include <stdio.h>
#include "libft.h"

int main()
{
	char test = 'a';
	char test2 = '2' ;
	char test3 = 'z';
	
	printf("1 true 0 false. result: %d \n", ft_isalnum(test));
	printf("1 true 0 false. result: %d \n", ft_isalnum(test2));
	printf("1 true 0 false. result:%d \n", ft_isalnum(test3));
}