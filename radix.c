/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                      +:+                   */
/*   By: jodavis <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2025/03/13 12:07:11 by jodavis        #+#    #+#                */
/*   Updated: 2025/03/13 14:27:13 by jodavis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		stack_is_sorted(t_data *data)
{
	t_list	*stack;
	int		i;

	stack = data->front_a;

	i = stack->num;
	stack = stack->next;
	while (stack)
	{
		if (stack->num < i)
			return (0);
		i = stack->num;
		stack = stack->next;
	}
	return (1);
}

void	radix_sort(t_data *data)
{
	int	i;
	int	j;

	while (!stack_is_sorted(data))
	{
		i = data->arg_num;
		j = 0;
		while (i--)
		{
			if (data->front_a->num % 2 == 0)
			{
				data->front_a->num /= 2;
				push_b(data);
				j++;
			}
			else
			{
				data->front_a->num /= 2;
				rotate_a(data);
			}
		}
		push_na(data, j);
	}
}
