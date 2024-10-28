#include "libft.h"
#include <stdio.h>
#include <string.h>

int main ()
{
char *str = "C0py tH1s $tring";
char *test1 = NULL;

printf("%s \n", ft_strdup(str));
printf("%s \n", strdup(str));

printf("%s \n", ft_strdup(test1));
printf("%s \n", strdup(test1));

}