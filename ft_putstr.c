#include "ft_printf.h"

int ft_putstr(char *c)
{
	int i;
	i = 0;
	if (!c)
		return ft_putstr("(null)");
	while(c[i])
	{
		write(1,&c[i],1);
		i++;
	}
	return (i);
}