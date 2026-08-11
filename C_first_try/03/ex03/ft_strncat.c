/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/08/06 19:24:39 by ahossein      #+#    #+#                 */
/*   Updated: 2026/08/08 19:49:27 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	len;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	i = 0;
	while (i < nb && src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}

// int main(void)
// {
// 	char source[] = "Catalog";
// 	char destination[20] = "Whatever";
// 	unsigned int num =6;
// 	printf("my result: %s\n", ft_strncat(destination, source, num));
// 	char source2[] = "Catalog";
// 	char destination2[20] = "Whatever";
// 	unsigned int num2 = 6;
// 	printf("the result as it should be: %s"
// 		,strncat(destination2, source2, num2));
// 	return(0);
// }