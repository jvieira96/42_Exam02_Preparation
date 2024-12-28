/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 19:06:38 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/12/19 19:06:39 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	nbr = 0;

	while(*str)
	{
		nbr = nbr * 10 + *str - '0';
		str++;
	}
	return (nbr);
}

int	ft_prime(int nbr)
{
	int	count = 0;
	int	aux = nbr;

	while (aux > 0)
	{
		if (nbr % aux == 0)
			count++;
		aux--;
	}
	if (count == 2)
		return (nbr);
	return (0);	
}

void	ft_putnbr(int	nbr)
{
	char digit;

	if (nbr > 9)
		ft_putnbr(nbr / 10);
	digit = nbr % 10 + '0';
	write(1 , &digit, 1);
}

int	main(int argc, char *argv[])
{
	int	nbr = 0;
	int	total = 0;

	if (argc == 2)
	{
		nbr = ft_atoi(argv[1]);
		if (nbr <= 0)
		{
			write(1, "0", 1);
			write(1, "\n", 1);
			return 0;
		}
		while (nbr > 0)
		{
			total = total + ft_prime(nbr);
			nbr--;
		}
		ft_putnbr(total);
	}
	else
		ft_putnbr(0);
	write(1, "\n", 1);
	return (0);
}
