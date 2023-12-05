/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-gha <moel-gha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 11:40:47 by moel-gha          #+#    #+#             */
/*   Updated: 2023/12/04 13:12:59 by moel-gha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	handle_format(char format, va_list ar)
{
	int	count;

	count = 0;
	if (format == 'c')
		count += ft_putchar((char)va_arg(ar, int));
	else if (format == 'd' || format == 'i')
		count += ft_putnbr(va_arg(ar, int));
	else if (format == 's')
		count += ft_putstr(va_arg(ar, char *));
	else if (format == 'p')
	{
		count += ft_putstr("0x");
		count += ft_hexadecimal((unsigned long)va_arg(ar, void *), 0);
	}
	else if (format == 'u')
		count += ft_putnbr(va_arg(ar, unsigned int));
	else if (format == 'x')
		count += ft_hexadecimal((unsigned int)va_arg(ar, void *), 0);
	else if (format == 'X')
		count += ft_hexadecimal((unsigned int)va_arg(ar, void *), 1);
	else
		count += ft_putchar(format);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ar;
	int		count;

	count = 0;
	va_start(ar, format);
	while (*format)
	{
		if (*format == '%' && *(format + 1) != '\0')
		{
			format += 1;
			count += handle_format(*format, ar);
		}
		else if (*format != '%')
			count += ft_putchar(*format);
		format++;
	}
	va_end(ar);
	return (count);
}
