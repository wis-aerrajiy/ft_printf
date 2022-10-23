/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrajiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:26:53 by aerrajiy          #+#    #+#             */
/*   Updated: 2022/10/23 02:33:26 by aerrajiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

int ft_putchar(int fd, char c)
{
    write(fd, &c, 1);
    return (1);
} 

int ft_putstr(int fd, char *s)
{
	int	i;
	i = 0;
	while (s[i])
        write(fd, &s[i++], 1);
    return (i);
}

int ft_putnbr(int fd, int n)
{
	if (n == INT_MIN)
		write(fd, "-2147483648", 11);
	else if (n < 0)
	{
		write(fd, "-", 1);
		ft_putnbr(fd, (n * -1));
	}
	else if (n > 9)
	{
		ft_putnbr(fd, (n / 10));
		ft_putnbr(fd, (n % 10));
	}
	else
	{
		n += 48;
		write(fd, &n, 1);
	}
    return (1);
}

int ft_put_hex(int fd, char base, int c)
{
    char *hex = "0123456789ABCDEF";
    if(base == 'x')
        hex = "0123456789abcdef";
    if (c >= 16)
        ft_put_hex(fd, base, c / 16);
    ft_putchar(fd, hex[c % 16]);
     return(1);
}

int ft_putunsigned(int fd, unsigned int n)
{
	if (n < 0)
	{
		write(fd, "-", 1);
		ft_putnbr(fd, (n * -1));
	}
	else if (n > 9)
	{
		ft_putnbr(fd, (n / 10));
		ft_putnbr(fd, (n % 10));
	}
	else
	{
		n += 48;
		write(fd, &n, 1);
	}
    return (1);
}

int show(va_list ptr, char c)
{
    int count;
    count = 0;
    if(c == 'c')
        count += ft_putchar(1, va_arg(ptr, int));
    if(c == 's')
        count += ft_putstr(1, va_arg(ptr, char *));
    if(c == 'd' || c == 'i')
        count += ft_putnbr(1, va_arg(ptr, int));
    if(c == 'u')
       count += ft_putunsigned(1, va_arg(ptr, unsigned));
    if(c == 'x' || c == 'X')
       count += ft_put_hex(1, c, va_arg(ptr, int));
    if(c == 'p')
       // (va_arg(ptr, int));
    if(c == '%')
       ft_putchar(1, '%');
    return (count);
}

int ft_printf(char *str, ...)
{
    va_list ptr;
    int i;
    i = 0;
    va_start(ptr, str);

    while (str[i])
    {
        if (str[i] == '%')
        {
            show(ptr, str[i + 1]);
            i++;
        }
        else
            ft_putchar(1, str[i]);
        i++;
    }
    return (i);
}

#include <stdlib.h>

int main()
{
    char *x;
    x = malloc(5);
    //ft_put_hex(1, 'x', 2548);
    ft_printf("test 1 => %s\ntest 2 => %x\ntest 3 => %c", "ayman", x, 'b');
}