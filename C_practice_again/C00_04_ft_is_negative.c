/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   C00_04_ft_is_negative.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/08/11 23:41:12 by ahossein      #+#    #+#                 */
/*   Updated: 2026/08/11 23:44:54 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P",1);	
}

int main(void)
{
	int number = 0;
	ft_is_negative(number);
	return (0);
}