/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 15:39:16 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/12/20 15:39:17 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}
int	get_digit(char c, int digits_in_base)
{
	int	max_digit;

	if (digits_in_base <= 10)
		max_digit = digits_in_base + '0';
	else
		max_digit = digits_in_base - 10 - 1 + 'a';
	if (c >= '0' && c <= '9' && c <= max_digit)
		return (c - '0');
	if (c >= 'a' && c <= 'f' && c <= max_digit)
		return (10  + c - 'a');
	else
		return (-1);
	
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	sign = 1;
	int digit = 0;
	int	result = 0;

	if (str == '\0' || str_base < 2 || str_base > 16)
		return (0);
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str)
	{
		digit = get_digit(to_lower(*str), str_base);
		if (digit == -1)
			break ;
		result = result * str_base + digit;
		str++;
	}
	return (result * sign);
}
