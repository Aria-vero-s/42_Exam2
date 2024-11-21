/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaulnie <asaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:15:41 by asaulnie          #+#    #+#             */
/*   Updated: 2024/11/08 16:25:22 by asaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	search_and_replace(char *str, char l1, char l2)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == l1)
			write(1, &l2, 1);
		else
			write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (argv[2][1] != '\0' || argv[3][1] != '\0')
		{
			write(1, "\n", 1);
			return (0);
		}
		else
			search_and_replace(argv[1], argv[2][0], argv[3][0]);
	}
	write(1, "\n", 1);
	return (0);
}
