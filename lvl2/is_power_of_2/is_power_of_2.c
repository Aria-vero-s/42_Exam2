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

// 2x2 4
// 2x2x2 8
// 2x2x2x2 16
// 2x2x2x2x2 32

int	is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n % 2 == 0)
	{
		n = n / 2;
	}
	if (n == 1)
		return (1);
	else
		return (0);

}
/*
int	main(void)
{
	int	i;

	i = 0;
	while (i <= 128)
	{
		printf("n: %d = res: %d\n", i, is_power_of_2(i));
		i++;
	}
	return (0);
}
*/
