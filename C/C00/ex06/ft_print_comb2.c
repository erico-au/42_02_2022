
#include <unistd.h>

void	ft_print_comb2(void)
{
	char n[5];

	n[0] = '0' - 1;
	n[2] = ' ';
	while (n[0]++ < '9') //X0 00
	{
		n[1] = '0' - 1;
		n[3] = n[0] - 1;
		n[4] = n[1] + 1;
		while (n[1]++ < '9') // 0X 00
		{
			while (n[3]++ < '9') // 00 X0
			{
				while (n[4]++ < '9') // 00 0X
				{
					write(1, &n, 5);
					if (n[0] != '9' || n[1] != '8')
						write(1, ", ", 2);
				}
				n[4] = '0' - 1;
			}
			n[3] = n[0] - 1;
			n[4] = n[1] + 1;
		}
	}
}