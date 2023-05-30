/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clima-fr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:34:34 by clima-fr          #+#    #+#             */
/*   Updated: 2022/11/21 09:56:18 by clima-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_tolower(int c)
{
	int	x;

	if (c < -1)
		return ((unsigned char)c);
	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		x = c;
	return (x);
}
/*int main (void)
{
    char c;
    c = 'M';
    printf("TOLOWER: \n%c -> %c", c, tolower(c));

    c = 'd';
    printf("\n%c -> %c", c, tolower(c));

    c = '9';
    printf("\n%c -> %c\n", c, tolower(c));
    
    c = 'M';
    printf("FT_TOLOWER: \n%c -> %c", c, ft_tolower(c));

    c = 'd';
    printf("\n%c -> %c", c, ft_tolower(c));

    c = '9';
    printf("\n%c -> %c", c, ft_tolower(c));

    return 0;
}*/
