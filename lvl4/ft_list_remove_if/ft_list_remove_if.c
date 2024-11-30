#include <stdlib.h>
#include <stdio.h>

typedef struct s_list
{
	struct s_list	*next;
	void			*data;
}	t_list;

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*current;
	t_list	*previous;
	t_list	*to_free;

	current = *begin_list;
	previous = NULL;
	if (current == NULL)
		return ;
	while (current != NULL)
	{
		if (cmp(current->data, data_ref) == 0)
		{
			if (previous == NULL)
				*begin_list = current->next;
			else
				previous->next = current->next;
			to_free = current;
			current = current->next;
			free(to_free);
		}
		else
		{
			previous = current;
			current = current->next;
		}
	}
}

int	cmp(void *data1, void *data2)
{
	if (data1 == data2)
		return (0);
	return (1);
}
/*
int	main(void)
{
	t_list	*ptr;
	t_list	*ptr2;
	t_list	*ptr3;
	t_list	*current;
	t_list	**begin_list;

	ptr = malloc(sizeof(t_list));
	ptr2 = malloc(sizeof(t_list));
	ptr3 = malloc(sizeof(t_list));

	ptr->data = (void *)"test1";
	ptr->next = ptr2;
	ptr2->data = (void *)"test2";
	ptr2->next = ptr3;
	ptr3->data = (void *)"test3";
	ptr3->next = NULL;

	current = ptr;
	while (current != NULL)
	{
		printf("Data avant : %s\n", (char *)current->data);
		current = current->next;
	}
	begin_list = &ptr;
	ft_list_remove_if(begin_list, "test1", cmp);
	current = *begin_list;
	while (current != NULL)
	{
		printf("Data apres: %s\n", (char *)current->data);
		current = current->next;
	}
	return (0);
}
*/
