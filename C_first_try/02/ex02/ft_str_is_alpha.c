/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_alpha.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/07/29 21:55:46 by ahossein      #+#    #+#                 */
/*   Updated: 2026/08/03 18:49:17 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\0' || (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z'))
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}

// int	main(void)
// {
// 	char	alph_string[] = "asfasfs agasgdag";
// 	printf("%d", ft_str_is_alpha(alph_string));
// 	return (0);
// }
// 	// ft_str_is_alpha(alph_string);