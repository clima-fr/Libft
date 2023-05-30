/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clima-fr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 18:57:46 by clima-fr          #+#    #+#             */
/*   Updated: 2022/11/14 12:45:07 by clima-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *dest, int ch, size_t count)
{
	unsigned char	*memory;
	unsigned int	i;

	i = 0;
	memory = dest;
	while (i < count)
	{
		memory[i] = ch;
		i++;
	}
	return (dest);
}
/*#include <stdio.h>
#include <string.h>
int   main(void)
{
        char    a[] = "This is a test";
        int     x;
        x = 'x';
        printf("ft_memset: %s \n", (char *)ft_memset(a, x, 6));
        printf("memset: %s", (char *)memset(a, x, 6));
        return (0);
}*/
