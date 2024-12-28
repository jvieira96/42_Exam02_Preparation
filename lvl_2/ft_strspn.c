/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 15:05:46 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/12/16 15:05:47 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
// #include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i;
	size_t	j;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j] && s[i] != accept[j])
			j++;
		if (accept[j] == '\0')
			return (count);
		count++;
		i++;
	}
	return (count);
}

/* int main(int argc, char *argv[])
{
	(void)argc;
	printf("%zu", ft_strspn(argv[1], argv[2]));
	return (0);
} */
