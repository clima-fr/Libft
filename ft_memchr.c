/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clima-fr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:36:03 by clima-fr          #+#    #+#             */
/*   Updated: 2022/11/22 08:42:44 by clima-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char		*str2;
	int					i;

	str2 = (unsigned char *)str;
	i = 0;
	while (n > 0)
	{
		if (str2[i] == (unsigned char)c)
			return (str2 + i);
		i++;
		n--;
	}
	return (NULL);
}

/*int main () {
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = 'a';
   char *x;
   char *y;

   x = memchr(str, ch, 29);
   y = ft_memchr(str, ch, 29);
   printf("String after |%c| is - |%s|\n", ch, x);
   printf("String after |%c| is - |%s|\n", ch, y);

   return(0);
}*/
