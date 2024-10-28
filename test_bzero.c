#include <stdio.h>
#include "libft.h"

int main()

{
	char str[] = "dark memories";
	printf("Before: %s \n", str);
	
ft_bzero(str, 4);

	printf("after: %s \n", str);

}