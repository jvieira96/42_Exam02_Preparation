/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramnum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 16:36:16 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/12/26 16:36:18 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nbr)
{
	char	digit;

	while (nbr >= 10)
		ft_putnbr(nbr / 10);
	digit = nbr % 10 + '0';
	write(1, &digit, 1);
}

int	main(int argc, char *argv[])
{
	int		len;
	char	*str;

	len = 0;
	(void)argv;
	if (argc >= 2)
		ft_putnbr(argc - 1);
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}
