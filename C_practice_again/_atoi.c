// Assignment name  : ft_atoi
// Expected files   : ft_atoi.c
// Allowed functions: None
// --------------------------------------------------------------------------------

// Write a function that converts the string argument str to an integer (type int)
// and returns it.

// It works much like the standard atoi(const char *str) function, see the man.

// Your function must be declared as follows:

// int	ft_atoi(const char *str);

#include <stdio.h>

int ft_atoi(const char *str)
{
	int i = 0;
	int nbr = 0;
	int sign = 1;

	if (str[0] == '-' || str[0] == '+')
	{
		if (str[0] == '-')
		{
			sign = sign * -1; 
		}
		i++;
	}
	while (str[i] != '\0')
	{
		nbr = (nbr * 10) + str[i] - '0';
		i++;
	}
	return (sign * nbr);


}
int main(void)
{
	printf("%d", ft_atoi("2345"));
	return(0);
}