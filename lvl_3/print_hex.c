/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 17:25:58 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/12/26 17:26:00 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_hex(int	nbr)
{
	char  	*hex = "0123456789abcdef";

	if (nbr >= 16)
		ft_hex(nbr / 16);
	write(1, &hex[nbr % 16], 1);	
}

int	main(int argc, char *argv[])
{
	int	i = 0;
	int	nbr = 0;
	if (argc == 2)
	{
		while (argv[1][i] >= '0' && argv[1][i] <= '9')
		{
			nbr = nbr * 10 + argv[1][i] - '0';
			i++;
		}
		ft_hex(nbr);
	}
	write(1, "\n", 1);
	return (0);
}