/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 17:31:18 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/12/16 17:31:19 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	int	i;
	int	max;

	if (len == 0)
		return (0);
	i = 0;
	max = tab[i++];
	while(tab[i])
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}
