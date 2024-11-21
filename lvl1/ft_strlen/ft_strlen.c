/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaulnie <asaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:41:28 by asaulnie          #+#    #+#             */
/*   Updated: 2024/10/01 14:47:12 by asaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(void)
{
	char	*str;
	int		n;
	char	c;

	str = "hihi";
	n = ft_strlen(str);
	c = n + '0';
	write(1, &c, 1);
	return (0);
}
