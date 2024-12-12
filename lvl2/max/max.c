/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaulnie <asaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:49:19 by asaulnie          #+#    #+#             */
/*   Updated: 2024/12/12 11:19:46 by asaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	max(int* tab, unsigned int len)
{
	unsigned int	i;
	int	max;

	i = 0;
	max = 0;
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
	int	tab[] = {0};
	int	len = 1;
	printf("%d\n", max(tab, len));
	return (0);
}
*/
