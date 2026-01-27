/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_helper2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 18:55:34 by ilsyabri          #+#    #+#             */
/*   Updated: 2026/01/27 19:42:01 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_pos_of_max_index(t_node *tmp, int max_index)
{
	int	index;

	index = 0;
	while (tmp != NULL)
	{
		if (tmp->index == max_index)
			return (index);
		index++;
		tmp = tmp->next;
	}
	return (-1);
}
