int	ft_alnum(char c)
{
	if ('0' <= c && '9' >= c)
		return (1);
	if ('a' <= c && 'z' >= c)
		return (2);
	if ('A' <= c && 'Z' >= c)
		return (3);
	return (0);
}

char *ft_strcapitalize(char *str)
{
	int	i;

	if (*str == 0)
		return (str);
	if (ft_alnum(str[0]) == 2)
		str[0] = str[0] - 'a' + 'A';
	i = 1;
	while (str[i])
	{
		if (ft_alnum(str[i - 1]) == 0 && ft_alnum(str[i]) == 2)
			str[i] = str[i] - 'a' + 'A';
		else if (ft_alnum(str[i - 1]) > 0 && ft_alnum(str[i]) == 3)
			str[i] = str[i] - 'A' + 'a';
		i++;
	}
	return (str);
}


#include <stdio.h>

int main(void)
{
	char string[] = "hi, how are you? 42Words forty-two; fifty+and+one";
	ft_strcapitalize(string);
	printf("%s", string);
	return(0);
}