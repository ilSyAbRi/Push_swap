/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 13:51:04 by ilsyabri          #+#    #+#             */
/*   Updated: 2026/01/28 15:59:33 by ilsyabri         ###   ########.fr       */
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
		ra(stack);
	else if (second > first && second > third)
		rra(stack);
	if ((*stack)->index > (*stack)->next->index)
		sa(stack);
}

void	sort_5(t_node **stack_a, t_node **stack_b)
{
	int	i;
	int	min;

	i = 0;
	while (i < 2)
	{
		min = find_min_index(*stack_a);
		while ((*stack_a)->index != min)
			rb(stack_a);
		pb(stack_a, stack_b);
		i++;
	}
	sort_3(stack_a);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
}
