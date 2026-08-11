/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahossein <ahossein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 14:20:06 by ahossein          #+#    #+#             */
/*   Updated: 2026/07/28 14:06:57 by ahossein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// printf("what is inside store: %d\n", store1);
void	ft_swap(int *a, int *b)
{
	int	store1;

	store1 = *a;
	*a = *b;
	*b = store1;
}

// int	main(void)
// {
// 	int	x;
// 	int	y;

// 	x = 6;
// 	y = 7;
// 	ft_swap(&x, &y);
// 	// printf("The value of x is: %d\n", x);
// 	// printf("The value of y is: %d\n", y);
// 	return (0);
// }