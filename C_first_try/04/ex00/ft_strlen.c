/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/08/08 18:11:45 by ahossein      #+#    #+#                 */
/*   Updated: 2026/08/10 12:52:27 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

// int	main(void)
// {
// 	char	mystring[] = "Whatever";
// 	ft_strlen(mystring);
// 	printf("the length is:\n%d", ft_strlen(mystring));
// 	return(0);
// }