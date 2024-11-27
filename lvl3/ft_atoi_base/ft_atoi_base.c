/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaulnie <asaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:55:22 by asaulnie          #+#    #+#             */
/*   Updated: 2024/11/27 22:31:20 by asaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	hexa_to_number(char c)
{
	char	*hexa = "0123456789abcdef";
	int		i;

	i = 0;
	while (hexa[i])
	{
		if (hexa[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	n;
	int	sign;
	int	digit;

	n = 0;
	sign = 1;
	if (str_base < 2 || str_base > 16)
		return (0);
	while (*str)
	{
		if (*str == '-')
		{
			sign = -1;
			str++;
		}
		else if (*str <= ' ')
			str++;
		else
		{
			digit = hexa_to_number(*str | 32);
			if (digit == -1 || digit >= str_base)
				break ;
			n = (n * str_base) + digit;
			str++;
		}
	}
	return (sign * n);
}

int main(void)
{
	char	str[] = "1abcx";
	int		str_base;
	int		n;

	str_base = 16;
	n = ft_atoi_base(str, str_base);
	printf("str: %s\nstr_base: %d\nn: %d\n", str, str_base, n);
	return (0);
}
