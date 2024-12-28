/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 18:27:58 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/12/14 18:28:03 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;
	int j;

	j = 0;
	i = 0;
	if (!s1 || !s2)
		return (NULL);
	while(s1[i])
	{
		j = 0;
		while(s2[j])
		{
			if (s1[i] == s2[j])
				return (&s1[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
