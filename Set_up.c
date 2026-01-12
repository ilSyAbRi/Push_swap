/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Set_up.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 16:59:39 by ilsyabri          #+#    #+#             */
/*   Updated: 2026/01/12 19:18:58 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_overflow(long nb)
{
	if (nb >= -2147483648 && nb <= 2147483647)
		return 0;
	return 1;
}

int	check_duplicate(int	*arr , int pos, int nb)
{
	int	i;

	i = 0;
	if (pos == 0)
		return 0;
	while (i < pos -1)
	{
		if (arr[i] == nb)
			return 1;
	i++;
	}
	return 0;
}
int	check_set_up(char *number,int i,int **ptr,int total)
{
	long nb;

	nb = ft_atol(number[i]);
	if (is_overflow(nb) || check_duplicate(ptr,total,(int)nb))
	{
		do_free(ptr,total);
		do_free(numbers,i);
		print_error();
		}
	}
	return (int)nb;
}

void	Set_up(char	**arr,int	count)
{
	int	i;
	int	j;
	int	total;
	int	ptr[1000];
	char **numbers;

	i = 0;
	total = 0;
	while (i < count)
	{
		numbers = ft_split(arr[i],' ');
		j = 0;
		while (numbers[j] != NULL)
		{
			ptr[total++] = check_set_up(numbers[j],j,&ptr,total);
		j++;
		}
		do_free(numbers,j);
	i++;
	}
}
