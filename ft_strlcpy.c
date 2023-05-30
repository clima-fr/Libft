/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clima-fr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:33:46 by clima-fr          #+#    #+#             */
/*   Updated: 2022/11/25 01:45:31 by clima-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	index;
	size_t	count;

	index = 0;
	count = ft_strlen((char *)src);
	if (!dest || !src)
		return (0);
	if (size == 0)
		return (count);
	while (src[index] && (index < size - 1))
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (count);
}
