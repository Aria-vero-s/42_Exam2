/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaulnie <asaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:39:08 by asaulnie          #+#    #+#             */
/*   Updated: 2024/11/08 16:40:04 by asaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	print_binary(unsigned char octet)
{
	int	i;

	i = 7;
	while (i >= 0)
	{
		printf("%d", (octet >> i) & 1);
		i--;
	}
}

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

int	main(void)
{
	unsigned char	octet;
	unsigned char	swapped;

	octet = 76;
	swapped = swap_bits(octet);
	printf("Original octet: %d (", octet);
	print_binary(octet);
	printf(")\n");
	printf("Swapped octet: %d (", swapped);
	print_binary(swapped);
	printf(")\n");
	return (0);
}
