/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Set_up.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 16:59:39 by ilsyabri          #+#    #+#             */
/*   Updated: 2026/01/12 21:12:20 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

int	count_element(char **arr , int	count)
{
	int		i;
	int		j;
	int	total;
	char	**numbers;

	total = 0;
	j = 0;
	i = 0;
	while (i < count)
	{
		numbers = ft_split(arr[i], ' ');
			if (numbers == NULL)
				print_error();
		j = 0;
		while (numbers[j] != NULL)
		{
			total++;
			j++;
		}
		do_free(numbers, j);
		i++;
	}
	return (total);
}

void	set_up(char **arr, int count)
{
	int		i;
	int		j;
	int		total;
	int		*ptr;
	char	**numbers;

	i = 0;
	total = 0;
	ptr = malloc(sizeof(int) * count_element(arr,count));
	if (ptr == NULL)
		print_error();
	while (i < count)
	{
		numbers = ft_split(arr[i], ' ');
		if (numbers == NULL)
			print_error();
		j = 0;
		while (numbers[j] != NULL)
		{
			ptr[total++] = check_set_up(numbers, ptr, j, total);
			j++;
		}
		do_free(numbers, j);
		i++;
	}
}
