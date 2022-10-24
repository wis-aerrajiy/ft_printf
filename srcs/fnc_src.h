/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fnc_src.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrajiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:52:26 by aerrajiy          #+#    #+#             */
/*   Updated: 2022/10/23 20:53:23 by aerrajiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FNC_SRC_H
# define FNC_SRC_H

# include <limits.h>
# include <unistd.h>

int ft_put_address(int fd, unsigned long int n);
int ft_put_hex(int fd, char base, unsigned long int c);
int ft_putnbr(int fd, int n);
int ft_putunsigned(int fd, unsigned int n);
int ft_putchar(int fd, char c);
int ft_putstr(int fd, char *str);
int count_digits(int n);
size_t ft_strlen(const char *s);

#endif