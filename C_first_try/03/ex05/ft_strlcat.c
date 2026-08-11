/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/08/08 17:27:59 by ahossein      #+#    #+#                 */
/*   Updated: 2026/08/10 19:38:26 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <bsd/string.h>

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int			dlen;
	unsigned int			slen;
	unsigned int			i;

	dlen = 0;
	slen = 0;
	i = 0;
	while (dest[dlen])
		dlen++;
	while (src[slen])
		slen++;
	if (size <= dlen)
		return (size + slen);
	while (dlen + i < size - 1 && src[i] != '\0')
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = '\0';
	return (dlen + slen);
}

int main()
{
	char destt[20] = "Whatever";
	char srcc[] = "Cat";
	unsigned int s = 1;
	printf("my result: %d\n", ft_strlcat(destt, srcc, s));
	printf("my result: %s\n", destt);
	return(0);
}