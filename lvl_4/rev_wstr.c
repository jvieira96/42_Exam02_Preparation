/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 15:54:31 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/12/30 15:54:32 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int	i = 0;
	int	end;
	int	start;
	int	flag;

	if (argc == 2)
	{
		while(argv[1][i])
			i++;
		while (i >= 0)
		{
			while (!argv[1][i] || argv[1][i] == 32 || (argv[1][i] >= 9 && argv[1][i] <= 13))
				i--;
			end = i;
			while (argv[1][i] && !(argv[1][i] == 32 || (argv[1][i] >= 9 && argv[1][i] <= 13)))
				i--;
			start = i + 1;
			flag = start;
			while (start <= end)
			{
				write(1, &argv[1][start], 1);
				start++;
			}
			if (flag != 0)
				write(1, " ", 1);
		}
	}
	write (1, "\n", 1);
	return (0);
}
