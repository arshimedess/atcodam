/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/08/06 22:50:57 by ahossein      #+#    #+#                 */
/*   Updated: 2026/08/09 20:44:09 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	if (*to_find == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j] != '\0'
			&& to_find[j] != '\0')
		{
			++j;
			if (to_find[j] == '\0')
				return (str + i);
		}
		++i;
	}
	return (NULL);
}

// int main ()
// {
// 	char haystack[] = "somethithing is hidden here.";
// 	char needle[] = "ed";
// 	printf("here's my result:\n%s\n", ft_strstr(haystack, needle));
// 	return(0);
// }