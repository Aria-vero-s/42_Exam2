/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaulnie <asaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 22:35:49 by asaulnie          #+#    #+#             */
/*   Updated: 2024/11/27 22:48:08 by asaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while (begin_list)
	{
		(*f)(begin_list->data);
		begin_list = begin_list->next;
	}
}
/*
void print_data(void *data)
{
	printf("%s\n", (char *)data);
}

int main()
{
	t_list *list = malloc(sizeof(t_list));
	list->data = "Hello";
	list->next = malloc(sizeof(t_list));
	list->next->data = "World";
	list->next->next = malloc(sizeof(t_list));
	list->next->next->data = "Foo";
	list->next->next->next = malloc(sizeof(t_list));
	list->next->next->next->data = "Bar";
	list->next->next->next->next = NULL;
	ft_list_foreach(list, print_data);
	t_list *temp;
	while (list)
	{
		temp = list;
		list = list->next;
		free(temp);
	}
	return (0);
}
*/
