/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaulnie <asaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:49:19 by asaulnie          #+#    #+#             */
/*   Updated: 2024/11/21 15:40:49 by asaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	max(int *tab, unsigned int len)
{
	int	max;
	int	i;

	i = 1;
	if (len == 0)
		return (0);
	max = tab[0];
	while (i < len)
	{
		if (max < tab[i])
			max = tab[i];
		i++;
	}
	return (max);
}
/*
int	main(void)
{
	int	*array;

	array = malloc(4 * sizeof(int));
	array[0] = 6;
	array[1] = 5;
	array[2] = 2;
	array[3] = 8;
	printf("the max int is:%d\n", max(array, 4));
	return (0);
}
*/
