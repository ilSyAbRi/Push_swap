/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 17:56:41 by ilsyabri          #+#    #+#             */
/*   Updated: 2026/01/23 20:01:52 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	dispatch_function (t_node **a, t_node **b,int	chunk_size)
{
	int	pos = 0;
	int	add = 0;

	while (*a != NULL)
	{
		if ((*a)->index >= (pos + add) && (*a)->index <= (chunk_size + add))
		{
			pb(a,b);
			add++;
		}
		else if ((*a)->index <= (pos + add))
		{
			pb(a,b);
			rb(a,b);
		}
		else if ((*a)->index >= (chunk_size + add))
		{
			ra(a,b);
		}
	current = current->next;
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
}
