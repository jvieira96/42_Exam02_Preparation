/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 17:05:59 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/12/23 17:06:01 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int start, int end)
{
	int	size = 0;
	int	*nbrs;
	int	i = 0;

	size = abs((end - start)) + 1;
	nbrs = (int *)malloc(sizeof(int) * size);
	if (nbrs == NULL)
		return (NULL);
	while (i < size)
	{
		if (start < end)
			nbrs[i++] = start++;
		else
			nbrs[i++] = start--;
	}
	return (nbrs);
}

/* int main(void)
{
	int	start = 0;
	int	end = 0;
	int	i = 0;
	int *nbrs = ft_range(start, end);

	while (i < (abs(start - end) + 1))
	{
 		printf("%d", nbrs[i]);
		i++;
	}
	return (0);
} */