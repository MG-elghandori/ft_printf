#include "ft_printf.h"

int     ft_printf(const char *format, ...)
{
    va_list ar;
    int     i;
    int     len;

    i = 0;
    int count = 0;
    len = ft_strlen(format);

    va_start(ar,format);
    while (i < len)
    {
        if(format[i] == '%')
        {
            i+=1;
            if(format[i]=='c')
                count+=ft_putchar((char)va_arg(ar,int));
            else if(format[i]=='d' || format[i]=='i')
                count += ft_putnbr(va_arg(ar,int));
            else if(format[i]=='s')
                count += ft_putstr(va_arg(ar,char *));
        }
        else 
            count += ft_putchar(format[i]);
        i++;
    }
    va_end(ar);
    return count;
}

int main()
{
    // int a = printf("rslt:%s,%s\n","salut","cv");
    // int b = ft_printf("rslt:%s,%s\n","salut","cv");

    //int a = printf("a=rslt:%d,%d\n",11,12);
    //int b = ft_printf("b=rslt:%d,%d",11,12);
    
    //printf("\n a = %d\n b = %d\n", a, b);
}