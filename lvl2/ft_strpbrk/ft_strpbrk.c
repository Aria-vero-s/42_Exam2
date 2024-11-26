/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaulnie <asaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 20:55:27 by asaulnie          #+#    #+#             */
/*   Updated: 2024/11/26 12:05:30 by asaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;
	int	j;
	const char *ptr;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
			{
				ptr = &s1[i];
				return ((char *)ptr);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char s1[] = "hello";
	const char s2[] = "bonjour";
	printf("ft: %s\n", ft_strpbrk(s1, s2));
	printf("real: %s\n", strpbrk(s1, s2));
}
*/
