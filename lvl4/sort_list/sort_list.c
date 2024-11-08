/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaulnie <asaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:34:03 by asaulnie          #+#    #+#             */
/*   Updated: 2024/11/08 16:45:04 by asaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include "sort_list.list.h"
#include <stdio.h>
#include <stdlib.h>

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list	*sorted = NULL;
	t_list	*current = lst;

	while (current != NULL)
	{
		t_list *next = current->next;
		if (sorted == NULL || cmp(current->data, sorted->data))
		{
			current->next = sorted;
			sorted = current;
		}
		else
		{
			t_list *temp = sorted;
			while (temp->next != NULL && !cmp(current->data, temp->next->data))
				temp = temp->next;
			current->next = temp->next;
			temp->next = current;
		}
		current = next;
	}
	return (sorted);
}


int ascending(int a, int b)
{
	return a <= b;
}

t_list *create_node(int data)
{
	t_list *new_node = malloc(sizeof(t_list));
	if (!new_node)
		return NULL;
	new_node->data = data;
	new_node->next = NULL;
	return (new_node);
}

void print_list(t_list *lst)
{
	t_list *current = lst;
	while (current != NULL)
	{
		printf("%d -> ", current->data);
		current = current->next;
	}
	printf("NULL\n");
}

int main(void)
{
	t_list *lst = create_node(4);
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
		t_list *temp = lst;
		lst = lst->next;
		free(temp);
	}

	return (0);
}
