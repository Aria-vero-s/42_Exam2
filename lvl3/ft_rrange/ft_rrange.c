/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaulnie <asaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 13:21:22 by asaulnie          #+#    #+#             */
/*   Updated: 2024/11/23 21:23:15 by asaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int ft_abs(int start, int end)
{
	if (start < end)
		return ((end - start) + 1);
	else
		return ((start - end) + 1);
}

int *ft_rrange(int start, int end)
{
	int	i;
	int	len;
	int	*res;

	i = 0;
	len = ft_abs(start, end);
	res = (int *)malloc(sizeof(int) * len);
	if (!res)
		return (NULL);
	while (i < len)
	{
		if (start < end)
		{
			res[i] = end;
			end--;
		}
		else
		{
			res[i] = end;
			end++;
		}
		i++;
	}
	return (res);
}
/*
int	main(int argc, char **argv)
{
	int	start;
	int	end;
	int	*range;
	int	len;
	int	i;

	if (argc != 3)
		return (1);
	start = atoi(argv[1]);
	end = atoi(argv[2]);
	range = ft_rrange(start, end);
	if (!range)
		return (1);
	len = ft_abs(start, end);
	i = 0;
	while (i < len)
	{
		printf("%d ", range[i]);
		i++;
	}
	write(1, "\n", 1);
	free(range);
	return (0);
}
*/
