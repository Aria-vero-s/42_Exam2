/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaulnie <asaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:16:25 by asaulnie          #+#    #+#             */
/*   Updated: 2024/11/08 17:37:46 by asaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int start, int end)
{
	int	i;
	int	size;
	int	*array;

	if (start <= end)
		size = end - start + 1;
	else
		size = start - end + 1;

	array = malloc(sizeof(int) * size);
	if (!array)
		return (NULL);
	i = 0;
	while (i < size)
	{
		if (start <= end)
			array[i] = start + i;
		else
			array[i] = start - i;
		i++;
	}
	return (array);
}

int	main(void)
{
	int	start = -1;
	int	end = 3;
	int	*array = ft_range(start, end);
	int	i = 0;
	int	size;

	if (start <= end)
		size = end - start + 1;
	else
		size = start - end + 1;
	if (!array)
		return (1);
	while (i < size)
	{
		printf("%d ", array[i]);
		i++;
	}
	free(array);
	return (0);
}
