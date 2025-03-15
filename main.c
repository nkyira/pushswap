/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodavis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 09:10:58 by jodavis           #+#    #+#             */
/*   Updated: 2025/03/13 14:27:04 by jodavis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	all_setup(t_data *data, int argc, char **argv)
{
	if (!setup1(data, argc, argv))
		return (0);
	if (!setup2(data))
		return (0);
	if (data->arg_num <= 5)
	{
		small_sort(data);
		clear_all(data);
		return (0);
	}
	return (1);
}

int	contains_space(char *s)
{
	while (*s)
	{
		if (*s == ' ')
			return (1);
		s++;
	}
	return (0);
}
void	merge_sort(t_data *data)
{
	first_sort(data);
	while (data->merge_num > 1)
	{
		merge_stack_b(data);
		if (data->merge_num > 1)
			merge_stack_a(data);
	}
	if (!data->front_a)
		push_na(data, data->arg_num);
}
int	main(int argc, char **argv)
{
	t_data	*data;

	if (argc < 2)
		return (0);
	if (argc == 2 && !contains_space(argv[1]))
	{
		is_all_digit(argv + 1);
		return (0);
	}
	data = setup_data();
	if (!data)
		return (0);
	if (!all_setup(data, argc, argv))
		return (0);
	radix_sort(data);;
	clear_all(data);
}
