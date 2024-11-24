/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaulnie <asaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 21:49:50 by asaulnie          #+#    #+#             */
/*   Updated: 2024/11/24 22:38:15 by asaulnie         ###   ########.fr       */
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

void	last_word(char *str)
{
	int	len;
	int	begin;

	len = ft_strlen(str) - 1;
	while (len >= 0 && (str[len] == ' ' || str[len] == '\t'))
		len--;
	begin = len;
	while (begin >= 0 && (str[begin] != ' ' && str[begin] != '\t'))
		begin--;
	begin++;
	while (begin <= len)
	{
		write(1, &str[begin], 1);
		begin++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		last_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}
