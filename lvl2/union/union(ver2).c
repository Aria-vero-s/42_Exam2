#include <unistd.h>

int	check(char *str, char c, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	check_both(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	ft_union(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i])
	{
		if (check(str1, str1[i], i) == 0)
			write(1, &str1[i], 1);
		i++;
	}
	i = 0;
	while (str2[i])
	{
		if (check(str2, str2[i], i) == 0 && check_both(str1, str2[i]) == 0)
			write(1, &str2[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
