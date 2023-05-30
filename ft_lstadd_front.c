/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clima-fr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 20:26:07 by clima-fr          #+#    #+#             */
/*   Updated: 2023/04/21 10:42:56 by clima-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *fst)
{
	if (lst && fst)
	{
		fst->next = *lst;
		*lst = fst;
	}
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
    
    // Criação da lista encadeada
    t_list *head;
    head = no1;
    no1->next = no2;
    
    // Impressão do conteúdo da lista original
    printf("Lista original:\n");
    t_list *current = head;
    while(current != NULL)
    {
        printf("%s\n",(char*)current->content);
        current = current->next;
    }
    
    // Adição de um novo nó no início da lista
    t_list *no_novo;
    no_novo = malloc(sizeof(t_list));
    no_novo->next = NULL;
    no_novo->content = "Novo";
    ft_lstadd_front(&head, no_novo);
    
    // Impressão do conteúdo da lista atualizada
    printf("\nLista atualizada:\n");
    current = head;
    while(current != NULL)
    {
        printf("%s\n",(char*)current->content);
        current = current->next;
    }
}*/
