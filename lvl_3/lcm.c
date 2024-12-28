/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 15:57:48 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/12/26 15:57:49 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_gcd(unsigned int a, unsigned int b)
{
	unsigned int temp;

	while(b != 0)
	{
		temp = b;
		b = a % b;
		a = temp;
	}
	return (a);
}

unsigned int	lcm(unsigned int a, unsigned int b)
{
	int	i;
	int	lcm;

	if (a == 0 || b == 0)
		return (0);
	return (a * b) / ft_gcd(a, b);
}

// int main(void)
// {
// 	printf("%d", lcm(5, 7));
// 	return(0);
// }
