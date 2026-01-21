/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 15:13:42 by ilsyabri          #+#    #+#             */
/*   Updated: 2026/01/21 15:25:08 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    rra(t_node **a)
{
	if (a == NULL || *a == NULL || (*a)->next == NULL)
		return ;
	t_node	*current;

	current = *a;

	while (current->next != NULL)
		current = current->next;
	current = *a;
	current = current->next;
	while (current->next != current)
		current = current->next;
	current = NULL;
}
void    rrb(t_node **b);
void    rrr(t_node **a, t_node **b);
