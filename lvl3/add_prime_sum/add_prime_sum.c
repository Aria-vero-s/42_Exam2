/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaulnie <asaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:06:09 by asaulnie          #+#    #+#             */
/*   Updated: 2024/12/05 15:47:30 by asaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i])
	{
		while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
			i++;
		if (str[i] == '-')
		{
			sign = -1;
			i++;
		}
		else if (str[i] == '+')
			i++;
		while (str[i] >= '0' && str[i] <= '9')
		{
			result = result * 10 + (str[i] - '0');
			i++;
		}
		if (str[i] != '\0' && (str[i] < '0' || str[i] > '9'))
			break ;
	}
	return (sign * result);
}

void	ft_putnbr(int n)
{
	char	c;

	if (n > 9)
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int	is_prime(int n)
{
	int i;

	i = 2;
	while (i * i <= n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	add_prime_sum(int n)
{
	int sum;
	int i;

	sum = 0;
	i = 2;
	while (i <= n)
	{
		if (is_prime(i))
			sum = sum + i;
		i++;
	}
	ft_putnbr(sum);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		add_prime_sum(ft_atoi(argv[1]));
	write(1, "\n", 1);
	return (0);
}
