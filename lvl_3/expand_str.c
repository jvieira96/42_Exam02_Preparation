/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 20:55:32 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/12/19 20:55:33 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] == 32 || (argv[1][i] >= 9 && argv[1][i] <= 13))
			i++;
		while (argv[1][i])
		{
			if (!(argv[1][i] == 32 || (argv[1][i] >= 9 && argv[1][i] <= 13)))
			{
				write(1, &argv[1][i], 1);
				i++;
			}
			if (argv[1][i] == 32 || (argv[1][i] >= 9 && argv[1][i] <= 13))
			{
				while (argv[1][i] == 32 || (argv[1][i] >= 9 && argv[1][i] <= 13))
					i++;
				if (argv[1][i])
					write(1, "   ", 3);
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
