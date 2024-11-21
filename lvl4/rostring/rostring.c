/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaulnie <asaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 19:38:32 by asaulnie          #+#    #+#             */
/*   Updated: 2024/11/21 21:12:36 by asaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	check_spaces_start(char *str)
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

char	*find_first_word(char *str, int i, int len_fw)
{
	char	*first_word;
	int		j;

	first_word = malloc(len_fw + 1);
	j = 0;
	if (!first_word)
		return (NULL);
	while (str[i] && str[i] != ' ' && str[i] != '\t')
	{
		first_word[j] = str[i];
		i++;
		j++;
	}
	first_word[j] = '\0';
	return (first_word);
}

int	find_len_fw(char *str, int i)
{
	int		len_fw;

	len_fw = 0;
	while (str[i] && str[i] != ' ')
	{
		len_fw++;
		i++;
	}
	return (len_fw);
}

void	rostring(char *str)
{
	int		i;
	int		j;
	char	*cpy;
	char	*first_word;
	int		len_fw;

	i = check_spaces_start(str);
	len_fw = find_len_fw(str, i);
	first_word = find_first_word(str, i, len_fw);
	cpy = malloc(ft_strlen(str) + 1);
	j = 0;
	if (!first_word || !cpy)
		return ;
	i = i + len_fw;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		if (!str[i])
			break ;
		while (str[i] && str[i] != ' ' && str[i] != '\t')
		{
			cpy[j] = str[i];
			j++;
			i++;
		}
		cpy[j] = ' ';
		j++;
	}
	i = 0;
	while (first_word[i])
	{
		cpy[j] = first_word[i];
		j++;
		i++;
	}
	cpy[j] = '\0';
	ft_putstr(cpy);
	free(first_word);
	free(cpy);
}

int	main(int argc, char **argv)
{
	if (argc >= 2)
		rostring(argv[1]);
	write(1, "\n", 1);
	return (0);
}
