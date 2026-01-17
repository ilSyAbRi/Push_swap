/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 15:45:43 by ilsyabri          #+#    #+#             */
/*   Updated: 2026/01/17 11:11:41 by ilsyabri         ###   ########.fr       */
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

	check_input(argc, argv);
	a = set_up(argv, argc);
	print_list(a);
	return (0);
}
