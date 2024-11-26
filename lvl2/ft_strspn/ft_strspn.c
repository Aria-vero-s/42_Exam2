/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaulnie <asaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:19:33 by asaulnie          #+#    #+#             */
/*   Updated: 2024/11/26 16:55:45 by asaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	count;
	size_t	i;
	size_t	j;

	count = 0;
	i = 0;
	j = 0;
	while (accept[i])
	{
		while (s[j] == accept[i])
		{
			count++;
			j++;
		}
		i++;
	}
	return (count);
}
/*
int main()
{
	const char s1[] = "abcxyz";
	const char accept[] = "axz";

	printf("Test 1: %ld\n", strspn(s1, accept));
	printf("Test 1: %ld\n", ft_strspn(s1, accept));
	return (0);
}
*/
