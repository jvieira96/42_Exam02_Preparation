/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 16:37:30 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/12/30 16:37:32 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	int start;
	int end;
	int	flag = 0;

	if (argc < 2)
		return (write(1, "\n", 1));
	while (argv[1][i] && argv[1][i] == 32 || (argv[1][i] >= 9 && argv[1][i] <= 13))
		i++;
	start = i;
	while (argv[1][i] && !(argv[1][i] == 32 || argv[1][i] >= 9 && argv[1][i] <= 13))
		i++;
	end = i - 1;
	while (argv[1][i])
	{
		while (argv[1][i] && argv[1][i] == 32 || (argv[1][i] >= 9 && argv[1][i] <= 13))
			i++;
		while (argv[1][i] && !(argv[1][i] == 32 || argv[1][i] >= 9 && argv[1][i] <= 13))
		{
			write(1, &argv[1][i], 1);
			i++;
			flag = 1;
		}
		if (argv[1][i] && argv[1][i] == 32 || (argv[1][i] >= 9 && argv[1][i] <= 13))
			write(1, " ", 1);
	}
	if (start <= end)
	{
		if (flag == 1)
			write(1, " ", 1);
		while (start <= end)
		{
			write(1, &argv[1][start], 1);
			start++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
