/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaulnie <asaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 15:58:51 by asaulnie          #+#    #+#             */
/*   Updated: 2024/10/07 18:38:18 by asaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	char	c;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			if (('A' <= argv[1][i] && argv[1][i] <= 'Z') ||
			('a' <= argv[1][i] && argv[1][i] <= 'z'))
			{
				if ((argv[1][i] >= 'a' && argv[1][i] <= 'm') ||
				(argv[1][i] >= 'A' && argv[1][i] <= 'M'))
					c = argv[1][i] + 13;
				else
					c = argv[1][i] - 13;
				write(1, &c, 1);
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
