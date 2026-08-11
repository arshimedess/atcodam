/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/07/27 17:16:57 by ahossein      #+#    #+#                 */
/*   Updated: 2026/08/02 15:35:17 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


// void	ft_putstr(char *str)
// {
	// 	while (*str)
	// 	{
		// 		write(1, str, 1);
		// 		str++;
		// 	}
		// }

#include <unistd.h>
void ft_putstr(char *str)
{
	int i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
		
int	main(void)
{
	char sth[] = "whatever it is, it's important to write a sentence";
	ft_putstr(sth);
	return (0);
}