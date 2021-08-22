void	incr(void);

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z') && ((i == 0) || (j == 1)))
		{
			str[i] = str[i] - 32;
			j = 0;
		}
		else if ((str[i] >= 'a') && (str[i] <= 'z') && (j == 0))
			j = 0;
		else if ((str[i] >= 'A') && (str[i] <= 'Z') && ((i == 0) || (j == 1)))
			j = 0;
		else if ((str[i] >= 'A') && (str[i] <= 'Z') && (j == 0))
			str[i] = str[i] + 32;
		else if ((str[i] >= '0') && (str[i] <= '9'))
			j = 0;
		else
			j = 1;
		i++;
	}	
	return (str);
}
