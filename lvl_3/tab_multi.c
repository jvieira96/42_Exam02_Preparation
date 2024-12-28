/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_multi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 20:32:16 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/12/28 20:32:17 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	nbr = 0;

	while (*str >= '0' && *str <= '9')
	{
		nbr = nbr * 10 + *str - '0';
		str++;
	}
	return (nbr);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + '0');
}

int main(int argc, char *argv[])
{
	int nbr = 0;
	int	i = 1;

	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		nbr = ft_atoi(argv[1]);
		while (i <= 9 && nbr <= 238609183)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(nbr);
			write(1, " = ", 3);
			ft_putnbr(i * nbr);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
