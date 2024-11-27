/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaulnie <asaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 17:32:07 by asaulnie          #+#    #+#             */
/*   Updated: 2024/11/27 16:49:24 by asaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	capitalize_letter(char *str, char c, int i)
{
	char	letter;

	if (c >= 'a' && c <= 'z')
	{
		letter = c - 32;
		write(1, &letter, 1);
	}
	else
		write(1, &str[i], 1);
}

void	set_to_lowercase(char *str, int i)
{
	char	letter;

	letter = str[i] + 32;
	write(1, &letter, 1);
}

void	str_capitalizer(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (i == 0 || (str[i - 1] == ' ' || str[i - 1] == '\t'))
			capitalize_letter(str, str[i], i);
		else if (str[i] >= 'A' && str[i] <= 'Z')
			set_to_lowercase(str, i);
		else
			write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 2;
	j = 1;
	if (argc == 0 || argc == 1)
		write(1, "\n", 1);
	while (argc >= i)
	{
		str_capitalizer(argv[j]);
		write(1, "\n", 1);
		i++;
		j++;
	}
}
