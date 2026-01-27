/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 17:56:41 by ilsyabri          #+#    #+#             */
/*   Updated: 2026/01/27 14:05:35 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_operation2(t_node **a, t_node **b, int count, int total)
{
	int	size;

	size = total / 2;
	if (count <= size)
	{
		while (count > 0)
		{
			write(1, "rb\n", 3);
			rb(b);
			count--;
		}
		write(1, "pa\n", 3);
		pa(a, b);
	}
	else if (count > size)
	{
		while (count < (total - 1))
		{
			write(1, "rrb\n", 4);
			rrb(b);
			count++;
		}
		write(1, "pa\n", 3);
		pa(a, b);
	}
}

void	dispatch_function2(t_node **a, t_node **b, int total)
{
	int		max;
	int		count;
	t_node	*tmp;

	count = 0;
	max = total - 1;
	tmp = *b;
	while (tmp != NULL)
	{
		if (tmp->index == max)
		{
			do_operation2(a, b, count, total);
			count = 0;
			total--;
			max--;
			tmp = *b;
		}
		else
		{
			tmp = tmp->next;
			count++;
		}
	}
}

void	do_operation1(t_node **a, t_node **b, int *add, int track)
{
	if (track == 1)
	{
		write(1, "pb\n", 3);
		pb(a, b);
		(*add)++;
	}
	else if (track == 2)
	{
		write(1, "pb\n", 3);
		write(1, "rb\n", 3);
		pb(a, b);
		rb(b);
		(*add)++;
	}
	else if (track == 3)
	{
		write(1, "ra\n", 3);
		ra(a);
	}
}

void	dispatch_function1(t_node **a, t_node **b, int chunk_size)
{
	int	pos;
	int	add;

	pos = 0;
	add = 0;
	while (*a != NULL)
	{
		if ((*a)->index >= (pos + add) && (*a)->index <= (chunk_size + add))
			do_operation1(a, b, &add, 1);
		else if ((*a)->index < (pos + add))
			do_operation1(a, b, &add, 2);
		else if ((*a)->index > (chunk_size + add))
			do_operation1(a, b, &add, 3);
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
	dispatch_function1(a, b, chunks_size);
	dispatch_function2(a, b, total);
}
