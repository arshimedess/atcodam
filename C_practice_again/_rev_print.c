// Assignment name  : rev_print
// Expected files   : rev_print.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes a string, and displays the string in reverse
// followed by a newline.

// If the number of parameters is not 1, the program displays a newline.

// Examples:

// $> ./rev_print "zaz" | cat -e
// zaz$
// $> ./rev_print "dub0 a POIL" | cat -e
// LIOP a 0bud$
// $> ./rev_print | cat -e
// $

#include <unistd.h>
#include <stdio.h>

void rev_print(char *str)
{
	int i = 1;
	int strlen = 0;

	while (str[strlen] != '\0')
	{
		strlen++;
	}
	
	printf("strlen: %d", strlen);
	while(i < strlen)
	{
		write(1, &str[strlen - i], 1);
		i++;
	}
	write (1, "\n", 1);
}

int main(void)
{
	char string[] = "whatever is back";
	rev_print(string);
	return (0);
}