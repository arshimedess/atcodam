#include <stdio.h>

char *ft_strcapitalize(char *str)
{
	int ready_for_new_word;
	int i;

	ready_for_new_word = 1;
	i = 0;
	while(str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= '0' && str[i] <= '9')))
			{
				ready_for_new_word = 1;
				i++;
			}
		else
		{
			if (ready_for_new_word && (str[i] >= 'a' && str[i] <= 'z'))
			{
				str[i] -= 32;
			}
			else if (! ready_for_new_word && (str[i] >= 'A' && str[i] <= 'Z'))
			{
				str[i] += 32;
				ready_for_new_word = 0;
			}
		}
		i++;
	}
	return(str);
}


int main(void)
{
	char string[] = "hi, how are you? 42Words forty-two; fifty+and+one";
	ft_strcapitalize(string);
	printf("%s", string);
	return(0);
}