/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clima-fr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 13:01:42 by clima-fr          #+#    #+#             */
/*   Updated: 2022/11/23 10:04:59 by clima-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(int x)
{
	if (ft_isalpha(x) || ft_isdigit(x))
		return (1);
	return (0);
}
/*#include <stdio.h>
#include <ctype.h>
int   main(void)
{
	int x = '3';
        printf("FT_ISALNUM: %d\n", isprint(x));
	printf("ISALNUM: %d\n", isprint(x));
}*/
