/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 15:45:43 by ilsyabri          #+#    #+#             */
/*   Updated: 2026/01/22 16:48:07 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	print_list(t_node *list)
{
	while (list != NULL)
	{
		printf("%d ", list->val);
		list = list->next;
	}
	printf("\n");
}

int	main(int argc, char *argv[])
{
	t_node	*a;
	t_node	*b;

	b = NULL;
	check_input(argc, argv);
	a = set_up(argv, argc);
	// sort_stack(&a,&b);
	print_list(a);
	free_list(a);
	free_list(b);
	return (0);
}
