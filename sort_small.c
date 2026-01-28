/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 13:51:04 by ilsyabri          #+#    #+#             */
/*   Updated: 2026/01/28 17:25:26 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_node **stack)
{
	int	first;
	int	second;
	int	third;

	first = (*stack)->index;
	second = (*stack)->next->index;
	third = (*stack)->next->next->index;
	if (first > second && first > third)
	{
		write(1, "ra\n", 3);
		ra(stack);
	}
	else if (second > first && second > third)
	{
		write(1, "rra\n", 4);
		rra(stack);
	}
	if ((*stack)->index > (*stack)->next->index)
	{
		write(1, "sa\n", 3);
		sa(stack);
	}
}

void	sort_5(t_node **stack_a, t_node **stack_b)
{
	while (stack_size(stack_a) > 3)
	{
		if (find_pos_of_min_index(*stack_a,
				find_min_index(*stack_a)) < stack_size(stack_a) / 2)
		{
			while ((*stack_a)->index != find_min_index(*stack_a))
			{
				write(1, "ra\n", 3);
				ra(stack_a);
			}
		}
		else
		{
			while ((*stack_a)->index != find_min_index(*stack_a))
			{
				write(1, "rra\n", 4);
				rra(stack_a);
			}
		}
		pb(stack_a, stack_b);
	}
	sort_3(stack_a);
	write(1, "pa\npa\n", 6);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
}
