/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   interror_check.c                                    :+:    :+:           */
/*                                                      +:+                   */
/*   By: jodavis <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2025/02/11 15:34:52 by jodavis        #+#    #+#                */
/*   Updated: 2025/02/20 09:49:49 by jodavis        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_data *data)
{
	int	temp;
	int	*tab;
	int	n;

	n = data->arg_num;
	tab = data->int_tab;
	temp = *(tab++);
	while (--n)
	{
		if (temp > *tab)
			return (0);
		temp = *tab;
		tab++;
	}
	return (1);
}

int	is_double(t_data *data, int pos)
{
	int	i;

	i = pos;
	while (++i < data->arg_num)
	{
		if (data->int_tab[i] == data->int_tab[pos])
		{
			return (1);
		}
	}
	return (0);
}

int	contains_double(t_data *data)
{
	int	i;

	i = -1;
	while (++i < data->arg_num)
		if (is_double(data, i))
			return (1);
	return (0);
}

int	interror_check(t_data *data)
{
	if (contains_double(data) || is_sorted(data))
	{
		ft_printf("Error\n");
		return (0);
	}
	if (is_sorted(data))
	{
		ft_printf("Error\n");
		return (0);
	}
	return (1);
}
