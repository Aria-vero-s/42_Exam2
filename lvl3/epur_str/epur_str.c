/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaulnie <asaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 15:06:44 by asaulnie          #+#    #+#             */
/*   Updated: 2024/11/25 15:29:31 by asaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	check_spaces(char *str, int i)
{
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	return (i);
}

void	epur_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i = check_spaces(str, i);
		while ((str[i] != ' ' && str[i] != '\t') && str[i])
		{
			write(1, &str[i], 1);
			i++;
		}
		if (str[i] == ' ' || str[i] == '\t')
		{
			i = check_spaces(str, i);
			if (str[i] != '\0')
				write(1, " ", 1);
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		epur_str(argv[1]);
	write(1, "\n",1);
	return (0);
}
