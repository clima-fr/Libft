/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clima-fr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:47:41 by clima-fr          #+#    #+#             */
/*   Updated: 2022/11/21 09:07:06 by clima-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	index;

	index = 0;
	while (str[index] != '\0')
	{	
		index++;
	}
	return (index);
}
/*#include <stdio.h>
int main (void)
{
	char str[] = "bla bla";
	printf("ft_strlen: %zu", ft_strlen(str));
}*/
