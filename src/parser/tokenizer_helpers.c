/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tokenizer_helpers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 10:38:43 by ilsyabri          #+#    #+#             */
/*   Updated: 2026/01/10 10:51:06 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../../includes/push_swap.h"

int	count_tokens_in_string(char *str)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != '\0' && is_space_char(str[i]) == 0)
		{
			count++;
			while (str[i] != '\0' && is_space_char(str[i]) == 0)
				i++;
		}
		else
			i++;
	}
	return	count;
}
