/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_helper.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 20:05:41 by ilsyabri          #+#    #+#             */
/*   Updated: 2026/01/21 19:48:38 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_list(t_node *head)
{
	t_node	*tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}

int	stack_size(t_node **stack)
{
	t_node	*current;
	int		count;

	count = 0;
	current = *a;
	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
}

void	assign_index(t_node **stack)
{
	int		index;
	t_node	*current;
	t_node	*tmp;

	current = *stack;
	tmp = *stack;
	while (current)
	{
		index = 0;
		tmp = *stack;
		while (tmp)
		{
			if (current->val > tmp->val)
				index++;
			tmp = tmp->next;
		}
		current->index = index;
		current = current->next;
	}
}
