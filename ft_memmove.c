/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clima-fr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 10:28:16 by clima-fr          #+#    #+#             */
/*   Updated: 2022/11/21 08:07:00 by clima-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!dest && !src)
		return (NULL);
	if (src < dest)
	{
		while (n--)
		{
			((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
		}
	}
	else if (src > dest)
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}
/*#include <stdio.h>
#include <string.h>
int		main()
{
	char dest1[] = "Infelizmente faleceu.";
	char src[] = "Não sei se ele ainda canta.";

	//printf("\n%s \n", dest1);
	//ft_memmove(dest1, src, 35);
	//printf("%s\n", dest1);

	printf("\n%s \n", dest1);
	ft_memmove(dest1, src, 20);
	printf("%s\n", dest1);
}*/
