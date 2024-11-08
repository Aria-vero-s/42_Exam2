/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaulnie <asaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 14:36:44 by asaulnie          #+#    #+#             */
/*   Updated: 2024/10/01 14:10:38 by asaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int		j;

	j = 0;
	if (argc == 2)
	{
		while (argv[1][j] == ' ' || argv[1][j] == '	')
			j++;
		while (argv[1][j] != '\0' && argv[1][j] != ' ' && argv[1][j] != '	')
		{
			write (1, &argv[1][j], 1);
			j++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
