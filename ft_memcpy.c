/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clima-fr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 09:47:58 by clima-fr          #+#    #+#             */
/*   Updated: 2022/11/16 10:24:41 by clima-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*destiny;
	char	*source;
	size_t	index;

	index = 0;
	destiny = (char *)dest;
	source = (char *)src;
	if (destiny == NULL && source == NULL)
	{
		return (0);
	}
	while (index < n)
	{
		destiny[index] = source[index];
		index++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int main () 
{
   const char src1[] = "oi funciona ae";
   char dest1[50];
   const char src2[] = "oi funciona ae";
   char dest2[50];
   ft_memcpy(dest1, src1, strlen(src1)+1);
   printf("ft_memcpy: %s\n", dest1);
   memcpy(dest2, src2, strlen(src2)+1);
   printf("memcpy: %s\n", dest2);
   return(0);
}*/
