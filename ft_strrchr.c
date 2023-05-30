/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clima-fr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:35:08 by clima-fr          #+#    #+#             */
/*   Updated: 2022/11/22 21:48:13 by clima-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*last;

	last = 0;
	if (c == '\0')
		return ((char *)str + ft_strlen(str));
	while (*str)
	{
		if (*str == c)
		{
			last = ((char *)str);
		}
		str++;
	}
	return (last);
}
/*int		main()
{
	char a[] = "Olua, quem faula?";
	char b = 'u';

	char c[] = "Olua, quem faula?";
	char d = 'u';

	printf("%s\n", strrchr(a, b));

	printf("\n%s\n", ft_strrchr(c, d));

	return (0);
}*/
