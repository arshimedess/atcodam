#include <stdio.h>

char *ft_revvstr(char *str)
{
	//first we mesure the length
	//then we should do the swapping from the end to the begining
	
	int strlen = 0;
	while (str[strlen] != '\0')
	{
		strlen++;
	}
	
	char store;
	int last_char = strlen - 1;		//index number for the last char
	int i = 0;
	while ( i < last_char)
	{
		store = str[i];
		str[i] = str[last_char];
		str[last_char] = store;
		last_char--;
		i++;
	}
	return(str);

}

int main(void)
{
	char string[] = "hello";
	ft_revvstr(string);
	printf("result is: %s", string);
	return(0);
}