/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaulnie <asaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 19:49:17 by asaulnie          #+#    #+#             */
/*   Updated: 2024/11/23 20:16:16 by asaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int		i;
	int		j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	const char *s = "abchello";
	const char *reject = "xyzhello";

	printf("ft: %ld\n", ft_strcspn(s, reject));
	printf("real: %ld\n", strcspn(s, reject));
	return (0);
}
*/
