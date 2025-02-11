/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   merge_stack.c                                       :+:    :+:           */
/*                                                      +:+                   */
/*   By: jodavis <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2025/02/09 18:26:48 by jodavis        #+#    #+#                */
/*   Updated: 2025/02/11 17:22:59 by jodavis        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	stack_merge(t_data *data)
{
	int	i;
	int	sa;
	int	sb;

	i = 0;
	sa = 0;
	sb = 0;
	while (i++ < data->arg_num / 2)
	{
		pushb(data);
		pushb(data);
		if (sb && sa)
			swap(&data->front_a, &data->front_b);
		else if (sb)
			swap(NULL, &data->front_b);
		else if (sa)
			swap(&data->front_a, NULL);
		print_stacks(data);
	}
}
