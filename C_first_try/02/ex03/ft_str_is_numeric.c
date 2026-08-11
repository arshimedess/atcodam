/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_numeric.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/07/30 16:49:09 by ahossein      #+#    #+#                 */
/*   Updated: 2026/08/03 18:41:50 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	d;

	i = 0;
	d = 1;
	while (str[i])
	{
		if (str[i] == '\0' || (str[i] >= '0' && str[i] <= '9'))
		{
			d = 1;
			i++;
		}
		else
			return (0);
	}
	return (d);
}
// int main(void)
// {
// 	char *my_string;
// 	my_string = "38735837";
// 	printf("%d",ft_str_is_numeric(my_string));
// 	return(0);
// }
