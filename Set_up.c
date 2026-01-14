/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Set_up.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 16:59:39 by ilsyabri          #+#    #+#             */
/*   Updated: 2026/01/14 15:31:00 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

typedef struct counters
{
	int	i;
	int	j;
	int	total;
}		t_counters;

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

int	check_set_up(char **numbers, int *ptr, int j, int total)
{
	long	nb;

	nb = ft_atol(numbers[j]);
	if (is_overflow(nb) || check_duplicate(ptr, total, (int)nb))
	{
		do_free(numbers, j);
		print_error();
	}
	return ((int)nb);
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

int	set_up(char **arr, int count)
{
	int			*ptr;
	char		**numbers;
	t_counters	counter;

	counter.i = 0;
	counter.total = 0;
	ptr = malloc(sizeof(int) * count_element(arr, count));
	if (ptr == NULL)
		print_error();
	while (counter.i < count)
	{
		numbers = ft_split(arr[counter.i], ' ');
		if (numbers == NULL)
			print_error();
		counter.j = 0;
		while (numbers[counter.j] != NULL)
		{
			ptr[counter.total] = check_set_up(numbers, ptr, counter.j,
					counter.total);
			counter.j++;
			counter.total++;
		}
		do_free(numbers, counter.j);
		counter.i++;
	}
	return (1);
}
