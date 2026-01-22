/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 13:56:45 by ilsyabri          #+#    #+#             */
/*   Updated: 2026/01/22 16:34:34 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    push_chunks(t_node **a, t_node **b, int total)
{
	int	index;
	int	track;
	t_node	*current;

	index = total -1;
	while (index >= 0)
	{
		track = 0;
		current = *a;
		while (current != NULL)
		{
			if (current->index == index)
			{
				write(1,"pb\n",3);
				pb(a,b);
				track = 1;
				break;
			}
			current = current->next;
		}
		if (!track)
		index--;
	}
}
