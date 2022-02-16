#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	n;
	int		all;

	all = 1000000000;
	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		nb = 147483648;
	}
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	else if (nb == 0)
		write(1, "0", 1);
	while (all >= 1)
	{
		n = (nb / all) + '0';
		nb = nb % all;
		if (n != '0')
			write(1, &n, 1);
		all = all / 10;
	}
}
