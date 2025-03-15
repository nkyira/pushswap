/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setup.c                                             :+:    :+:           */
/*                                                    +:+ +:+         +:+     */
/*   By: jodavis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 01:47:37 by jodavis           #+#    #+#             */
/*   Updated: 2025/03/13 11:56:51 by jodavis        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	clear_all(t_data *data)
{
	if (data->did_split)
		freesplit(data->str_tab, data->arg_num);
	clear_lst(data->front_a);
	clear_lst(data->front_b);
	free(data->int_tab);
	free(data->merge_sizes);
	free(data);
	return (0);
}

t_data	*setup_data(void)
{
	t_data	*data;

	data = malloc(sizeof(t_data));
	if (!data)
		return (NULL);
	data->merge_sizes = malloc(sizeof(int));
	if (!data->merge_sizes)
	{
		clear_all(data);
		return (NULL);
	}
	data->front_a = NULL;
	data->front_b = NULL;
	data->index = -1;
	return (data);
}

int	setup1(t_data *data, int argc, char **argv)
{
	if (argc == 2)
	{
		data->str_tab = ft_split(*(argv + 1), ' ');
		data->did_split = 1;
	}
	else
	{
		data->str_tab = argv + 1;
		data->did_split = 0;
	}
	data->int_tab = NULL;
	data->arg_num = tab_len(data->str_tab);
	if (!error_check(data->str_tab))
		return (clear_all(data));
	data->int_tab = malloc(sizeof(int) * data->arg_num);
	atoi_tab(data);
	if (!interror_check(data))
		return (clear_all(data));
	return (1);
}

int get_min(t_data *data)
{
	int min;
	int	i;

	min = 0;
	i = -1;
	while (++i < data->arg_num)
		if (data->int_tab[i] < min)
			min = data->int_tab[i];
	return (min);
}

int	setup2(t_data *data)
{
	int		i;
	int		*temp_tab;
	t_list	*stack;

	*data->merge_sizes = data->arg_num;
	data->merge_sizes = merge_split(data->merge_sizes, 1);
	data->merge_num = find_size(data->arg_num, *data->merge_sizes);
	i = data->arg_num;
	temp_tab = data->int_tab;
	data->front_a = ft_lstnew(temp_tab++);
	while (--i)
		ft_lstadd_back(&data->front_a, ft_lstnew(temp_tab++));
	stack = data->front_a;
	while (stack)
	{
		stack->num = -1;
		stack = stack->next;
	}
	return (1);
}
