/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                              :+:    :+:           */
/*                                                    +:+ +:+         +:+     */
/*   By: jodavis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 09:10:58 by jodavis           #+#    #+#             */
/*   Updated: 2025/02/05 17:43:38 by jodavis        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	i;
	t_list	*front_a;
	t_list	*front_b;
	t_list	*OO;

	front_a = ft_lstnew(argv[1]);
	front_b = NULL;
	OO = NULL;

	i = 1;
	while (++i < argc)
		ft_lstadd_back(&front_a, ft_lstnew(argv[i]));
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
	if (OO)
		return (0);
}
