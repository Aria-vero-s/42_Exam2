/* ************************************************************************** */
/*	                                                                        */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaulnie <asaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:19:38 by asaulnie          #+#    #+#             */
/*   Updated: 2024/10/31 17:30:24 by asaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <limits.h>

// 2x2 4
// 2x2x2 8
// 2x2x2x2 16
// 2x2x2x2x2 32

int	is_power_of_2(unsigned int n)
{
	unsigned int	i;

	i = 2;
	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else if (n > INT_MAX)
		return (0);
	while (i <= n)
	{
		if (i == n)
			return (1);
		i = (i * 2);
	}
	return (0);
}
/*
int	main()
{
	printf("%d\n", is_power_of_2(-3));
	return (0);
}
*/
