/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/07/29 21:23:46 by ahossein      #+#    #+#                 */
/*   Updated: 2026/08/03 18:53:45 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	s1[] = "whatever";
// 	char	s2[50] = "";

// 	unsigned int	copy_s1_till = 5;
// 	ft_strncpy(s2, s1, copy_s1_till);
// 	printf("s2 till %d\n", copy_s1_till);
// 	printf("is now %s\n", s2);
// 	return (0);
// }
