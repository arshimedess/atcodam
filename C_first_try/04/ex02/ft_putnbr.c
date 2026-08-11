/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/08/08 22:52:16 by ahossein      #+#    #+#                 */
/*   Updated: 2026/08/10 12:54:29 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

void	ft_putnbr(int nb)
{
	int		c;
	long	tmp;

	tmp = nb;
	if (tmp < 0)
	{
		write (1, "-", 1);
		tmp = tmp * -1;
	}
	if (tmp >= 0 && tmp <= 9)
	{
		c = tmp + '0';
		write (1, &c, 1);
	}
	else
	{
		ft_putnbr(tmp / 10);
		ft_putnbr (tmp % 10);
	}
}

// int	main()
// {
// 	ft_putnbr (__INT_MAX__ * (-1) - 1);
// 	write (1, "\n", 1);
// 	ft_putnbr (23232322);
// 	write (1, "\n", 1);
// 	ft_putnbr (-23232322);
// 	write (1, "\n", 1);
// 	ft_putnbr (-42);
// 	write (1, "\n", 1);
// 	ft_putnbr (0);
// 	write (1, "\n", 1);
// 	return(0);
// }

// or
// if (nb == -2147483648)
// 	write (1, "-2147483648", 1);	
// 	make sure of this one
