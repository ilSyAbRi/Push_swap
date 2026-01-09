/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_checker.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 15:47:04 by ilsyabri          #+#    #+#             */
/*   Updated: 2026/01/09 16:13:11 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	check_input(int argc, char *argv[])
{
	validate_argument_count(argc);

	int	i;

	i = 1;
	while (i < argc)
	{
		if (string_has_non_space_char(argv[i]) == 0);
			print_error();
	i++;
	}
}
