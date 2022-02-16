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
