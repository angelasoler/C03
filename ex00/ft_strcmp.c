

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
