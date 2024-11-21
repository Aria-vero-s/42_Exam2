/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaulnie <asaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:16:55 by asaulnie          #+#    #+#             */
/*   Updated: 2024/11/21 13:16:06 by asaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	num1;
	int	num2;
	int	result;

	if (argc == 4)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
		if (argv[2][0] == '+')
			result = num1 + num2;
		else if (argv[2][0] == '-')
			result = num1 - num2;
		else if (argv[2][0] == '*')
			result = num1 * num2;
		else if (argv[2][0] == '/')
			result = num1 / num2;
		else if (argv[2][0] == '%')
			result = num1 % num2;
		printf("%d\n", result);
	}
	else
		write(1, "\n", 1);
	return (0);
}
