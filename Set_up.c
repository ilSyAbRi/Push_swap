/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Set_up.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 16:59:39 by ilsyabri          #+#    #+#             */
/*   Updated: 2026/01/12 18:16:15 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_overflow(long nb)
{
	if (nb >= -2147483648 && nb <= 2147483647)
		return 1;
	return 0;
}

int	check_duplicate(char	*arr , int pos, int nb)
{
	int	i;

	i = 0;
	while (i < pos -1)
	{
		if (ft_atol(arr[i]) == nb)
			return 1;
	i++;
	}
	return 0;
}

void	Set_up(char	**arr,int	count)
{
	int	i;
	int	j;
	long	nb;
	int	keep;
	int	ptr[1000];
	char	**numbers;

	i = 0;
	keep = 0;
	while (i < count)
	{
		numbers = ft_split(arr[i],' ');
		j = 0;
		keep = keep + j;
		while (numbers[j])
		{
			nb = ft_atol(numbers[j]);
			if (is_overflow(nb) || check_duplicate(ptr,j + keep,(int)nb))
			{
				do_free(result,count);
				print_error();
			}
			ptr[j + keep] = (int)nb;
		j++;
		}
		ptr[j + keep] = '\0';
	i++;
	}
}
