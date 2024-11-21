/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaulnie <asaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:51:27 by asaulnie          #+#    #+#             */
/*   Updated: 2024/11/08 16:51:29 by asaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	n;
	int	i;

	n = 0;
	i = 0;
	while (str[i])
	{
		n = n * 10;
		n = n + str[i] - '0';
		i++;
	}
	return (n);
}

void	print_hex(int n)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (n >= 16)
		print_hex(n / 16);
	write(1, &hex[n % 16], 1);
}

int	main(int argc, char **argv)
{
	int	result;

	if (argc == 2)
	{
		result = ft_atoi(argv[1]);
		print_hex(result);
	}
	write(1, "\n", 1);
	return (0);
}
