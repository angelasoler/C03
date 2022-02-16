int count(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return(i);
}

char *ft_strncat(char *dest, char  *src, unsigned int nb)
{
	unsigned int i;
	int size;

	size = count(dest);
	i = 0;
	while (i < nb)
	{
		dest[size] = src[i];
		i++;
		size++;
		if (src[i] == '\0')
		{
			dest[size] = '\0';
			return(dest);
		}
	}
	dest[size] = '\0';
	return(dest);
}

#include <stdio.h>

int	main()
{
	char a[10] = "ola mundo";
	char b[100] = "ola Mundo";

	ft_strncat(a, b, 15);

	printf("%s\n", a);
}
