/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaulnie <asaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 21:25:26 by asaulnie          #+#    #+#             */
/*   Updated: 2024/12/03 13:17:36 by asaulnie         ###   ########.fr       */
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
		count++;
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
	int sign;

	len = count_digits(nbr); // trouver combien de digits dans nbr
	sign = 0;
	if (nbr < 0) // incrementer sign si negatif
		sign++;
	len = len + sign; // combiner len et sign
	str = (char *)malloc((len + 1) * sizeof(char)); // malloc la str
	if (!str)
		return (NULL);
	str[0] = '-'; // mettre le sign pour l'instant (changable)
	str[len] = '\0'; // mettre le '\0' a la fin
	while ((len - 1) >= sign) // pour chaque digit (negatif ou pas)
	{
		str[len - 1] = ft_abs(nbr % 10) + '0'; // ajouter le digit de la fin
		nbr = nbr / 10; // enlever le dernier digit de nbr
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
