/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                              :+:    :+:           */
/*                                                    +:+ +:+         +:+     */
/*   By: jodavis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 09:10:58 by jodavis           #+#    #+#             */
/*   Updated: 2025/02/06 15:29:19 by jodavis        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*front_a;
	t_list	*front_b;
	t_list	*null;
	char	**str_tab;

	if (argc < 2)
		return (0);
	if (argc == 2)
		str_tab = ft_split(*(argv + 1), ' ');
	else
		str_tab = argv + 1;
	if (!error_check(str_tab))
		return (0);
	front_a = ft_lstnew(*str_tab);
	front_b = NULL;
	null = NULL;
	while (*(++str_tab))
		ft_lstadd_back(&front_a, ft_lstnew(*str_tab));
	print_stacks(front_a, front_b);
	rrotate(&front_a, &front_b);
	print_stacks(front_a, front_b);
	push_b(&front_a, &front_b);
	print_stacks(front_a, front_b);
	rrotate(&front_a, &front_b);
	print_stacks(front_a, front_b);
	push_b(&front_a, &front_b);
	print_stacks(front_a, front_b);
	rrotate(&front_a, &front_b);
	print_stacks(front_a, front_b);
	push_b(&front_a, &front_b);
	print_stacks(front_a, front_b);
	rrotate(&front_a, &front_b);
	print_stacks(front_a, front_b);
	push_b(&front_a, &front_b);
	print_stacks(front_a, front_b);
	rrotate(&front_a, &front_b);
	print_stacks(front_a, front_b);
	push_b(&front_a, &front_b);
	print_stacks(front_a, front_b);
	rrotate(&front_a, &front_b);
	print_stacks(front_a, front_b);
	push_b(&front_a, &front_b);
	print_stacks(front_a, front_b);
	rrotate(&front_a, &front_b);
	print_stacks(front_a, front_b);
	push_b(&front_a, &front_b);
	print_stacks(front_a, front_b);
	rrotate(&front_a, &front_b);
	print_stacks(front_a, front_b);
	push_b(&front_a, &front_b);
	print_stacks(front_a, front_b);
	rrotate(&front_a, &front_b);
	print_stacks(front_a, front_b);
	push_b(&front_a, &front_b);
	print_stacks(front_a, front_b);
	if (null)
		return (0);
}
