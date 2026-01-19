/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 16:26:37 by ilsyabri          #+#    #+#             */
/*   Updated: 2026/01/19 17:00:53 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sa(t_node **a)
{
	t_node	*first;
	t_node	*second;

	if (a == NULL || *a == NULL || (*a)->next == NULL)
		return ;
	first = (*a);
	second = (*a)->next;
	first->next = second->next;
	second->next = first;
	*a = second;
}

void	sb(t_node **b)
{
	t_node	*first;
	t_node	*second;

	if (b == NULL || *b == NULL || (*b)->next == NULL)
		return ;
	first = (*b);
	second = (*b)->next;
	first->next = second->next;
	second->next = first;
	*b = second;
}

void	ss(t_node **a, t_node **b)
{
	sa(a);
	sb(b);
}
