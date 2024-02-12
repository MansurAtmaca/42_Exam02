#include <stdio.h>
#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}
void	print_bits(unsigned char octet)
{
	int	i;

	i = 7;
	while (i >= 0)
	{
		ft_putchar(((octet >> i) & 1 )+48);
		i--;
	}
}
int	main(void)
{
	print_bits('1');
}
