/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge_fcts1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodavis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 06:47:12 by jodavis           #+#    #+#             */
/*   Updated: 2025/02/19 06:55:39 by jodavis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	merging_xy(t_data *data, int x, int y)
{
	if (!data->index)
		rrotate_b(data);
	else
		rotate_nb(data, y);
	while (x)
	{
		if (!abb(data))
		{
			push_b(data);
			x--;
			swap_b(data);
		}
		else
		{
			while (y && abb(data))
			{
				rrotate_b(data);
				y--;
			}
			if (abb(data))
			{
				push_b(data);
				x--;
			}
		}
	}
	rrotate_nb(data, y);
}

void	merge_xy(t_data *data, int x, int y)
{
	push_nb(data, y);
	if (abb(data))
	{
		push_nb(data, x);
		return ;
	}
	merging_xy(data, x, y - 1);
}

void	sort2345(t_data *data, int n)
{
	if (n == 2)
	{
		if (fbn(data->front_a))
			swap_a(data);
		push_nb(data, 2);
	}
	if (n == 3)
		sort_three(data);
	if (n == 4)
		merge_four(data);
	if (n == 5)
		merge_five(data);
}

void	first_sort(t_data *data)
{
	int	*tab;
	int	i;

	tab = data->merge_sizes;
	i = 0;
	while (i < data->merge_num)
	{
		sort2345(data, tab[i]);
		i++;
	}
}

void	merge_stack_a(t_data *data)
{
	int	*tab;
	int	*new_sizes;
	int	i;

	new_sizes = malloc(sizeof(int) * data->merge_num / 2);
	tab = data->merge_sizes;
	i = 0;
	while (i < data->merge_num)
	{
		data->index = i;
		merge_xy(data, tab[i + 1], tab[i]);
		new_sizes[i / 2] = tab[i] + tab [i + 1];
		i += 2;
	}
	data->index = -1;
	data->merge_num /= 2;
	free(data->merge_sizes);
	data->merge_sizes = new_sizes;
}
