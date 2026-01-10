/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 11:37:30 by ilsyabri          #+#    #+#             */
/*   Updated: 2026/01/10 14:33:18 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_node	*create_node(long nb)
{
	t_node *new_node = malloc(sizeof(t_node));
		if (new_node == NULL)
			print_error();
	new_node->val = nb;
	new_node->next = NULL;

	return new_node;
}

void	append_node()
{
	t_node *head = NULL;
	t_node *new_node = malloc(sizeof(t_node));
		if (new_node == NULL)
			print_error();
	while (new_node != NULL)
	{
		new_node = create_node(10);
		new_node = new_node->next;
	}
}
