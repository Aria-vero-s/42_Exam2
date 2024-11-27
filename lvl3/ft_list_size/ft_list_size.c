/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaulnie <asaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:47:34 by asaulnie          #+#    #+#             */
/*   Updated: 2024/11/25 20:58:36 by asaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

typedef struct s_list
{
	struct s_list	*next;
	void			*data;
}				t_list;

int	ft_list_size(t_list *begin_list)
{
	int	i;

	i = 0;
	while (begin_list)
	{
		i++;
		begin_list = begin_list->next;
	}
	return (i);
}

/*
int main(void)
{
	int		result;
	t_list	*element;
	t_list	*element1;
	t_list	*element2;

	element = malloc(sizeof(t_list));
	element1 = malloc(sizeof(t_list));
	element2 = malloc(sizeof(t_list));
	if (!element || !element1 || !element2)
		return (1);
	element->next = element1;
	element1->next = element2;
	element2->next = NULL;
	result = ft_list_size(element);
	printf("result: %d\n", result);
	free(element);
	free(element1);
	free(element2);
	return (0);
}
*/
