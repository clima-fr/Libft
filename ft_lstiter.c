/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clima-fr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 20:38:41 by clima-fr          #+#    #+#             */
/*   Updated: 2022/11/25 20:38:58 by clima-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
void f(void *n)
{
	int *num;
	num = (int *)n;
	*num = *num * 2;
}

int      main(void)
{
	t_list *no1 = malloc(sizeof(t_list));
	int n_a = 1;
	no1->content = &n_a;
	no1->next = 0;

	t_list *no2 = malloc(sizeof(t_list));
	int n_b = 3;
	no2->content = &n_b;
	no2->next = 0;
 
	t_list *no3 = malloc(sizeof(t_list));
	int n_c = 4;
	no3->content = &n_c;
	no3->next = 0;
 
	no1->next = no2;
	no2->next = no3;
 
	t_list *cur = no1;
	
	printf("Lista Original:\n");
	while (cur != 0)
	{
		printf("%d\n", *(int *)(cur->content));
		cur = cur->next;
	}
 	
	ft_lstiter(no1, f);
 
 	printf("Lista Atualizada:\n");
	cur = no1;
	while (cur != 0)
	{
		printf("%d\n", *(int *)(cur->content));
		cur = cur->next;
	}
}*/
