/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 18:03:11 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/12/29 18:03:13 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_count_words(char *str)
{
	int i = 0;
	int	word_count = 0;
	int	new_word = 0;
	int	k;

	if (!(str[i] == ' ' || (str[i] >= 0 && str[i] <= 13)))
	{
		i++;
		word_count++;
	}
	while (str[i])
	{
		k = 0;
		while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
			{
				i++;
				new_word = 1;
			}
		if (!(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)) && str[i])
		{
			i++;
			if (new_word == 1)
			{			
				word_count++;
				new_word = 0;
			}
		}
	}
	return (word_count);
}

char **ft_split(char *str)
{
	
}

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%d", ft_count_words(argv[1]));
	return (0);
}