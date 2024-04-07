#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	int  i = 0;
	char *dest = malloc(sizeof(char) * 10);
	char *src = malloc(sizeof(char) * 5);
	while (i < 10)
	{
		if (i < 5)
			dest[i] = '0';
		else
			dest[i] = 0;
		i++;
	}
	i = 0;
	while (i < 4)
	{
		src[i] = '1';
		i++;
	}
	src[i] = '\0';
	printf("%lu\n", strlcat(dest, src, 5));
}
