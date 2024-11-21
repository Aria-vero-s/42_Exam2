/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaulnie <asaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:46:30 by asaulnie          #+#    #+#             */
/*   Updated: 2024/11/08 16:46:50 by asaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

typedef struct	s_list
{
	struct s_list	*next;
	void		*data;
}			 t_list;

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *curr = *begin_list;
	t_list *to_remove;

	if(!(*begin_list))
		return;

	while(curr && cmp(curr->data, data_ref)== 0)
	{
		to_remove = curr;
		curr = curr->next;
		*begin_list = curr;
		free(to_remove);
	}
	while(curr)
	{
		if (curr->next && cmp(curr->next->data, data_ref)== 0)
		{
			to_remove = curr->next;
			curr->next = curr->next->next;
			free(to_remove);
		}
		else
			curr = curr->next;
	}
}
