#include <stdio.h>

int count(char *s)
{
	int i = 1;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int first;
	int second;

	first = count(s1);
	second = count(s2);

	return(first - second);
}

int	main()
{
	int x;
	char *a = "vamos comparar strings";
	char *b = "ver se tem o mesmo tamanho";

	x = ft_strcmp(a, b);
	printf("%d", x);
}
