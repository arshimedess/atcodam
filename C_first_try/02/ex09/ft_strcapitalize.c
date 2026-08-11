/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcapitalize.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/08/03 19:18:39 by ahossein      #+#    #+#                 */
/*   Updated: 2026/08/07 18:24:59 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	j;

	ft_strlowcase(str);
	j = 0;
	while (str[j] != '\0')
	{
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] = str[0] - 32;
		else if ((str[j] >= 32 && str[j] <= 47)
			|| (str[j] >= 58 && str[j] <= 64)
			|| (str[j] >= 91 && str[j] <= 96)
			|| (str[j] >= 123 && str[j] <= 126))//?
		{
			j++;
			if (str[j] >= 'a' && str[j] <= 'z')
				str[j] = str[j] - 32;
		}
		else
			j++;
	}
	return (str);
}



int	main(void)
{
	char	sth[] = " hi, how are you? 42Words forty-two; fifty+and+one";
	printf("%s\n", ft_strcapitalize(sth));
	return (0);
}
		