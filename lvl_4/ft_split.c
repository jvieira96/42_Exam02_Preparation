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

char *ft_strncpy(char *s1, char *s2, int n)
{
	int	i = 0;

	while (i < n && s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);	
}

char **ft_split(char *str)
{
	int		words = 0;
	int		i = 0;
	int		k = 0;
	int		j = 0;
	char	**strings;

	while (str[i])
	{
		while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
			i++;
		if (str[i])
			words++;
		while (str[i] && !(str[i] == 32 || (str[i] >= 9 && str[i] <= 13)))
			i++;
	}
	i = 0;
	strings = (char **) malloc(sizeof(char *) * (words + 1));
	if (!strings)
		return (NULL);
	while (str[i])
	{
		while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
			i++;
		k = i;
		while (str[i] && !(str[i] == 32 || (str[i] >= 9 && str[i] <= 13)))
			i++;
		if (i > k)
		{
			strings[j] = (char *) malloc(sizeof(char) * ((i - k) + 1));
			ft_strncpy(strings[j], &str[k], i - k);
			j++;
		}
	}
	strings[words] = NULL;
	return (strings);
}

/* int	main(int argc, char *argv[])
{
	int		i = 0;
	char	**strings;
	(void)argc;
	strings = ft_split(argv[1]);
	while (strings[i])
	{
		printf("%s", strings[i]);
		printf("\n");
		i++;
	}
	return (0);
} */