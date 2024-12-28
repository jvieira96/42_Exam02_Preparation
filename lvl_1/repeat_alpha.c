/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 17:11:24 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/12/11 17:11:26 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	rep;

	i = 0;
	rep =0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 98 && argv[1][i] <= 122)
			{
				rep = argv[1][i] - 97;
				while (rep >= 0)
				{
					write(1, &argv[1][i], 1);
					rep--;
				}
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
