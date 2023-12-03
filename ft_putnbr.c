#include "ft_printf.h"

int ft_putnbr(int nb)
{
	int count;

	count = 0;
	unsigned int n;
	if(nb < 0){
		count += ft_putchar('-');
		n = -nb;
	}else {
		n = nb;
	}
	if (n <= 9)
		return count + ft_putchar(n + '0');
	count += ft_putnbr(n / 10);
    return count + ft_putchar(n % 10 + '0');
}