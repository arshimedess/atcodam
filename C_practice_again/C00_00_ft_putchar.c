/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   C00_00_ft_putchar.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/08/11 23:12:18 by ahossein      #+#    #+#                 */
/*   Updated: 2026/08/11 23:18:30 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
	write(1, "\n", 1);
}
int main(void)
{
	char character;
	character = 'k';
	ft_putchar(character);
	return (0);
}