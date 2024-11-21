/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaulnie <asaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 13:21:22 by asaulnie          #+#    #+#             */
/*   Updated: 2024/11/21 13:24:07 by asaulnie         ###   ########.fr       */
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

int *ft_rrange(int start, int end)
{
	int	i;
	int	len;
	int	*res;

	i = 0;
	len = ft_abs(start, end);
	res = (int *)malloc(sizeof(int) * len);
	if(!res)
		return(NULL);
	while (i < len)
	{
		if (start < end)
		{
			res[i] = end;
			end--;
			i++;
		}
		else
		{
			res[i] = end;
			end++;
			i++;
		}
	}
	return (res);
}
