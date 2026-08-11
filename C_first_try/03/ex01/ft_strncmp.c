/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/08/09 20:28:38 by ahossein      #+#    #+#                 */
/*   Updated: 2026/08/10 16:06:57 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && (s1[i] || s2[i]) && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}

int main(void)
{
	char str1[] = "whatever";
	char str2[] = "what";
	unsigned int d = 5;
	printf("result of mine:%d\n", ft_strncmp(str1, str2, d));
	printf("result as it should:%d\n", strncmp(str1, str2, d));
	return (0);
}