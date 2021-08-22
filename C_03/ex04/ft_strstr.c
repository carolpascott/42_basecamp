int		ft_strncmp(char *s1, char *s2, unsigned int n);

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;
	int				res;
	char			*n;

	i = 0;
	j = 0;
	n = 0;
	if (to_find[i] == 0)
		return (str);
	while (to_find[i] != '\0')
		i++;
	j = i;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			res = ft_strncmp(&str[i], to_find, j);
			if (!res)
				return (&str[i]);
		}
		i++;
	}
	return (n);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((i <= (n - 1)) && ((s1[i] != '\0') || (s2[i] != '\0')))
	{
		if (s1[i] == s2[i])
			i++;
		else
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (s1[(i - 1)] - s2[(i - 1)]);
}
