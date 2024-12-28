/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 18:31:33 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/12/23 18:31:35 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
	int	len = 0;
	
	while (str[len])
		len++;
	return (len);
}

int	main(int argc, char *argv[])
{
	int i,k = 0;
	int	len = 0;
	int	count = 0;

	if (argc == 3)
	{
		if (!argv[1][i])
		{
			write(1, "1", 1);
			return (0);
		}
		len = ft_strlen(argv[1]);
		while (argv[2][i] && argv[1][k])
		{
			if (argv[2][i] == argv[1][k])
			{
				count++;
				k++;
			}
			i++;
		}
		if (len == count)
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
	return(0);
}
