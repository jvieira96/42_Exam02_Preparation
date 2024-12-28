/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 17:09:53 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/12/19 17:09:56 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	reverse_bits(unsigned char octet)
{
	int	check_bit;

	check_bit = 1;
	while (check_bit <= 128)
	{
		if (octet & check_bit)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		check_bit = check_bit * 2;
	}
}
int	main(void)
{
	reverse_bits('7');
	return (0);
}