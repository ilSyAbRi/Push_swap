/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_helper2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 18:55:34 by ilsyabri          #+#    #+#             */
/*   Updated: 2026/01/28 17:27:53 by ilsyabri         ###   ########.fr       */
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

int	find_pos_of_min_index(t_node *tmp, int min_index)
{
	int	index;

	index = 0;
	while (tmp != NULL)
	{
		if (tmp->index == min_index)
			return (index);
		tmp = tmp->next;
		index++;
	}
	return (-1);
}

int	find_min_index(t_node *tmp)
{
	int	min;

	if (tmp == NULL)
		return (-1);
	min = tmp->index;
	while (tmp != NULL)
	{
		if (min > tmp->index)
			min = tmp->index;
		tmp = tmp->next;
	}
	return (min);
}
