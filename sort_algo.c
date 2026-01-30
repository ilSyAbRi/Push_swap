/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 17:56:41 by ilsyabri          #+#    #+#             */
/*   Updated: 2026/01/30 01:51:44 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	operation_b_to_a(t_node **a, t_node **b, int max_index,
		int pos_of_max_index)
{
	int	size_of_stack;

	size_of_stack = stack_size(b);
	if (pos_of_max_index <= (size_of_stack / 2))
		while ((*b)->index != max_index)
			rb(b);
	else
		while ((*b)->index != max_index)
			rrb(b);
	pa(a, b);
}

void	from_b_to_a(t_node **a, t_node **b)
{
	int	max_index;
	int	pos_of_max_index;

	while (*b != NULL)
	{
		max_index = find_max_index(*b);
		pos_of_max_index = find_pos_of_max_index(*b, max_index);
		operation_b_to_a(a, b, max_index, pos_of_max_index);
	}
}

void	operation_a_to_b(t_node **a, t_node **b, int track)
{
	if (track == 1)
		pb(a, b);
	else if (track == 2)
		ra(a);
	else
	{
		pb(a, b);
		rb(b);
	}
}

void	from_a_to_b(t_node **a, t_node **b, int chunks_size)
{
	int	pos;

	pos = 0;
	while (*a != NULL)
	{
		if ((*a)->index >= pos && (*a)->index <= chunks_size)
		{
			operation_a_to_b(a, b, 1);
			pos++;
			chunks_size++;
		}
		else if ((*a)->index > chunks_size)
			operation_a_to_b(a, b, 2);
		else
		{
			operation_a_to_b(a, b, 3);
			pos++;
			chunks_size++;
		}
	}
}

void	sort_stack(t_node **a, t_node **b)
{
	int	total;
	int	chunks_size;

	total = stack_size(a);
	assign_index(a);
	if (total <= 100)
		chunks_size = 20;
	else
		chunks_size = 45;
	if (total == 2)
		sort_2(a);
	else if (total <= 5)
		small_than_5(a, b);
	else
	{
		from_a_to_b(a, b, chunks_size);
		from_b_to_a(a, b);
	}
}
