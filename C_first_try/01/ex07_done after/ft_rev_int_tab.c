/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_rev_int_tab.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/08/02 16:37:54 by ahossein      #+#    #+#                 */
/*   Updated: 2026/08/02 16:37:57 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int store;
	
	i = 0;
	while(i < size / 2)
	{
		store = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = store;
		i++;
	}
}

int main(void)
{
	int int_ar[5] = {1,2,3,4,5};
	
	ft_rev_int_tab(int_ar, 5);
	printf("%d", int_ar[0]);
	printf("%d", int_ar[1]);
	printf("%d", int_ar[2]);
	printf("%d", int_ar[3]);
	printf("%d", int_ar[4]);
	return (0);
}