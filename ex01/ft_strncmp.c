#include <stdio.h>

int count(char *s, unsigned int n)
{
	int i = 1;
	int num = n;

	while (i != num)
	{
		i++;
	}
	return (i);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int first;
	int second;

	first = count(s1);
	second = count(s2, n);

	return(n -  first);
}

int	main()
{
	int x;
	char *a = "ola mundo";
	char *b = "ve";

	x = ft_strncmp(a, b, 5);
	printf("%d", x);
}