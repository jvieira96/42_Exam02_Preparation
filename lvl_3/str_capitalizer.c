/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 19:53:10 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/12/28 19:53:13 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i = 1;
	int x = 0;
	int l = argc;

	if (argc > 1)
	{
		while (l > 1)
		{
			x = 0;
			if (argv[i][x] >= 'a' && argv[i][x] <=  'z')
			{
				argv[i][x] -= 32;
				write(1, &argv[i][x], 1);
				x++;
			}
			while (argv[i][x])
			{
				if (argv[i][x] >= 'A' && argv[i][x] <=  'Z')
					argv[i][x] += 32;
				if ((argv[i][x] >= 'a' && argv[i][x] <= 'z') && (argv[i][x - 1] == ' ') 
				|| (argv[i][x - 1] == '\t'))
					argv[i][x] -= 32;
				write(1, &argv[i][x], 1);
				x++;
			}
			i++;
			l--;
		}
	}
	write(1, "\n", 1);
	return (0);
}
