/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaulnie <asaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 22:42:27 by asaulnie          #+#    #+#             */
/*   Updated: 2024/11/27 22:51:09 by asaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	int				temp;

	i = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i+ 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}
/*
void print_tab(int *tab, unsigned int size)
{
	unsigned int	i;

	i =0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
}

int main(void)
{
	int tab[] = {5, 3, 8, 1, 4, 2, 7, 6};
	unsigned int size = sizeof(tab) / sizeof(tab[0]);
	printf("Avant: ");
	print_tab(tab, size);
	sort_int_tab(tab, size);
	printf("Après: ");
	print_tab(tab, size);
	return (0);
}
*/
