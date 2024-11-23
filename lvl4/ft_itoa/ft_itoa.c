/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaulnie <asaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 21:25:26 by asaulnie          #+#    #+#             */
/*   Updated: 2024/11/23 21:38:45 by asaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	count_digits(int n)
{
	int count;

	if (n == 0)
		return 1;

	count = 0;
	while (n != 0)
	{
		n = n / 10;
		count = count + 1;
	}
	return (count);
}

int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

char	*ft_itoa(int nbr)
{
	char *str;
	int len;
	int i;

	len = count_digits(nbr);
	i = 0;
	if (nbr < 0)
		i++;
	len = len + i;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[0] = '-';
	str[len] = '\0';
	while ((len - 1) >= i)
	{
		str[len - 1] = ft_abs(nbr % 10) + '0';
		nbr /= 10;
		len--;
	}
	return (str);
}
/*
int main(void)
{
	char *itoa;

	itoa = ft_itoa(123);
	printf("%s\n", itoa);
	free(itoa);
	itoa = ft_itoa(-456);
	printf("%s\n", itoa);
	free(itoa);
	itoa = ft_itoa(0);
	printf("%s\n", itoa);
	free(itoa);
	return (0);
}
*/
