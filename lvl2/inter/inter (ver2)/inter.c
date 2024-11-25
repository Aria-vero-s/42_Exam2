/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaulnie <asaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:58:07 by asaulnie          #+#    #+#             */
/*   Updated: 2024/11/25 15:03:59 by asaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	inter(char *s1, char *s2)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
			{
				k = 0;
				l = 0;
				while (s1[i] != s1[k])
					k++;
				while (s2[j] != s2[l])
					l++;
				if (k == i && l == j)
					write(1, &s1[i], 1);
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
