/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaulnie <asaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:02:13 by asaulnie          #+#    #+#             */
/*   Updated: 2024/12/05 15:22:35 by asaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned char reverse_bits(unsigned char octet)
{
	unsigned char	rev;
	int				i;

	rev = 0;
	i = 0;
	while (i < 8)
	{
		rev = (rev << 1) | (octet & 1);
		octet = octet >> 1;
		i++;
	}

	return (rev);
}
/*
int main(void)
{
	unsigned char	result;
	int				i;
	char			bit;

	result = reverse_bits(14);
	i = 7;
	while (i >= 0)
	{
		bit = ((result >> i) & 1) + '0';
		write(1, &bit, 1);
		i--;
	}
	write(1, "\n", 1);

	return (0);
}
*/
