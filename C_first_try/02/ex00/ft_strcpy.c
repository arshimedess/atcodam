/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/07/28 14:36:56 by ahossein      #+#    #+#                 */
/*   Updated: 2026/08/03 18:31:45 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	s1[10];"whatever";
// 	char	s2[20]="";

// 	ft_strcpy(s2, s1);
// 	printf("s2 now is: %s\n", s2);
// 	return (0);
// }
