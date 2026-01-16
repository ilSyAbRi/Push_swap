/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Set_up_helper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 15:44:41 by ilsyabri          #+#    #+#             */
/*   Updated: 2026/01/16 19:47:28 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*array_to_list(int *arr, int size)
{
	t_node	*head;
	t_node	*last;
	t_node	*new;
	int		i;

	head = NULL;
	i = 0;
	while (i < size)
	{
		new = malloc(sizeof(t_node));
		if (new == NULL)
			return (NULL);
		new->val = arr[i];
		new->next = NULL;
		if (head == NULL)
		{
			head = new;
			last = new;
		}
		else
		{
			last->next = new;
			last = new;
		}
		i++;
	}
	return (head);
}

int	is_overflow(long nb)
{
	if (nb >= -2147483648 && nb <= 2147483647)
		return (0);
	return (1);
}

int	check_duplicate(int *arr, int pos, int nb)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (arr[i] == nb)
			return (1);
		i++;
	}
	return (0);
}

int	count_element(char **arr, int count)
{
	char		**numbers;
	t_counters	counter;

	counter.total = 0;
	counter.j = 0;
	counter.i = 0;
	while (counter.i < count)
	{
		numbers = ft_split(arr[counter.i], ' ');
		if (numbers == NULL)
			print_error();
		counter.j = 0;
		while (numbers[counter.j] != NULL)
		{
			counter.total++;
			counter.j++;
		}
		do_free(numbers, counter.j);
		counter.i++;
	}
	return (counter.total);
}
