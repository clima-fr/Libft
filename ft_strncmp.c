/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clima-fr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:35:40 by clima-fr          #+#    #+#             */
/*   Updated: 2022/11/21 21:20:28 by clima-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	int		i;
	size_t	len;

	i = 0;
	len = n;
	if (n == 0)
		return (0);
	while (str1[i] != '\0' && str2[i] != '\0' && len - 1 > 0)
	{
		if (str1[i] == str2[i])
		{
			i++;
			len--;
		}
		else
			break ;
	}
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
/*int main () 
{
   char str1[15] = "abcbaa";
   char str2[15] = "abcabb";
   int x;
   int y;

   x = strncmp(str1, str2, 4);
   y = ft_strncmp(str1, str2, 5);

   if(y < 0) 
   {
      printf("str1 is less than str2");
   } else if(y > 0) 
   {
      printf("str2 is less than str1");
   } else 
   {
      printf("str1 is equal to str2");
   }
   return(0);
}*/
