/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaulnie <asaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:02:13 by asaulnie          #+#    #+#             */
/*   Updated: 2024/10/31 17:15:05 by asaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	bit;
	int				i;

	i = 0;
	while (i <= 7)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
		i++;
	}
}

int	main(void)
{
	reverse_bits(40);
	return (0);
}
