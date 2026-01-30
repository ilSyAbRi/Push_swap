/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 15:45:43 by ilsyabri          #+#    #+#             */
/*   Updated: 2026/01/30 03:03:24 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_node	*a;
	t_node	*b;

	b = NULL;
	check_input(argc, argv);
	a = set_up(argv, argc);
	is_sorted(&a);
	sort_stack(&a, &b);
	free_list(a);
	free_list(b);
	return (0);
}
