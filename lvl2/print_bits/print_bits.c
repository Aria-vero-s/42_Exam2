/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaulnie <asaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:42:55 by asaulnie          #+#    #+#             */
/*   Updated: 2024/11/21 13:35:36 by asaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_bits(unsigned char octet)
{
	unsigned char	mask;

	mask = 0b10000000;
	while (mask > 0)
	{
		if (octet & mask)
			ft_putchar('1');
		else
			ft_putchar('0');
		mask >>= 1;
	}
}
/*
int	main(void)
{
	print_bits(14);
	return (0);
}
*/
