/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaulnie <asaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:42:55 by asaulnie          #+#    #+#             */
/*   Updated: 2024/12/03 17:03:20 by asaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <unistd.h>

void	print_bits(unsigned char octet)
{
	unsigned char	mask;

	mask = 0b10000000;
	while (mask > 0)
	{
		if (octet & mask)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		mask = mask / 2;
	}
}
/*
int	main(void)
{
	print_bits(14);
	return (0);
}
*/
