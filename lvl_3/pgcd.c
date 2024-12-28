/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 16:59:31 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/12/26 16:59:33 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	nbr1;
	int	nbr2;
	int	temp;

	if (argc == 3)
	{
		if ((nbr1 = atoi(argv[1])) > 0 && (nbr2 = atoi(argv[2])) > 0)
		{
			while (nbr2 != 0)
			{
				temp = nbr2;
				nbr2 = nbr1 % nbr2;
				nbr1 = temp;
			}
			printf("%d", nbr1);
		}
	}
	printf("\n");
	return (0);
}