/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaulnie <asaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:38:40 by asaulnie          #+#    #+#             */
/*   Updated: 2024/11/08 16:37:08 by asaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		else if (s1[i] != s2[i])
		{
			if (s1[i] <= s2[i])
				return (s1[i] - s2[i]);
			else if (s1[i] >= s2[i])
				return (s1[i] - s2[i]);
		}
		else
			i++;
	}
	return (0);
}
