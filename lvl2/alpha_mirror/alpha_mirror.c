/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaulnie <asaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 19:12:58 by asaulnie          #+#    #+#             */
/*   Updated: 2024/11/08 19:23:03 by asaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// a = 97 z = 122
// 0 -> 27
// 1 -> 26

void	alpha_mirror(char *str)
{
	int		i;
	int		j;
	char	*alpha;
	int		end;
	char	c;

	i = 0;
	j = 0;
	alpha = "abcdefghijklmnopqrstuvwxyz";
	end = 26;
	while (str[i])
	{
		while (alpha[j])
		{
			if (str[i] == alpha[j])
			{
				c = alpha[end - i];
				write(1, &c, 1);
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		alpha_mirror(argv[1]);
	write(1, "\n", 1);
}
