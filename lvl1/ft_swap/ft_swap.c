/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaulnie <asaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:47:37 by asaulnie          #+#    #+#             */
/*   Updated: 2024/11/21 13:33:42 by asaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main(void)
{
	int	a_number;
	int	b_number;
	int	*a;
	int	*b;

	a_number = 42;
	b_number = 24;
	a = &a_number;
	b = &b_number;
	printf("%d\n", *a);
	printf("%d\n", *b);
	ft_swap(a, b);
	printf("%d\n", *a);
	printf("%d\n", *b);
	return (0);
}
*/
