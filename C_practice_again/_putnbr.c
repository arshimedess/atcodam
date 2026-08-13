
#include <unistd.h>
void ft_putnbr(int nb)
{
	int c;
	long tmp;

	tmp = nb;

	if (nb < 0)
	{
		nb = nb * -1;
		write(1, "-", 1);
	}
	if (nb >= 0 && nb <= 9)
	{
		c = nb + '0';
		write (1, &c, 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % c);
	}
}

int main(void)
{
	ft_putnbr(-42);
	return (0);
}