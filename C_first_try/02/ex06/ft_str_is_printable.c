/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_printable.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/07/30 18:38:44 by ahossein      #+#    #+#                 */
/*   Updated: 2026/08/03 18:57:00 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] == '\0' || (str[i] >= ' ' && str[i] <= '~')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int main(void)
// {
// 	printf("if printable characters %d\n"
// ,(ft_str_is_printable("hallo 123 $^")));
// 	printf("if empty %d\n",(ft_str_is_printable("")));
// 	printf("if not printable characters %d\n",(ft_str_is_printable("\f")));
// 	return(0);
// }