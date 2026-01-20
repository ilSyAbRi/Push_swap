/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Set_up.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 16:59:39 by ilsyabri          #+#    #+#             */
/*   Updated: 2026/01/20 11:56:06 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	append_numbers(char **numbers, int *ptr, t_counters *counter)
{
	long	nb;
	int		track;

	track = 0;
	(*counter).j = 0;
	while (numbers[(*counter).j] != NULL)
	{
		if (ft_strlen(numbers[(*counter).j]) > 11)
			track = 1;
		nb = ft_atol(numbers[(*counter).j]);
		if (is_overflow(nb) || check_duplicate(ptr, (*counter).total, (int)nb))
			track = 1;
		ptr[(*counter).total] = nb;
		(*counter).j++;
		(*counter).total++;
	}
	if (track == 1)
	{
		do_free(numbers, (*counter).j);
		free(ptr);
		print_error();
	}
}

t_node	*set_up(char **arr, int count)
{
	int			*ptr;
	char		**numbers;
	t_counters	counter;
	t_node		*a;

	counter.i = 1;
	counter.total = 0;
	ptr = malloc(sizeof(int) * count_element(arr, count));
	if (ptr == NULL)
		exit(1);
	while (counter.i < count)
	{
		numbers = ft_split(arr[counter.i], ' ');
		if (numbers == NULL)
		{
			free(ptr);
			exit(1);
		}
		append_numbers(numbers, ptr, &counter);
		do_free(numbers, counter.j);
		counter.i++;
	}
	a = array_to_list(ptr, counter.total);
	free(ptr);
	return (a);
}
