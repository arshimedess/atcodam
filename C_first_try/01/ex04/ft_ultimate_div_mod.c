/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahossein <ahossein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 16:45:22 by ahossein          #+#    #+#             */
/*   Updated: 2026/07/28 14:07:52 by ahossein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	store_a;
	int	store_b;

	store_a = *a;
	store_b = *b;
	*a = store_a / store_b;
	*b = store_a % store_b;
}

// int	main(void)
// {
// 	int	x;
// 	int	y;

// 	x = 13;
// 	y = 5;
// 	ft_ultimate_div_mod(&x, &y);
// 	// printf("The x is: %d\n", x);
// 	// printf("The y is: %d\n", y);
// 	return (0);
// }