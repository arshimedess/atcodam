/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   C01_00_ft_ft.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/08/12 14:42:58 by ahossein      #+#    #+#                 */
/*   Updated: 2026/08/12 14:53:34 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void ft_ft(int *nbr)
{
	*nbr = 42;
	printf("the adress %p", nbr);
	printf("the value %d", *nbr);
}

int main(void)
{
	int nmbr;
	nmbr = 2;
	ft_ft(&nmbr);
	printf("the value %d", nmbr);
	
	return(0);
}