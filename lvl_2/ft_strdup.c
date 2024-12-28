/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 18:18:30 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/12/14 18:18:32 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	while(str)
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*str_dup;
	int		i;

	i = 0;
	len = ft_strlen(src);
	str_dup = (char *) malloc(sizeof(char) * len + 1);
	if (!str_dup)
		return (NULL);
	while (src[i])
	{
		str_dup[i] = src[i];
		i++;
	}
	str_dup[i] = '\0';
	return (str_dup);
}
