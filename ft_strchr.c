/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clima-fr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:34:48 by clima-fr          #+#    #+#             */
/*   Updated: 2022/11/23 11:00:23 by clima-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*new_str;

	i = 0;
	new_str = (char *)str;
	while (str[i] != c)
	{
		if (str[i] == '\0')
			return (NULL);
		i++;
		new_str++;
	}
	return (new_str);
}
/*#include <stdio.h>
#include <string.h>
int main (void)
{
	char str[13] = "oi teste lala";
	printf("%s\n", ft_strchr(str, 'e'));
	printf("%s", strchr(str, 'e'));
}*/
