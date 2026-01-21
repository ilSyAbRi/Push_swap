/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 16:26:37 by ilsyabri          #+#    #+#             */
/*   Updated: 2026/01/21 14:57:30 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_node **a)
{
	int	tmp;

	if (a == NULL || *a == NULL || (*a)->next == NULL)
		return ;
	tmp = (*a)->val;
	(*a)->val = (*a)->next->val;
	(*a)->next->val = tmp;
}

void	sb(t_node **b)
{
	int	tmp;

	if (b == NULL || *b == NULL || (*b)->next == NULL)
		return ;
	tmp = (*b)->val;
	(*b)->val = (*b)->next->val;
	(*b)->next->val = tmp;
}

void	ss(t_node **a, t_node **b)
{
	sa(a);
	sb(b);
}
