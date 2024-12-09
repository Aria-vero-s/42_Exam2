/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaulnie <asaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 15:07:43 by asaulnie          #+#    #+#             */
/*   Updated: 2024/12/08 16:24:55 by asaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	fprime(unsigned int nb)
{
	unsigned int	prime;

	if (nb == 1)
		printf("1");
	else
	{
		prime = 2;
		while (nb > 1)
		{
			if (nb % prime == 0)
			{
				printf("%d", prime);
				nb = nb / prime;
				if (nb > 1)
					printf("*");
				prime--;
			}
			prime++;
		}
	}
}

int	main()
{
	unsigned int nb;

	nb = 42;
	fprime(nb);
	return (0);
}

int	main(int ac, char **av)
{
	if (ac == 2 && *av[1])
	{
		if (av[1][0] == '-')
			printf("\n");
		else
		{
			fprime(atoi(av[1]));
			printf("\n");
		}
	}
	else
		printf("\n");
	return (0);
}
