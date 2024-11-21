/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaulnie <asaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 20:19:27 by asaulnie          #+#    #+#             */
/*   Updated: 2024/11/21 15:01:28 by asaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		j;

	j = 0;
	if (argc == 2 && argv[1][j])
	{
		while (argv[1][j] != '\0')
		{
			if ((argv[1][j] >= 'a' && argv[1][j] <= 'z'))
			{
				i = 96;
				while (i < argv[1][j])
				{
					write(1, &argv[1][j], 1);
					i++;
				}
			}
			else if ((argv[1][j] >= 'A' && argv[1][j] <= 'Z'))
			{
				i = 64;
				while (i < argv[1][j])
				{
					write(1, &argv[1][j], 1);
					i++;
				}
			}
			else
				write(1, &argv[1][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
