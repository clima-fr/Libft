/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clima-fr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:37:14 by clima-fr          #+#    #+#             */
/*   Updated: 2022/11/23 11:29:23 by clima-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = malloc(count * size);
	if (p == 0)
		return (p);
	ft_bzero(p, count * size);
	return (p);
}
/*#include <stdio.h>
int main () {
   int i;
   int *a;

   a = (int*)ft_calloc(4, sizeof(int));

   for( i=0 ; i < 4 ; i++ ) {
      a[i] = i + 3;
   }

   printf("The numbers entered are: ");
   for( i=0 ; i < 4 ; i++ ) {
      printf("%p\n",&a[i]);
   }
   free(a);

   return(0);
}*/
