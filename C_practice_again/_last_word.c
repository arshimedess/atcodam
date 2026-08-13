// Assignment name  : last_word
// Expected files   : last_word.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes a string and displays its last word followed by a \n.

// A word is a section of string delimited by spaces/tabs or by the start/end of
// the string.

// If the number of parameters is not 1, or there are no words, display a newline.

// Example:

// $> ./last_word "FOR PONY" | cat -e
// PONY$
// $> ./last_word "this        ...       is sparta, then again, maybe    not" | cat -e
// not$
// $> ./last_word "   " | cat -e
// $
// $> ./last_word "a" "b" | cat -e
// $
// $> ./last_word "  lorem,ipsum  " | cat -e
// lorem,ipsum$
// $>

int space_finder(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			
		}
	}
}


int main (int argc, char **argv)
{
	char *str = argv[1];
	int i = 0;
	int size = 0;
	while (str[size] != '\0') 
		++size;

	int end = size - 1;
	while (end >= 0) {
		if (str[end] != ' ')
			break ;
		--end;
	}
	i = 0;
	int max_i = 0;
	while (i <= end) {
		if (str[i] == ' ')
			max_i = i;
		++i;
	}
	int start = max_i + 1;
	while (start <= end) {
		write(1, &str[start], 1);
		++start;
	}

}