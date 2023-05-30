/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clima-fr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:52:44 by clima-fr          #+#    #+#             */
/*   Updated: 2022/11/14 10:14:52 by clima-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isascii(int x)
{
	if (x >= 0 && x <= 127)
		return (1);
	return (0);
}
/*#include <stdio.h>
#include <ctype.h>
int   main(void)
{
        int     x;
        x = 'a';
        printf("ft_isascii: %d ", ft_isascii(x));
	printf("isascii: %d \n", isascii(x));
        return (0);
}*/
