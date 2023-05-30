/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clima-fr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:38:05 by clima-fr          #+#    #+#             */
/*   Updated: 2022/11/23 09:59:30 by clima-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalpha(int x)
{
	if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
		return (1024);
	return (0);
}
/*#include <stdio.h>
#include <ctype.h>
int   main(void)
{
        int     x;
        x = 'a';
        printf("ft_isalpha: %d ", ft_isalpha(x));
	printf("isalpha: %d \n", isalpha(x));
        return (0);
}*/
