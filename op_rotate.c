/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 10:30:13 by ilsyabri          #+#    #+#             */
/*   Updated: 2026/01/20 10:57:41 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_node **a)
{
	t_node	*tmp;
	t_node	*current;

	if (a == NULL)
		return ;
	tmp = (*a);
	tmp->next = NULL;
	*a = (*a)->next;
	current = *a;
	while ((*current)->next != NULL)
		*current = (*current)->next;
	*current = tmp;
	tmp->next = NULL;
}

void	rb(t_node **b);
void	rr(t_node **a, t_node **b);
