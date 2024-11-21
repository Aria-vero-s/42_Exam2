/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaulnie <asaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 13:37:59 by asaulnie          #+#    #+#             */
/*   Updated: 2024/11/21 14:49:40 by asaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	if_space_start(char *str)
{
	int	i;

	i = 0;
	if (str[0] == ' ')
	{
		while (str[i] == ' ')
			i++;
	}
	return (i);
}

void	if_space_end(char *str)
{
	int	len;

	len = ft_strlen(str) - 1;
	while (len > 0)
	{
		if (str[len] == ' ')
		{
			while (str[len] == ' ')
				len--;
		}
		len++;
		str[len] = '\0';
		break ;
	}
}

void	expand_str(char *str)
{
	int	i;

	i = 0;
	i = if_space_start(str);
	if_space_end(str);
	while (str[i])
	{
		if (str[i] == ' ')
		{
			while (str[i] == ' ')
				i++;
			write(1, "   ", 3);
		}
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		expand_str(argv[1]);
	write(1, "\n", 1);
	return (0);
}
