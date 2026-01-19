/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 16:26:37 by ilsyabri          #+#    #+#             */
/*   Updated: 2026/01/19 15:21:16 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sa(t_node **a)
{
	t_node	*first;
	t_node	*second;

	if (a == NULL || *a == NULL || (*a)->next == NULL)
		exit(1);
	first = (*a);
	second = (*a)->next;
	first->next = second->next;
	second->next = first;
	*a = second;
}

void	sb(t_node **b)
{
}
void	ss(t_node **a, t_node **b)
{
}
