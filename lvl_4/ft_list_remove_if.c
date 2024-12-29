/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 17:33:00 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/12/29 17:33:00 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void ft_list_remove_if(t_list ** begin_list, void *data_ref, int (*cmp)())
{
	t_list *temp = *begin_list;

	if (begin_list ==  NULL || *begin_list == NULL)
		return ;
	if (cmp(data_ref, temp->data) == 0)
	{
		*begin_list = temp->next;
		free(temp);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	else
	{
		temp = *begin_list;
		ft_list_remove_if(&temp->next, data_ref, cmp);
	}
}
