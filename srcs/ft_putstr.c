/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrajiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:50:31 by aerrajiy          #+#    #+#             */
/*   Updated: 2022/10/24 17:13:23 by aerrajiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fnc_src.h"

int	ft_putstr(int fd, char *s)
{
	int	i;
	if(!s)
		return (ft_putstr(fd, "(null)"));
	i = 0;
	while (s[i])
		write(fd, &s[i++], 1);
	return (ft_strlen(s));
}
