#ifndef FT_PRINTF_H
# define FT_PRINTF_H
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

int                 ft_printf(const char *str, ...);
size_t				ft_strlen(const char *theString);
int 				ft_putchar(char c);
int 				ft_putnbr(int nb);
int					ft_putstr(char *c);
#endif