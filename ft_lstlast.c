/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clima-fr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 20:30:50 by clima-fr          #+#    #+#             */
/*   Updated: 2022/11/25 20:31:50 by clima-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst)
	{
		while (lst->next != NULL)
		{
			lst = lst->next;
		}
	}
	else
	{
		return (NULL);
	}
	return (lst);
}
/*int        main()
{
    //Criação dos nós
    t_list *no1;
    no1 = malloc(sizeof(t_list));
    no1->next = NULL;
    no1->content = "Primeiro";
    
    t_list *no2;
    no2 = malloc(sizeof(t_list));
    no2->next = NULL;
    no2->content = "Segundo";
    
    t_list *no3;
    no3 = malloc(sizeof(t_list));
    no3->next = NULL;
    no3->content = "Terceiro";
    
    // Criação da lista encadeada
    no1->next = no2;
    no2->next = no3;
    
    // Impressão do size
    t_list *last;
    last = ft_lstlast(no1);
    printf("Ultimo: %s\n", (char *)last->content);
}*/
