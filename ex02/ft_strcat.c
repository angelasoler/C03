
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

char *ft_strcat(char *dest, const char *src)
{
	int i;
	int size;

	size = count(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[size] = src[i];
		i++;
		size++;
	}
	dest[size] = src[i];
	return(dest);
}

#include <stdio.h>
int	main()
{
	char a[10] = "ola mundo";
	char b[100] = "ola Mundo";

	ft_strcat(a, b);
	printf("%s", a);
}