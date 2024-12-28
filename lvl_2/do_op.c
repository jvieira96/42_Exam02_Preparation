/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 20:27:42 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/12/12 20:27:43 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
	if (argc == 4)
	{
		if (argv[2][0] == '+')
			printf("%d", atoi(argv[1]) + atoi(argv[3]));
		if (argv[2][0] == '-')
			printf("%d", atoi(argv[1]) - atoi(argv[3]));
		if (argv[2][0] == '*')
			printf("%d", atoi(argv[1]) * atoi(argv[3]));
		if (argv[2][0] == '/')
			printf("%d", atoi(argv[1]) / atoi(argv[3]));
		if (argv[2][0] == '%')
			printf("%d", atoi(argv[1]) % atoi(argv[3]));
	}
	write(1, "\n", 1);
	return (0);
}
