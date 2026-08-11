/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_lowercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/07/30 17:29:27 by ahossein      #+#    #+#                 */
/*   Updated: 2026/08/03 18:49:06 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	d;

	i = 0;
	d = 1;
	while (str[i])
	{
		if (str[i] == '\0' || (str[i] >= 'a' && str[i] <= 'z'))
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
// 	my_string = "whateverexample";
// 	printf("%d",(ft_str_is_lowercase(my_string))); 
// 	return(0);
// }