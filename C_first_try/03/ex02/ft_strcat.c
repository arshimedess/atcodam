/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcat.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/08/04 15:09:07 by ahossein      #+#    #+#                 */
/*   Updated: 2026/08/08 17:34:37 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	while (src[i])
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}

// int main()
// {
// 	char destination[20] = "you say";
// 	char source[10] = "whatever";
// 	printf("result of mine:%s\n", ft_strcat(destination, source));

// 	// char destination1[20] = "Cat";
// 	// char source2[10] = "whatever";
// 	// printf("result as it should:%s\n", strcat(destination1, source2));
// 	return (0);
// }