/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaulnie <asaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:57:05 by asaulnie          #+#    #+#             */
/*   Updated: 2024/11/08 18:10:35 by asaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "list.h"

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	int		swap;
	t_list	*start;

	start = lst;
	while (lst != NULL && lst->next != NULL)
	{
		if ((*cmp)(lst->data, lst->next->data) == 0)
		{
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			lst = start;
		}
		else
			lst = lst->next;
	}
	return (start);
}

/*
int	ascending(int a, int b)
{
	return (a <= b);
}

t_list	*create_node(int data)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->data = data;
	new_node->next = NULL;
	return (new_node);
}

void	print_list(t_list *lst)
{
	t_list	*current;

	current = lst;
	while (current != NULL)
	{
		printf("%d -> ", current->data);
		current = current->next;
	}
	printf("NULL\n");
}

int	main(void)
{
	t_list	*lst;
	t_list	*temp;

	lst = create_node(4);
	lst->next = create_node(2);
	lst->next->next = create_node(3);
	lst->next->next->next = create_node(1);
	printf("Original list: ");
	print_list(lst);
	lst = sort_list(lst, ascending);
	printf("Sorted list: ");
	print_list(lst);
	while (lst != NULL)
	{
		temp = lst;
		lst = lst->next;
		free(temp);
	}
	return (0);
}
*/
