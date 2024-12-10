/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaulnie <asaulnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:16:55 by asaulnie          #+#    #+#             */
/*   Updated: 2024/12/10 12:15:49 by asaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	do_op(int a, char op, int b)
{
	int	result;

	if (op == '+')
		result = a + b;
	else if (op == '-')
		result = a - b;
	else if (op == '*')
		result = a * b;
	else if (op == '/')
		result = a / b;
	else if (op == '%')
		result = a % b;
	printf("%d\n", result);
}

int	main(int argc, char **argv)
{
	if (argc == 4)
		do_op(atoi(argv[1]), argv[2][0], atoi(argv[3]));
	else
		write(1, "\n", 1);
}
