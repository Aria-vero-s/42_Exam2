/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaulnie <asaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 19:48:07 by asaulnie          #+#    #+#             */
/*   Updated: 2024/11/20 20:37:32 by asaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rstr_capitalizer(char *str)
{
	int		i;
	char	c;

	i = 0;
	if (str[0] == '\0')
		return ;
	while (str[i])
	{
		if (str[i + 1] == ' ' || str[i + 1] == '\0')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				c = str[i] - 32;
				write(1, &c, 1);
			}
			else
				write(1, &str[i], 1);
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				c = str[i] + 32;
				write(1, &c, 1);
			}
			else
				write(1, &str[i], 1);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc == 0 || argc == 1)
		write(1, "\n", 1);
	else
	{
		while (i < argc)
		{
			rstr_capitalizer(argv[i]);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
