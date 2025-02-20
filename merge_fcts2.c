/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge_fcts2.c                                       :+:    :+:           */
/*                                                    +:+ +:+         +:+     */
/*   By: jodavis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 04:49:18 by jodavis           #+#    #+#             */
/*   Updated: 2025/02/20 09:42:30 by jodavis        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	handle_rotate_rev(t_data *data, int y)
{
	if (data->index == data->merge_num)
	{
		rrotate_a(data);
		return (0);
	}
	else
	{
		while (!abb(data) && y)
		{
			rotate_a(data);
			y--;
		}
	}
	return (y);
}

void	merging_xy_rev(t_data *data, int x, int y)
{
	y -= handle_rotate_rev(data, y);
	while (x)
	{
		if (!abb(data))
		{
			push_a(data);
			x--;
			swap_a(data);
		}
		else
		{
			while (y && abb(data))
			{
				rrotate_a(data);
				y--;
			}
			if (abb(data))
			{
				push_a(data);
				x--;
			}
		}
	}
	rrotate_na(data, y);
}

void	merge_xy_rev(t_data *data, int x, int y)
{
	push_na(data, y);
	if (abb(data))
	{
		push_na(data, x);
		return ;
	}
	merging_xy_rev(data, x, y - 1);
}

void	merge_stack_b(t_data *data)
{
	int	*tab;
	int	*new_sizes;
	int	i;

	new_sizes = malloc(sizeof(int) * data->merge_num / 2);
	tab = data->merge_sizes;
	i = data->merge_num;
	while (i)
	{
		data->index = i;
		merge_xy_rev(data, tab[i - 2], tab[i - 1]);
		new_sizes[i / 2 - 1] = tab[i - 1] + tab [i - 2];
		i -= 2;
	}
	data->index = -1;
	data->merge_num /= 2;
	free(data->merge_sizes);
	data->merge_sizes = new_sizes;
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
