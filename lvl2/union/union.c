/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaulnie <asaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 14:39:28 by asaulnie          #+#    #+#             */
/*   Updated: 2024/11/23 16:40:41 by asaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_union(char *s1, char *s2)
{
	unsigned char	seen[256] = {0};
	int i = 0;
	int j = 0;

	while (s1[i])
	{
		if (seen[(unsigned char)s1[i]] == 0)
		{
			write(1, &s1[i], 1);
			seen[(unsigned char)s1[i]] = 1;
		}
		i++;
	}
	while (s2[j])
	{
		if (seen[(unsigned char)s2[j]] == 0)
		{
			write(1, &s2[j], 1);
			seen[(unsigned char)s2[j]] = 1;
		}
		j++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
