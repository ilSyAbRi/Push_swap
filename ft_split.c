/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 15:33:56 by ilsyabri          #+#    #+#             */
/*   Updated: 2026/01/12 16:14:15 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_count_word(const char *str, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
			i--;
		}
		i++;
	}
	return (count);
}

size_t	ft_count_letter(const char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

char	**do_free(char **ptr, size_t j)
{
	size_t	i;

	i = 0;
	while (i < j)
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
	return (NULL);
}

char	*ft_allocate(char **arr, char *str, int n)
{
	int	i;

	i = 0;
	*arr = malloc(sizeof(char) * (n + 1));
	if (*arr == NULL)
		return (NULL);
	while (i < n)
	{
		(*arr)[i] = str[i];
		i++;
	}
	(*arr)[i] = '\0';
	return (*arr);
}

char	**ft_split(char const *arr, char c)
{
	size_t	i;
	size_t	j;
	size_t	count_word;
	char	**ptr;

	if (arr == NULL)
		return (NULL);
	count_word = ft_count_word(arr, c);
	ptr = malloc(sizeof(char *) * (count_word + 1));
	if (ptr == NULL)
		return (NULL);
	j = 0;
	i = 0;
	while (i < count_word)
	{
		while (arr[j] && arr[j] == c)
			j++;
		if (ft_allocate(&ptr[i], &arr[j], ft_count_letter(&arr[j], c)) == NULL)
			return (do_free(ptr, i));
		j = j + ft_count_letter(&arr[j], c);
		i++;
	}
	ptr[i] = NULL;
	return (ptr);
}
