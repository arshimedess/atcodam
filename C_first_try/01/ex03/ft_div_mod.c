/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahossein <ahossein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 15:12:38 by ahossein          #+#    #+#             */
/*   Updated: 2026/07/28 14:07:19 by ahossein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int	x;
// 	int	y;
// 	int	d;
// 	int	m;

// 	x = 13;
// 	y = 5;
// 	ft_div_mod(x, y, &d, &m);
// 	// printf("The div is: %d\n", d);
// 	// printf("The mod is: %d\n", m);
// 	return (0);
// }