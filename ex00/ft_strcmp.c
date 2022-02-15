#include <stdio.h>



int	ft_strcmp(char *s1, char *s2)
{
	
	int result;
	int i;

	i = 0;

	while (s1[i] == s2[i])
	{
		i++;
	}
	result = s1[i] - s2[i];

	return(result);
}

int	main()
{
	int x;
	char *a = "vamos comparar strings";
	char *b = "er se tem o mesmo tamanho";

	x = ft_strcmp(a, b);
	printf("%d", x);
}
