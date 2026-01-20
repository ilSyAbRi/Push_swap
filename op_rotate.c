/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 10:30:13 by ilsyabri          #+#    #+#             */
/*   Updated: 2026/01/20 11:33:30 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_node **a)
{
	t_node	*tmp;
	t_node	*current;

	if (a == NULL || *a == NULL || (*a)->next == NULL)
		return ;
	tmp = (*a);
	*a = (*a)->next;
	tmp->next = NULL;
	current = *a;
	while (current->next != NULL)
		current = current->next;
	current->next = tmp;
}

void	rb(t_node **b)
{
	t_node	*tmp;
	t_node	*current;

	if (b == NULL || *b == NULL || (*b)->next == NULL)
		return ;
	tmp = (*b);
	*b = (*b)->next;
	tmp->next = NULL;
	current = *b;
	while (current->next != NULL)
		current = current->next;
	current->next = tmp;
}

void	rr(t_node **a, t_node **b)
{
	ra(a);
	rb(b);
}
