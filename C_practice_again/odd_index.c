#include<unistd.h>

void	ft_print_odd(char *str)
{
	int i = 1;

	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i = i +2;
	}

}

int main()
{
	char s[] = "ghAda Ali";
	ft_print_odd(s);
	return 0;
}

// if even just start with i = 0