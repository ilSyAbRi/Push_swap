/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_helper.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 20:05:41 by ilsyabri          #+#    #+#             */
/*   Updated: 2026/01/21 18:23:48 by ilsyabri         ###   ########.fr       */
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
