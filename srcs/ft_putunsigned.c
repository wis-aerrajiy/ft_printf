/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrajiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:51:21 by aerrajiy          #+#    #+#             */
/*   Updated: 2022/10/23 20:54:33 by aerrajiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fnc_src.h"
int count_digits(long n)
{
	int i;
	i = 0;
	if(n < 0)
	{
		n = -n;
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
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
    return (count_digits(n));
}