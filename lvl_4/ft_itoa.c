/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 21:07:03 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/12/28 21:07:04 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_len(int nbr)
{
	int	i = 0;


	if (nbr >= 0 && nbr <= 9)
		return (1);
	if (nbr < 0)
		i++;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

int	ft_abs(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

char *ft_itoa(int nbr)
{
	char	*str_nbr;
	int		len;
	int		i = 0;
	int		nbr_negative = 1;

	len = ft_len(nbr);
	str_nbr = (char *)malloc(sizeof(char) * (len + 1));
	if (!str_nbr)
		return (NULL);
	if (nbr < 0)
	{
		str_nbr[0] = '-';
		i++;
		nbr_negative = 0;

	}
	str_nbr[len] = '\0';
	while (i < len)
	{
		str_nbr[len - i - nbr_negative] = ft_abs(nbr % 10) + '0';
		nbr = nbr / 10;
		i++;
	}
	return (str_nbr);
}

/* int main (void)
{
	printf("%s", ft_itoa(-42));
	return (0);
} */