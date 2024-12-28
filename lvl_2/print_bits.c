/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:14:10 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/12/19 16:14:12 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	check_bit;

	check_bit = 128;
	while (check_bit > 0)
	{
		if (octet & check_bit)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		check_bit = check_bit >> 1;
	}
}

int	main(void)
{
	print_bits('7');
	return (0);
}
