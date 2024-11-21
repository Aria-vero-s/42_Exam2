/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaulnie <asaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 19:01:25 by asaulnie          #+#    #+#             */
/*   Updated: 2024/11/21 19:36:25 by asaulnie         ###   ########.fr       */
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

int	hidenp(char *s1, char *s2)
{
	int	i;
	int	j;
	int	len_s1;

	i = 0;
	j = 0;
	len_s1 = ft_strlen(s1);
	while (s2[j])
	{
		if (s1[i] == s2[j])
			i++;
		j++;
	}
	if (i == len_s1)
		return (1);
	else
		return (0);

}

int	main(int argc, char **argv)
{
	int		n;
	char	c;

	if (argc == 3)
	{
		n = hidenp(argv[1], argv[2]);
		c = n + '0';
		write(1, &c, 1);
	}
	write(1, "\n", 1);
	return (0);
}
