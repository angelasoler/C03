
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
