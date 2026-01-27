/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 17:56:41 by ilsyabri          #+#    #+#             */
/*   Updated: 2026/01/27 18:40:02 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	operation_a_to_b(t_node **a, t_node **b, int	track)
{
	if (track == 1)
	{
		write(1,"pa\n",3);
		pb(a,b);
	}
	else if (track == 2)
	{
		write(1,"ra\n",3);
		ra(a);
	}
	else
	{
		write(1,"pa\n",3);
		write(1,"rb\n",3);
		pb(a,b);
		rb(b);
	}
}

void	from_a_to_b(t_node **a, t_node **b, int chunks_size)
{
	int	i;
	int	pos;

	i = 0;
	pos = 0;
	while (*a != NULL)
	{
		if ((*a)->index >= pos && (*a)->index<= chunks_size)
		{
			operation_a_to_b(a,b,1);
			pos++;
			chunks_size++;
		}
		else if ((*a)->index > chunks_size)
			operation_a_to_b(a,b,2);
		else
		{
			operation_a_to_b(a,b,3);
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
	from_a_to_b(a, b, chunks_size);
	print_list(*b);
}
