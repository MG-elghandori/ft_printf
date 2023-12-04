#ifndef FT_PRINTF_H
# define FT_PRINTF_H
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

int                 ft_printf(const char *str, ...);
size_t				ft_strlen(const char *theString);
int 				ft_putchar(char c);
int 				ft_putnbr(long long n);
int					ft_putstr(char *c);
int					ft_hexadecimal(unsigned long h);
#endif