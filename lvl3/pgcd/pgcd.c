/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaulnie <asaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 13:25:10 by asaulnie          #+#    #+#             */
/*   Updated: 2024/11/21 13:27:46 by asaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int pgcd (int a, int b)
{
	if(a == 0)
		return(b);
	if(b == 0)
		return(a);
	return pgcd(b, a % b);
}

int main(int ac, char **av)
{
	if(ac != 3)
	{
		write(1, "\n", 1);
		return(0);
	}
	printf("%d", pgcd(atoi(av[1]), atoi(av[2])));
	printf("\n");
}
