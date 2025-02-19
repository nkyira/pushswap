/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodavis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 09:10:58 by jodavis           #+#    #+#             */
/*   Updated: 2025/02/19 07:59:07 by jodavis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_data	*data;

	if (argc < 2)
		return (0);
	data = setup_data();
	if (!data)
		return (0);
	if (!setup1(data, argc, argv))
		return (0);
	if (!setup2(data))
		return (0);
	first_sort(data);
	while (data->merge_num > 1)
	{
		merge_stack_b(data);
		if (data->merge_num > 1)
			merge_stack_a(data);
	}
	if (!data->front_a)
		push_na(data, data->arg_num);
	clear_all(data);
}
