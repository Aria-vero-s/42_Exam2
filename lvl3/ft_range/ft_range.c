/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaulnie <asaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 13:21:40 by asaulnie          #+#    #+#             */
/*   Updated: 2024/12/10 19:17:45 by asaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_abs(int start, int end)
{
	if(start < end)
		return((end - start) + 1);
	else
		return((start - end) + 1);
}

int *ft_range(int start, int end)
{
	int	i;
	int	len;
	int	*res;

	i = 0;
	len = 
	len = ft_abs(start, end);
	res = (int *)malloc(sizeof(int) * len);
	while (i < len)
	{
		if (start < end)
		{
			res[i] = start;
			start++;
			i++;
		}
		else
		{
			res[i] = start;
			start--;
			i++;
		}
	}
	return (res);
}
