/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clima-fr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 12:32:04 by clima-fr          #+#    #+#             */
/*   Updated: 2022/11/23 09:59:58 by clima-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isdigit(int x)
{
	if (x >= '0' && x <= '9')
		return (2048);
	return (0);
}
/*#include <stdio.h>
#include <ctype.h>
int   main(void)
{
        int     x;
        x = '3';
        printf("ft_isdigit: %d ", ft_isdigit(x));
	printf("isdigit: %d \n", isdigit(x));
        return (0);
}*/
