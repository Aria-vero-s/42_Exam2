/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaulnie <asaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 17:46:34 by asaulnie          #+#    #+#             */
/*   Updated: 2024/10/01 14:12:35 by asaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n)
{
	char	c;

	if (n > 9)
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int	main(void)
{
	int		i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 != 0)
			write (1, "fizz", 4);
		else if (i % 5 == 0 && i % 3 != 0)
			write (1, "buzz", 4);
		else if (i % 3 == 0 && i % 5 == 0)
			write (1, "fizzbuzz", 8);
		else
			ft_putnbr(i);
		write (1, "\n", 1);
		i++;
	}
	return (0);
}
