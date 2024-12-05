/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaulnie <asaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 22:42:27 by asaulnie          #+#    #+#             */
/*   Updated: 2024/12/05 19:50:34 by asaulnie         ###   ########.fr       */
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
int main(void)
{
	int				tab[] = {5, -3, 8, 1, 4, 2, 7, 6, 11};
	unsigned int	size;
	unsigned int	i;

	size = 9;
	i = 0;
	sort_int_tab(tab, size);
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	return (0);
}
*/
