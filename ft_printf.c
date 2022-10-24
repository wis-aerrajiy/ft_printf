/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrajiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:26:53 by aerrajiy          #+#    #+#             */
/*   Updated: 2022/10/23 20:55:53 by aerrajiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
        count += ft_put_address(1, (long) va_arg(ptr, long));
    if(c == '%')
       count += ft_putchar(1, '%');
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