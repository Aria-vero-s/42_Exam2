/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaulnie <asaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 13:25:10 by asaulnie          #+#    #+#             */
/*   Updated: 2024/12/09 21:28:35 by asaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int pgcd (int a, int b)
{
	if (a == 0)
		return(b);
	if (b == 0)
		return(a);
	return (pgcd(b, a % b));
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		printf("%d\n", pgcd(atoi(argv[1]), atoi(argv[2])));
	else
		write(1, "\n", 1);
}
