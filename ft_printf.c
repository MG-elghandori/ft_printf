#include "ft_printf.h"

int     ft_printf(const char *str, ...)
{
    va_list ar;
    int     i;
    int     len;

    i = 0;
    len = ft_strlen(str);
    va_start(ar,str);
    while (i < len)
    {
        if(str[i] == '%')
        {
            i+=1;
            if(str[i]=='d')
            {
                printf("%d\n",va_arg(ar,int));
            }else if(str[i]=='c')
            {
                printf("%c\n",(char)va_arg(ar,int));
            }
            else if(str[i]=='f')
            {
                printf("%f\n",va_arg(ar,int));
            }
        }else {
            printf("%c",str[i]);
        }
        i++;
    }
    
    va_end(ar);
}

// int main()
// {
//     ft_printf("rslt %d",12);
// }