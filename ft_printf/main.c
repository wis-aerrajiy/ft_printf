/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrajiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:18:40 by aerrajiy          #+#    #+#             */
/*   Updated: 2022/10/23 00:06:01 by aerrajiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
 
int main()
{
    int value = 671976798;
    printf("Decimal value is: %d\n",value);
    printf("Octal value is: %o\n",value);
    printf("Hexadecimal value is (Alphabet in small letters): %x\n",value);
    printf("Hexadecimal value is (Alphabet in capital letters): %X\n",value);
    return 0;   
}