/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_negative.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/07/23 20:52:40 by ahossein      #+#    #+#                 */
/*   Updated: 2026/08/11 23:46:51 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	negative;
	char	positive;

	negative = 'N';
	positive = 'P';
	if (n < 0)
	{
		write(1, &negative, 1);
	}
	
}

int	main(void)
{
	ft_is_negative(23);
	return (0);
}