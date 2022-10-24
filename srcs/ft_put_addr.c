/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_addr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrajiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:51:36 by aerrajiy          #+#    #+#             */
/*   Updated: 2022/10/23 20:50:46 by aerrajiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fnc_src.h"

int ft_put_address(int fd, unsigned long int n)
{
    int count;

    count = 0;
    write(fd, "0x", 2);
    count = ft_put_hex(1, 'x', n);
    return (count + 2);
}