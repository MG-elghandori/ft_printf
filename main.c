// int main()
// {

//ft_printf("salut" "cv");//salutcv
//++++++
//ft_printf(NULL);//segmentation fault
//printf(NULL); //segmentation fault
//++++++
//printf("%b");//b
//ft_printf("%b");//b
//++++++
//printf("%ba");//ba
//ft_printf("%ba");//ba
//++++++
//printf("%"); //vide
//ft_printf("%");//vide

//  int a =printf("%");
//  int b =printf("%");
//  printf("a = %d\n b = %d\n", a, b); //0 // 0

//++++++
    //printf ("-%d-\n", ft_printf("%%%"));//%-1-%                                          
    //printf("-%d-", printf("%%%"));//%-1-%
//+++++
    //printf("%d\n", ft_printf("abcdef%"));//abcdef6
    //printf("%d\n", printf("abcdef%"));//abcdef6
//+++++
    //printf("%d\n", ft_printf("abcdef%s"));
    //printf("%d\n", printf("abcdef%s"));
//===============c:
// int a = printf("rslt:%c,%c\n",'t','f');
// int b = ft_printf("rslt:%c,%c\n",'t','f');
// printf("\n a = %d\n b = %d\n", a, b);

//+++++
// printf("origine :%c\n", '0');//0
// ft_printf("copy :%c", '0');//0
//+++++
//printf("origine :%c\n", 65);//A
//ft_printf("copy :%c", 65);//A
//++++
//  printf("%s\n", NULL);//(null)
// ft_printf(" %s", NULL);//(null)

//===============d et i:

//int a = printf("rslt:%d,%d\n",12,13);
//int b = ft_printf("rslt:%d,%d\n",12,13);
//printf("a = %d\n b = %d\n", a, b);

//+++++++
//printf(" %d ", -1); //-1
//ft_printf(" %d ", -1);//-1
//ft_printf(" %d ", -10);//-10
//printf(" %d ", INT_MIN);//-2147483648
//ft_printf(" %d ", INT_MIN); //-2147483648

//+++++++
//printf("%i", 'A');//65
//ft_printf("%i", 'A');//65

//+++++++cas (ld) pas handle !!
//ft_printf(" %d ", LONG_MAX);
// printf(" %ld ", LONG_MAX);
// ft_printf(" %d ", UINT_MAX);
// ft_printf(" %d ", ULONG_MAX));
// t_printf(" %d ", 9223372036854775807LL));
//  ft_printf(" %d %d %d %d %d %d %d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN,ULONG_MAX, 0, -42));

//===============s:
// int a = printf("rslt:%s,%s\n","salut","cv");
// int b = ft_printf("rslt:%s,%s\n","salut","cv");
//printf("\n a = %d\n b = %d\n", a, b);
//++++++++cas non correger
//ft_printf("%s@%s", "cv");
// printf("%s@%s", "cv");

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

//===============x (pour afficher un entier non signé (unsigned integer) en hexadecimal (base 16)) :

//printf("origin %x ", 1);//1
//ft_printf(" copy %x ", 1);//1

//printf("origin %x ", 255);//ff
//ft_printf(" copy %x ", 255);//ff

//printf("origin %x ", 258);//102
//ft_printf(" copy %x ", 258);//102

// printf("origin %x ", -1);//ffffffff
// ft_printf(" copy %x ", -1);//ffffffff

//printf("origin %x ", -2);//fffffffe
//ft_printf(" copy %x ", -2);//fffffffe

//ft_printf("copy%x ", -10);//copyfffffff6
//printf("origin%x ", -10);//copyfffffff6
// ft_printf(" %x ", -99);//ffffff9d
// ft_printf(" %x ", -101);//ffffff9b
// ft_printf(" %x ", INT_MIN);//80000000
// ft_printf(" %x ", LONG_MAX);//ffffffff
// }
// printf("abcd%")
