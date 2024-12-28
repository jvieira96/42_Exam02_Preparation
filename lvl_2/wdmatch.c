/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 18:43:27 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/12/19 18:43:29 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
	int	len;

	len = 0;
	while(str[len])
		len++;
	return (len);
}

int	main(int argc, char *argv[])
{
	int	i = 0;
	int	j = 0;
	int	count = 0;
	int	len = 0;

	if (argc == 3)
	{
		len = ft_strlen(argv[1]);
		while(argv[2][i])
		{
			if (argv[2][i] == argv[1][j])
			{
				count++;
				j++;
			}
			i++;
		}
		if (count == len)
			write(1, argv[1], len);
	}
	write (1, "\n", 1);
	return (0);
}
