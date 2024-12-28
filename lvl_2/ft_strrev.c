/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 18:39:59 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/12/14 18:40:00 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char *ft_strrev(char *str)
{
	int		len;
	int 	i;
	char	temp;

	i = 0;
	len = 0;
	while (str[len])
		len++;
	len--;
	while (i < len)
	{
		temp = str[i];
		str[i] = str[len];
		str[len] = temp;
		i++;
		len--;
	}
	return (str);
}

/* int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s", ft_strrev(argv[1]));
	return (0);
} */