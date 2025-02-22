/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodavis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 14:24:50 by jodavis           #+#    #+#             */
/*   Updated: 2025/02/22 14:45:38 by jodavis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_data *data)
{
	if (fbn(data->front_a))
		swap_a(data);
	if (fbn(data->front_a->next))
		rrotate_a(data);
	if (fbn(data->front_a))
		swap_a(data);
}

void	sort_4(t_data *data)
{
	if (fbn(data->front_a))
		swap_a(data);
	push_nb(data, 2);
	if (fbn(data->front_a))
		swap_a(data);
	merging_xy_rev(data, 2, 1);
}

void	sort_5ii(t_data *data, int min, int max)
{
	int	i;

	i = 3;
	while (i && *(int *)data->front_b->content > max)
	{
		push_a(data);
		i--;
	}
	rrotate_a(data);
	while (i && *(int *)data->front_b->content > min)
	{
		push_a(data);
		i--;
	}
	rrotate_a(data);
	while (i && *(int *)data->front_b->content)
	{
		push_a(data);
		i--;
	}
}

void	sort_5(t_data *data)
{
	int	max;
	int	min;

	push_nb(data, 3);
	if (!fbn(data->front_b))
		swap_b(data);
	if (!fbn(data->front_b->next))
		rrotate_b(data);
	if (!fbn(data->front_b))
		swap_b(data);
	if (fbn(data->front_a))
		swap_a(data);
	min = *(int *)data->front_a->content;
	max = *(int *)data->front_a->next->content;
	sort_5ii(data, min, max);
}

void	small_sort(t_data *data)
{
	if (data->arg_num == 2)
	{
		if (fbn(data->front_a))
			swap_a(data);
	}
	if (data->arg_num == 3)
		sort_3(data);
	if (data->arg_num == 4)
		sort_4(data);
	if (data->arg_num == 5)
		sort_5(data);
}
