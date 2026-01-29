/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 15:13:42 by ilsyabri          #+#    #+#             */
/*   Updated: 2026/01/21 16:19:00 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_node **a)
{
	t_node	*last;
	t_node	*prev;

	if (a == NULL || *a == NULL || (*a)->next == NULL)
		return ;
	last = *a;
	while (last->next != NULL)
	{
		prev = last;
		last = last->next;
	}
	last->next = *a;
	*a = last;
	prev->next = NULL;
		write(1, "rra\n", 4);
}

void	rrb(t_node **b)
{
	t_node	*last;
	t_node	*prev;

	if (b == NULL || *b == NULL || (*b)->next == NULL)
		return ;
	last = *b;
	while (last->next != NULL)
	{
		prev = last;
		last = last->next;
	}
	last->next = *b;
	*b = last;
	prev->next = NULL;
	write(1, "rrb\n", 4);
}

void	rrr(t_node **a, t_node **b)
{
	rra(a);
	rrb(b);
	write(1, "rrr\n", 4);
}
