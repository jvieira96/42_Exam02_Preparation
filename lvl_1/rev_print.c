/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 17:30:29 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/12/11 17:30:31 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


char *rev_print(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i-- > 0)
		write(1, &str[i], 1);
	write(1, "\n", 1);
	return (str);
}

/* int main(void)
{
	char *str = "ola pla";

	rev_print(str);
	return (0);
} */