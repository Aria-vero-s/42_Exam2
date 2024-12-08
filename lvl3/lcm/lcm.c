/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaulnie <asaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 15:52:35 by asaulnie          #+#    #+#             */
/*   Updated: 2024/12/08 13:09:50 by asaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <limits.h>

// lcm (lowest common multiple)

// if a = 2
// 1*2, 2*2, 3*2, 4*2 etc
// 2, 4, 6, 8, 10, etc are multiples of 2

// if a = 6
// 1*6, 2*6, 3*6, 4*6 etc
// 6, 12, 18, 24, etc are multiples of 6

// lcm = 6

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	mult_a;
	unsigned int	mult_b;

	mult_a = a;
	mult_b = b;
	if (a == 0 || b == 0)
		return (0);
	else if (a == 1)
		return (b);
	else if (b == 1)
		return (a);
	else if (a > INT_MAX || b > INT_MAX)
		return (0);
	while (mult_a != mult_b)
	{
		if (mult_a < mult_b)
			mult_a = mult_a + a;
		else
			mult_b = mult_b + b;
	}
	return (mult_a);
}
/*
int	main()
{
	printf("%d\n", lcm(3, -1));
	return (0);
}
*/
