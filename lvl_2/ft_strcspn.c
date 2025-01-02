/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 16:53:17 by jpedro-f          #+#    #+#             */
/*   Updated: 2025/01/02 16:53:18 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i = 0;
	int	k = 0;
	int	count = 0;

	while (s[i])
	{
		while (reject[k] && s[i] != reject[k])
		{
			i++;
			k++;
		}
		if (reject[k] != '\0')
			return (count);
		k = 0;
		i++;
		count++;
	}
	return (count);
}
