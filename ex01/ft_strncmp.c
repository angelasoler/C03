#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	
	int result;
	unsigned int i;

	i = 0;

	while (s1[i] == s2[i] && n >= i)
	{
		i++;
	}
	result = s1[i] - s2[i];

	return(result);
}

int	main()
{
	int x;
	char *a = "ola mundo";
	char *b = "ola Mundo";

	x = ft_strncmp(a, b, 2);
	printf("%d", x);
}

// char *funcao(char *de, char *sr)
// {
// 	int i = 'a'
// 	int i = 97

// 	while sr[i] == '\0' 

// 	i++
// }