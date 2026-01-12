/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Set_up.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 16:59:39 by ilsyabri          #+#    #+#             */
/*   Updated: 2026/01/12 17:39:20 by ilsyabri         ###   ########.fr       */
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
	long	nb;
	int	ptr[count + 1];
	char	**result = ft_split(arr,' ');

	i = 0;
	while (i < count)
	{
		nb = ft_atol(result[i]);
		if (is_overflow(nb) || check_duplicate(result[i],i,nb))
		{
			do_free(result,count);
			print_error();
		}
		ptr[i] = (int)nb;
		i++;
	}
	ptr[i] = '\0'
}
