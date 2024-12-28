/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:52:00 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/12/16 16:52:01 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	main(int argc, char *argv[])
{
	int	len;
	int	start;

	start = 0;
	len = 0;
	if (argc == 2)
	{
		len = ft_strlen(argv[1]) - 1;
		while (argv[1][len] == 32 || (argv[1][len] >= 9 && argv[1][len] <= 13))
		{
			len--;
			if (len < 0)
			{
				write(1, "\n", 1);
				return (0);
			}
		}
		start = len;
		while (!(argv[1][start] == 32 || (argv[1][start] >= 9 && argv[1][start] <= 13)) && start != 0)
			start--;
		if (start != 0)
			start++;
		while (start <= len)
		{
			write(1, &argv[1][start], 1);
			start++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
