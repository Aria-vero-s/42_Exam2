#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	n;

	i = 0;
	sign = 1;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
	{
		sign = 1;
		i++;
	}
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			n = (n * 10) + str[i] - '0';
		else
			break ;
		i++;
	}
	return (n * sign);
}

int	i_is_prime_num(int i)
{
	int	start;
	int	not_prime;

	start = 2;
	not_prime = 0;
	while (start <= i)
	{
		if (i % start != 0)
			not_prime++;
		start++;
	}
	if (not_prime == (i - 2))
		return (0);
	return (1);
}

void	ft_putnbr(int n)
{
	char	c;

	if (n <= 9)
	{
		c = n + '0';
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

void	add_prime_sum(int n)
{
	int	i;
	int	sum;

	i = 2;
	sum = 0;
	while (i <= n)
	{
		if (i_is_prime_num(i) == 0)
			sum = sum + i;
		i++;
	}
	ft_putnbr(sum);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		add_prime_sum(ft_atoi(argv[1]));
	else
		ft_putnbr(0);
	write(1, "\n", 1);
}
