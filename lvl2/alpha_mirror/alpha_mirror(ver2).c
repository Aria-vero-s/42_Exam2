#include <unistd.h>

void	alpha_mirror(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			c = 'z' - (str[i] - 'a');
		else if (str[i] >= 'A' && str[i] <= 'Z')
			c = 'Z' - (str[i] - 'A');
		else
			c = str[i];
		write(1, &c, 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		alpha_mirror(argv[1]);
	write(1, "\n", 1);
	return (0);
}
