/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaulnie <asaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:52:39 by asaulnie          #+#    #+#             */
/*   Updated: 2024/11/08 17:05:27 by asaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct s_point
{
	int	x;
	int	y;
}	t_point;

void	fill(char **tab, t_point size, int x, int y, char c)
{
	if (x < 0 || y < 0 || x >= size.x || y >= size.y || tab[y][x] != c)
		return ;
	tab[y][x] = 'F';
	fill(tab, size, x, y + 1, c);
	fill(tab, size, x, y - 1, c);
	fill(tab, size, x + 1, y, c);
	fill(tab, size, x - 1, y, c);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	char	c;

	c = tab[begin.y][begin.x];
	fill(tab, size, begin.x, begin.y, c);
}

char	**make_area(char **zone, t_point size)
{
	char	**new;
	int		i;
	int		j;

	i = 0;
	new = malloc(sizeof(char *) * size.y);
	while (i < size.y)
	{
		new[i] = malloc(size.x + 1);
		j = 0;
		while (j < size.x)
		{
			new[i][j] = zone[i][j];
			j++;
		}
		new[i][size.x] = '\0';
		i++;
	}
	return (new);
}

int	main(void)
{
	t_point size = {8, 5};
	char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001",
	};
	char** area = make_area(zone, size);
	int i = 0;
	while (i < size.y)
	{
		printf("%s\n", area[i]);
		i++;
	}
	printf("\n");
	t_point begin = {7, 4};
	flood_fill(area, size, begin);
	i = 0;
	while (i < size.y)
	{
		printf("%s\n", area[i]);
		i++;
	}
	return (0);
}
