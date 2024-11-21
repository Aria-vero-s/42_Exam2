/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaulnie <asaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 20:55:14 by asaulnie          #+#    #+#             */
/*   Updated: 2024/10/30 21:01:58 by asaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	reverse_words(char *str)
{
	int	len;
	int	end;
	int	start;

	len = ft_strlen(str);
	end = len;
	while (end > 0)
	{
		end--;
		if (str[end] == ' ' || end == 0)
		{
			if (str[end] == ' ')
				start = end + 1;
			else
				start = end;
			while (str[start] && str[start] != ' ')
			{
				write(1, &str[start], 1);
				start++;
			}
			if (end > 0)
				write(1, " ", 1);
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		reverse_words(argv[1]);
	write(1, "\n", 1);
	return (0);
}
