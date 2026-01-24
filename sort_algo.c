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

void	sorted_to_a(t_node **a, t_node **b,int	total)
{
	int	max;
	int	count;
	int	size;

	count = 0;
	max = total -1;
	size = total / 2;
	while (*b != NULL)
	{
		if ((*b)->index == max)
		{
			if (count <= size)
			{
				while (count > 0)
				{
					write(1,"rb\n",3);
					rb(b);
				count--;
				}
				write(1,"pb\n",3);
				pb(b);
			}
			else if (count >= size)
			{
				while (count < total -1)
				{
					write(1,"rrb\n",4);
					rrb(b);
				count++;
				}
				write(1,"pb\n",3);
				pb(b);
			}
			count = 0;
			max--;
		}
		count++;
	}
}

void	do_operation(t_node **a , t_node **b , int *add , int track)
{
	if (track == 1)
	{
		write(1,"pb\n",3);
		pb(a,b);
		(*add)++;
	}
	else if (track == 2)
	{
		write(1,"pb\n",3);
		write(1,"rb\n",3);
		pb(a,b);
		rb(b);
		(*add)++;
	}
	else if (track == 3)
	{
		write(1,"ra\n",3);
		ra(a);
	}
}

void	dispatch_function (t_node **a, t_node **b,int	chunk_size)
{
	int	pos ;
	int	add ;

	pos = 0;
	add = 0;
	while (*a != NULL)
	{
		if ((*a)->index >= (pos + add) && (*a)->index <= (chunk_size + add))
			do_operation(a,b,&add,1);
		else if ((*a)->index < (pos + add))
			do_operation(a,b,&add,2);
		else if ((*a)->index > (chunk_size + add))
			do_operation(a,b,&add,3);
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
	dispatch_function(a,b,chunk_size);
	sorted_to_a(a,b,total);
}
