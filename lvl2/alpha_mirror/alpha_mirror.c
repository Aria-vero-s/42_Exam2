/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaulnie <asaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 15:46:38 by asaulnie          #+#    #+#             */
/*   Updated: 2024/11/24 16:23:47 by asaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// a = 97
// z = 122

void	alpha_mirror(char *str)
{
	int		i;
	int		l;
	char	*alpha = "abcdefghijklmnopqrstuvwxyz";
	char	*rev_alpha = "zyxwvutsrqponmlkjihgfedcba";
	char	*alphaC = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char	*rev_alphaC = "ZYXWVUTSRQPONMLKJIHGFEDCBA";

	i = 0;
	l = 0;
	while (str[i])
	{
		l = 0;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			while (alpha[l])
			{
				if (str[i] == alpha[l])
					write(1, &rev_alpha[l], 1);
				l++;
			}
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			while (alphaC[l])
			{
				if (str[i] == alphaC[l])
					write(1, &rev_alphaC[l], 1);
				l++;
			}
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		alpha_mirror(argv[1]);
	write(1, "\n", 1);
	return (0);
}
