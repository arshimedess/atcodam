/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_uppercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/07/30 17:38:26 by ahossein      #+#    #+#                 */
/*   Updated: 2026/08/03 18:56:31 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int main()
// {
// 	printf("if empty %d\n", ft_str_is_uppercase(""));
// 	printf("if all caps %d\n", ft_str_is_uppercase("AAA"));
// 	printf("if mixed %d\n", ft_str_is_uppercase(" #$Ac"));
// 	return(0);
// }