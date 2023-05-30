/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clima-fr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:36:22 by clima-fr          #+#    #+#             */
/*   Updated: 2022/11/22 09:12:30 by clima-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char		*str1p;
	const unsigned char		*str2p;
	int						i;

	str1p = (unsigned char *)str1;
	str2p = (unsigned char *)str2;
	i = 0;
	while (n > 0)
	{
		if (str1p[i] != str2p[i])
			return (str1p[i] - str2p[i]);
		i++;
		n--;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
   int main () {
   char str1[15] = "abcdef";
   char str2[15] = "abcdefq";
   int x;
   int y;

   x = memcmp(str1, str2, 5);
   y = ft_memcmp(str1, str2, 5);

   if(x > 0) {
      printf("MEMCMP: str2 is less than str1\n");
   } else if(x < 0) {
      printf("MEMCMP: str1 is less than str2\n");
   } else {
      printf("MEMCMP: str1 is equal to str2\n");
   }
   if(y > 0) {
      printf("FT_MEMCMP: str2 is less than str1");
   } else if(y < 0) {
      printf("FT_MEMCMP: str1 is less than str2");
   } else {
      printf("FT_MEMCMP: str1 is equal to str2");
   }

   
   return(0);
}*/
