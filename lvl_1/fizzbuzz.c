/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 15:29:03 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/12/11 15:29:05 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_nbr(int i)
{
	char nbr[10] = "0123456789";
	if (i > 9)
		print_nbr(i / 10);
	write(1, &nbr[i % 10], 1);
}

int	main (void)
{
	int	i;

	i = 1;
	while (i < 101)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			write(1, "fizzbuzz", 8);
		else if ((i % 3 == 0) && (i % 5 != 0))
			write(1, "fizz", 4);
		else if ((i % 5 == 0) && (i % 3 != 0))
			write(1, "buzz", 4);
		else 
			print_nbr(i);
		i++;
		write(1, "\n", 1);
	}
	return (0);
}
