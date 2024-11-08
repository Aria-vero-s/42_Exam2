/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaulnie <asaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:15:12 by asaulnie          #+#    #+#             */
/*   Updated: 2024/11/08 16:26:41 by asaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rotone(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'z' || str[i] == 'Z')
		{
			c = str[i] - 25;
			write(1, &c, 1);
		}
		else if ((str[i] >= 'a' && str[i] <= 'y')
			|| (str[i] >= 'A' && str[i] <= 'Y'))
		{
			c = str[i] + 1;
			write(1, &c, 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rotone(argv[1]);
	write(1, "\n", 1);
}
