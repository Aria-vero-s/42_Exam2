/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaulnie <asaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 17:15:38 by asaulnie          #+#    #+#             */
/*   Updated: 2024/11/23 19:37:53 by asaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct s_point
{
	int x;
	int y;
} t_point;

void	fill(char **current, int x, int y, int width, int height, char c)
{
	if (x < 0 || y < 0 || x >= width || y >= height || current[y][x] != c)
		return ;
	current[y][x] = 'F';
	fill(current, x, y + 1, width, height, c);
	fill(current, x, y - 1, width, height, c);
	fill(current, x + 1, y, width, height, c);
	fill(current, x - 1, y, width, height, c);
}

void	flood_fill(char **current, t_point size, t_point begin)
{
	char	c;

	c = current[begin.y][begin.x];
	fill(current, begin.x, begin.y, size.x, size.y, c);
}
/*
char	**grid_copy(char **grid, int height)
{
	int		i;
	char	**grid_cpy;

	i = 0;
	grid_cpy = malloc(sizeof(char *) * height);
	while (i < height)
	{
		grid_cpy[i] = strdup(grid[i]);
		i++;
	}
	return (grid_cpy);
}

void	free_grid(char **grid, int height)
{
	int	i;

	i = 0;
	while (i < height)
	{
        free(grid[i]);
		i++;
	}
    free(grid);
}

int	main(void)
{
	char	*grid[] = {
	"111111",
	"101101",
	"100001",
	"111111",
	};
	char	**grid_cpy;
	int		i;
	t_point	begin;
	t_point	size;

	i = 0;
	size.x = 6;
	size.y = 4;
	begin.x = 1;
	begin.y = 1;
	grid_cpy = grid_copy(grid, 4);
	flood_fill(grid_cpy, size, begin);
	while (i < 4)
	{
		printf("%s\n", grid_cpy[i]);
		i++;
	}
	free_grid(grid_cpy, 4);
	return (0);
}
*/
