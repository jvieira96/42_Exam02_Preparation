/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 18:29:04 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/12/19 18:29:05 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*seen_check[256] = {0};
	int	i;

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			if (!seen_check[argv[1][i]])
			{
				write (1, &argv[1][i], 1);
				seen_check[argv[1][i]] = "1";
			}
			i++;
		}
		i = 0;
		while (argv[2][i])
		{
			if (!seen_check[argv[2][i]])
			{
				write (1, &argv[2][i], 1);
				seen_check[argv[2][i]] = "1";
			}
			i++;
		}

	}
	write(1, "\n", 1);
	return (0);
}
