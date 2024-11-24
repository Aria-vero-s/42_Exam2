/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaulnie <asaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 20:55:51 by asaulnie          #+#    #+#             */
/*   Updated: 2024/11/24 21:45:36 by asaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

	// void	ft_putstr(char *str)
	// {
	// 	int	i;

	// 	i = 0;
	// 	while (str[i])
	// 	{
	// 		write(1, &str[i], 1);
	// 		i++;
	// 	}
	// }

	// void	display(int word_quantity, char **str_arr)
	// {
	// 	int	i;

	// 	i = 0;
	// 	while (i < word_quantity)
	// 	{
	// 		ft_putstr(str_arr[i]);
	// 		write(1, "\n", 1);
	// 		i++;
	// 	}
	// }

int	word_length(char *str, int s)
{
	int	len;

	len = 0;
	while (str[s] && str[s] != ' ' && str[s] != '\t' && str[s] != '\n')
	{
		len++;
		s++;
	}
	return (len);
}

void	put_word_inside_arr(char *str, char **str_arr)
{
	int	i;
	int	j;
	int	k;
	int	len;

	i = 0;
	j = 0;
	k = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			if (j > 0)
			{
				str_arr[k][j] = '\0';
				k++;
			}
			j = 0;
		}
		else
		{
			if (j == 0)
			{
				len = word_length(str, i);
				str_arr[k] = malloc(sizeof(char) * (len + 1));
			}
			str_arr[k][j] = str[i];
			j++;
		}
		i++;
	}
	if (j > 0)
	{
		str_arr[k][j] = '\0';
		k++;
	}
	str_arr[k] = NULL;
}

char	**ft_split(char *str)
{
	int		i;
	int		word;
	int		word_quantity;
	char	**str_arr;

	i = 0;
	word = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			word++;
		i++;
	}
	word_quantity = word + 1;
	str_arr = malloc(sizeof(char *) * (word_quantity + 1));
	put_word_inside_arr(str, str_arr);
	// display(word_quantity, str_arr);
	return (str_arr);
}
/*
int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_split(argv[1]);
	else
		write(1, "\n", 1);
	return (0);
}*/
