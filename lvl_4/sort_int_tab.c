/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_in_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 17:06:58 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/12/30 17:07:01 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size)
{
	int	i = 0;
	int j = 0;
	int	temp;
	int swapped = 0;

	while (i < (size -1))
	{
		j = 0;
		swapped = 0;
		while(j < (size -1))
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
				swapped = 1;
			}
			j++;
		}
		if (swapped == 0)
			break ;
		i++;
	}
}

/* int main()
{
    int arr[] = {5, 2, 9, 1, 5, 6};
    unsigned int size = 6;
    unsigned int i = 0;

    sort_int_tab(arr, size);
    while (i < size)
    {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");

    return 0;
} */