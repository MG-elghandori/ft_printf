#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
    va_list ar;
    int i;
    int len;
    int count = 0;

    len = ft_strlen(format);
    if (format == NULL)
        return (-1);
    va_start(ar, format);
    while (*format)
    {
        if (*format == '%')
        {
            format += 1;
            if (*format == 'c')
                count += ft_putchar((char)va_arg(ar, int));
            else if (*format == 'd' || *format == 'i')
                count += ft_putnbr(va_arg(ar, int));
            else if (*format == 's')
                count += ft_putstr(va_arg(ar, char *));
            else if (*format == 'p')
            {
                count += ft_putstr("0x");
                count += ft_hexadecimal((unsigned long)va_arg(ar, void *));
                
            }else if(*format == 'u')
                count += ft_putnbr(va_arg(ar, unsigned int));
            else
                count += ft_putchar(*format);
        }
        else
            count += ft_putchar(*format);
        format++;
    }
    va_end(ar);
    return count;
}

int main()
{
    //===============c:
    // int a = printf("rslt:%c,%c\n",'t','f');
    // int b = ft_printf("rslt:%c,%c\n",'t','f');
    // printf("\n a = %d\n b = %d\n", a, b);

    //+++++
        // printf("origine :%c\n", '0');//0
        // ft_printf("copy :%c", '0');//0
    //++++
        //  printf("%s\n", NULL);//(null)
        // ft_printf(" %s", NULL);//(null)


    //===============d et i:

    //int a = printf("rslt:%d,%d\n",12,13);
    //int b = ft_printf("rslt:%d,%d\n",12,13);
    //printf("a = %d\n b = %d\n", a, b);

    //++++
        //printf(" %d ", -1); //-1
        //ft_printf(" %d ", -1);//-1
        //ft_printf(" %d ", -10);//-10
        //printf(" %d ", INT_MIN);//-2147483648
        //ft_printf(" %d ", INT_MIN); //-2147483648

    //+++++++cas (ld) pas handle !!
        //ft_printf(" %d ", LONG_MAX);
        // printf(" %ld ", LONG_MAX);
        // ft_printf(" %d ", UINT_MAX);
        // ft_printf(" %d ", ULONG_MAX));
        // t_printf(" %d ", 9223372036854775807LL));
        //  ft_printf(" %d %d %d %d %d %d %d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42));

    //===============s:
        // int a = printf("rslt:%s,%s\n","salut","cv");
        // int b = ft_printf("rslt:%s,%s\n","salut","cv");
        //printf("\n a = %d\n b = %d\n", a, b);

    //===============p :
        // int t1=22;
        // int t2=33;
        // int a = ft_printf("a=rslt:%p,%p\n",&t1,&t2); //0x7ffeeded3a08
        // int b = printf("b=rslt:%p,%p\n",&t1,&t2); //0x7ffeeded3a08
        // printf("\n a = %d\n b = %d\n", a, b);

    //++++cas char :
         // char t1='?';
         // char t2='.';
        // int a = ft_printf("a=rslt:%p,%p\n",&t1,&t2);
        // int b = printf("b=rslt:%p,%p\n",&t1,&t2);
        // printf("\n a = %d\n b = %d\n", a, b);

    //+++cas string :
        // char t1[]="salut";
        // char t2[]="cv";
        // int a = ft_printf("a=rslt:%p,%p\n",&t1,&t2);
        // int b = printf("b=rslt:%p,%p\n",&t1,&t2);
        // printf("\n a = %d\n b = %d\n", a, b);

    //===============u :
        // printf(" %u ", 1);//1
        //ft_printf(" %u ", 1);//1

        //printf(" %u ", -9);//4294967287
        //ft_printf(" %u ", -9);//4294967287

        // printf(" %u ", 0);//0
        // ft_printf(" %u ", 0);//0

        //ft_printf(" %u ", INT_MAX);//2147483647
        //printf(" %u ", INT_MAX);//2147483647

        //ft_printf(" %u ", LONG_MAX);//4294967295
}