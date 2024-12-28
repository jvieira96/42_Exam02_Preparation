/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 18:00:58 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/12/26 18:01:00 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int k = 0;
	int i = 1;
	int	l;

	l = argc;
	if (argc > 1)
	{
		while (l > 1)
		{
			k = 0;
			while (argv[i][k])
			{
				if (argv[i][k] >= 'A' && argv[i][k] <= 'Z')
					argv[i][k] = argv[i][k] + 32;
				if ((argv[i][k] >= 'a' && argv[i][k] <= 'z') && (argv[i][k + 1] == ' ') 
				|| (argv[i][k + 1] == '\t') || (argv[i][k + 1] == '\0'))
					argv[i][k] = argv[i][k] - 32;
				write(1, &argv[i][k], 1);
				k++;
			}
			i++;
			l--;
		}
	}
	write(1, "\n", 1);
	return (0);
}
