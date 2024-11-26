/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaulnie <asaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 12:26:32 by asaulnie          #+#    #+#             */
/*   Updated: 2024/11/26 15:17:24 by asaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char *ft_strrev(char *str)
{
	int		len;
	char	temp;
	int		i;

	len = ft_strlen(str) - 1;
	i = 0;
	while (i < len)
	{
		temp = str[i];
		str[i] = str[len];
		str[len] = temp;
		i++;
		len--;
	}
	return (str);
}
/*
int main(void)
{
	char str[] = "hello";

	printf("%s\n", str);
	printf("%s\n", ft_strrev(str));
	return (0);
}
*/
