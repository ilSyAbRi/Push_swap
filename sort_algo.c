/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 17:56:41 by ilsyabri          #+#    #+#             */
/*   Updated: 2026/01/22 16:48:49 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_stack(t_node **a, t_node **b)
{
	int	total;
	int	number_of_chunks;
	int	chunk_size;

	total = stack_size(a);
	if (total <= 100)
		number_of_chunks = total / 20;
	else
		number_of_chunks = total / 45;
	if (number_of_chunks == 0)
		number_of_chunks = 1;
	chunk_size = total / number_of_chunks;
	assign_index(a);
}
