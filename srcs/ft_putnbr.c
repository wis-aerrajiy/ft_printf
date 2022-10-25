/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrajiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:50:48 by aerrajiy          #+#    #+#             */
/*   Updated: 2022/10/24 17:43:15 by aerrajiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fnc_src.h"
#include <stdio.h>

int	ft_putnbr(int fd, int n)
{
	int	c;

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
		c = n + 48;
		write(fd, &c, 1);
	}

	return (count_digits(n));
}
