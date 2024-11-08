/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaulnie <asaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:50:49 by asaulnie          #+#    #+#             */
/*   Updated: 2024/11/08 16:50:52 by asaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	inter(char *str, char *blah)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (blah[j] != '\0')
		{
			if (str[i] == blah[j])
			{
				k = 0;
				while (k < i && str[k] != str[i])
					k++;
				if (k == i)
				{
					write(1, &str[i], 1);
					break ;
				}
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
