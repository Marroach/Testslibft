#include <stdio.h>
#include <string.h>
#include "libft.h"

int main()
{
	char buff1 [10];
	char buff2 [10];

ft_bzero(buff1, 10);
ft_bzero(buff2, 10);
	 // Initialize the entire buffers with bzero to avoid junk values
memset(buff1, 'x', sizeof(char) * 5);
ft_memset(buff2, 'x', sizeof(char) * 5);



//test1
int i = 0;
printf("Memeset test\n");
while (i < 10)
{
	printf("%c", buff1[i]);
	i++;
}
printf("\n");

printf("FT Memeset test\n");
i = 0;
while (i < 10)
{
	printf("%c", buff2[i]);
	i++;
}
printf("\n");

	return 0;
}