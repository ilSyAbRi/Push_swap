/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 17:27:31 by ilsyabri          #+#    #+#             */
/*   Updated: 2026/01/19 19:35:24 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    pa(t_node **a, t_node **b)
{
	if (a == NULL || b == NULL)
		return;
	t_node	*tmp;

	tmp = *b;
	*b = (*b)->next;
	tmp->next = (*a)->next;
	*a = tmp;
}

void    pb(t_node **a, t_node **b)
{
	if (a == NULL || b == NULL)
		return;
}
