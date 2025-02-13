/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   merge_stack.c                                       :+:    :+:           */
/*                                                      +:+                   */
/*   By: jodavis <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2025/02/09 18:26:48 by jodavis        #+#    #+#                */
/*   Updated: 2025/02/11 18:49:37 by jodavis        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int fBn(t_list *lst)
{
	if(*(int *)(lst->content) > *(int *)(lst->next->content))
		return (1);
	return (0);
}

void	stack_merge(t_data *data)
{
	int	i;
	int	sa;
	int	sb;

	i = 1;
	while (++i < data->arg_num / 2)
	{
		push_b(data);
		push_b(data);
		print_stacks(data);
		sa = fBn(data->front_a);
		sb = !fBn(data->front_b);
		if (sa && sb)
			swap(&data->front_a, &data->front_b);
		else if (sa)
			swap(&data->front_a, NULL);
		else if (sb)
			swap(NULL, &data->front_b);
		push_b(data);
		push_b(data);

		print_stacks(data);
	}
}
