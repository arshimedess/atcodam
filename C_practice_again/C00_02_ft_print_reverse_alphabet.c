/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   C00_02_ft_print_reverse_alphabet.c                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/08/11 23:29:40 by ahossein      #+#    #+#                 */
/*   Updated: 2026/08/11 23:31:54 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
	char c = 'z';
	while(c >= 'a')
	{
		write(1, &c, 1);
		c--;
	}
}

int main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}