/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clima-fr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:34:12 by clima-fr          #+#    #+#             */
/*   Updated: 2022/11/21 09:45:58 by clima-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_toupper(int c)
{
	int	x;

	if (c < -1)
		return ((unsigned char)c);
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		x = c;
	return (x);
}
/*int main (void)
{
    char c;
    c = 'm';
    printf("TOUPPER: \n%c -> %c", c, toupper(c));

    c = 'D';
    printf("\n%c -> %c", c, toupper(c));

    c = '9';
    printf("\n%c -> %c\n", c, toupper(c));
    
    c = 'm';
    printf("FT_TOUPPER: \n%c -> %c", c, ft_toupper(c));

    c = 'D';
    printf("\n%c -> %c", c, ft_toupper(c));

    c = '9';
    printf("\n%c -> %c", c, ft_toupper(c));

    return 0;
}*/
