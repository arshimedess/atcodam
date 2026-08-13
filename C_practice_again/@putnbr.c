
#include <unistd.h>
#include <limits.h>
#include <stdio.h>
void ft_putnbr(int nb)
{
	int c;
	long tmp;

	tmp = nb;

	if (tmp < 0)
	{
		tmp = tmp * -1;
		write(1, "-", 1);
	}
	if (tmp >= 0 && tmp <= 9)
	{
		c = tmp + '0';
		write (1, &c, 1);
	}
	else
	{
		ft_putnbr(tmp / 10);
		ft_putnbr(tmp % 10);
	}
}

int main(void)
{
	ft_putnbr(-42);
	printf("%d\n",INT_MIN);
	return (0);
}

//
//remember to temp = nb
// and do the rest with temp which belongs to long!
//