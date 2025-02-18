/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge_fcts1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodavis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 06:47:12 by jodavis           #+#    #+#             */
/*   Updated: 2025/02/18 07:08:26 by jodavis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void merging_xy(t_data *data, int x, int y)
{
	rotate_nb(data, y);
	while(x)
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
