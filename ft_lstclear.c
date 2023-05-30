/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clima-fr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 20:37:12 by clima-fr          #+#    #+#             */
/*   Updated: 2022/11/25 20:37:25 by clima-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*void    del(void *content)
{
    free(content);
}*/

/*void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst)
	{
		del(lst->content);
		free(lst);
	}
}*/

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	if (!lst)
		return ;
	current = *lst;
	while (current != NULL)
	{
		next = current->next;
		ft_lstdelone(current, del);
		current = next;
	}
	*lst = NULL;
}

/*int main()
{
    // Criação dos nós
    t_list *no1 = malloc(sizeof(t_list));
    no1->next = NULL;
    no1->content = malloc(sizeof(int));
    *(int *)(no1->content) = 10;

    t_list *no2 = malloc(sizeof(t_list));
    no2->next = NULL;
    no2->content = malloc(sizeof(int));
    *(int *)(no2->content) = 20;

    t_list *no3 = malloc(sizeof(t_list));
    no3->next = NULL;
    no3->content = malloc(sizeof(int));
    *(int *)(no3->content) = 30;
    
    t_list *no4 = malloc(sizeof(t_list));
    no4->next = NULL;
    no4->content = malloc(sizeof(int));
    *(int *)(no4->content) = 40;

    // Criação da lista encadeada
    no1->next = no2;
    no2->next = no3;
    no3->next = no4;

    // Impressão do conteúdo da lista original
    printf("Lista original:\n");
    t_list *current = no1;
    while (current != NULL)
    {
        printf("%d\n", *(int *)(current->content));
        current = current->next;
    }

    ft_lstclear(&no3, del); // OU ft_lstclear(&(no2->next), del)
    no2->next = NULL;

    // Impressão do conteúdo da lista atualizada
    printf("\nLista atualizada:\n");
    current = no1;
    while (current != NULL)
    {
        printf("%d\n", *(int *)(current->content));
        current = current->next;
    }
    return (0);
}*/
