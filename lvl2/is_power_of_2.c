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

#include <stdio.h>

int	is_power_of_2(unsigned int n)
{
	int	temp;

	temp = n & (n - 1);
	if (temp == 0)
		return (1);
	else
		return (0);
}

int	main(void)
{
	int	n;

	n = is_power_of_2(7);
	printf("%d\n", n);
	return (0);
}
