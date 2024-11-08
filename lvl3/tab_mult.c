/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaulnie <asaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:14:39 by asaulnie          #+#    #+#             */
/*   Updated: 2024/10/30 18:15:51 by asaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int num)
{
	char	*result;
	int		len;
	int		n;

	n = num;
	len = 0;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	result = malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	result[len] = '\0';
	if (num == 0)
		result[0] = '0';
	while (num > 0 && len--)
	{
		result[len] = (num % 10) + '0';
		num = num / 10;
	}
	return (result);
}

int	ft_atoi(char *str)
{
	int	result;
	int	i;

	result = 0;
	i = 0;
	while (str[i] != '\0')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	num;
	int	result;

	i = 1;
	if (argc == 2)
	{
		num = ft_atoi(argv[1]);
		while (i <= 9)
		{
			result = num * i;
			ft_putstr(ft_itoa(i));
			ft_putstr(" x ");
			ft_putstr(ft_itoa(num));
			ft_putstr(" = ");
			ft_putstr(ft_itoa(result));
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
