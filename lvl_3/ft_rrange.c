/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 18:20:25 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/12/23 18:20:26 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int *ft_rrange(int start, int end)
{
	int	i = 0;
	int *nbrs;
	int	size = 0;

	size = abs(start - end) + 1;
	nbrs = (int *) malloc(sizeof(int) * size);
	if (nbrs == NULL)
		return (NULL);
	while (i < size)
		if (start > end)
			nbrs[i++] = end++;
		else
			nbrs[i++] = end--;
	return (nbrs);
}
/* 
int main(void)
{
	int	start = 1;
	int	end = 3;
	int	i = 0;
	int *nbrs = ft_rrange(start, end);

	while (i < (abs(start - end) + 1))
	{
 		printf("%d", nbrs[i]);
		i++;
	}
	return (0);
} */