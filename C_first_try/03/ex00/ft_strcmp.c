/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/08/03 22:32:38 by ahossein      #+#    #+#                 */
/*   Updated: 2026/08/10 15:55:58 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

int main()
{
	char str1[] = " whatever";
	char str2[] = "what";
	printf("result of mine:%d\n", ft_strcmp(str1, str2));
	printf("result as it should:%d\n", strcmp(str1, str2));
	return(0);
}