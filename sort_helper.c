/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_helper.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 20:05:41 by ilsyabri          #+#    #+#             */
/*   Updated: 2026/01/27 17:31:41 by ilsyabri         ###   ########.fr       */
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

int	find_max_index(t_node *b)
{
	int	max;

	if (b == NULL)
		return (-1);
	max = b->index;
	while (b != NULL)
	{
		if (b->index > max)
			max = b->index;
		b = b->next;
	}
	return (max);
}

void	is_sorted(t_node **a)
{
	t_node	*current;

	current = *a;
	if (a == NULL || *a == NULL || (*a)->next == NULL)
	{
		free_list(*a);
		exit(1);
	}
	while (current != NULL && current->next != NULL)
	{
		if (current->val > current->next->val)
			return ;
		current = current->next;
	}
	free_list(*a);
	exit(1);
}

int	stack_size(t_node **stack)
{
	t_node	*current;
	int		count;

	count = 0;
	current = *stack;
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
