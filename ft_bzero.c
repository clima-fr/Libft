/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clima-fr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:37:18 by clima-fr          #+#    #+#             */
/*   Updated: 2022/11/22 11:15:48 by clima-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
//#include <stdio.h>
//#include <string.h>
/*int main (void)
{
	char s[] = "oieee";
	char s2[] = "oieee";
	int n = 0;
	printf("String: %s\n", s);
	bzero (s, n);
	printf("Bzero: %s\n", s);
	ft_bzero (s2, n);
	printf("Ft_bzero: %s\n", s2);
}*/
