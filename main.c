/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                              :+:    :+:           */
/*                                                    +:+ +:+         +:+     */
/*   By: jodavis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 09:10:58 by jodavis           #+#    #+#             */
/*   Updated: 2025/02/14 19:08:21 by jodavis        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	clear_all(t_data *data)
{
	clear_lst(data->front_a);
	clear_lst(data->front_b);
	free(data->int_tab);
	free(data);
	return (0);
}

int	setup(t_data *data, int argc, char **argv)
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
	if (!error_check(data->str_tab))
		return (clear_all(data));
	data->arg_num = tab_len(data->str_tab);
	data->int_tab = malloc(sizeof(int) * data->arg_num);
	atoi_tab(data);
	if (data->did_split)
		free(data->str_tab);
	if (!interror_check(data))
		return (clear_all(data));
	return (1);
}

int	main(int argc, char **argv)
{
	t_data	*data;
	int		i;
	int		*temp_tab;

	if (argc < 2)
		return (0);
	data = malloc(sizeof(t_data));
	data->front_a = NULL;
	data->front_b = NULL;
	if (!data)
		return (0);
	if (!setup(data, argc, argv))
		return (0);
	i = data->arg_num;
	temp_tab = data->int_tab;
	data->front_a = ft_lstnew(temp_tab++);
	while (--i)
		ft_lstadd_back(&data->front_a, ft_lstnew(temp_tab++));
	print_stacks(data);
	merge_four(data);
	clear_all(data);
}
