/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   swap_fcts.c                                        :+:      :+:    :+:   */
/*                                                      +:+                   */
/*   By: jodavis <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2025/02/05 12:51:31 by jodavis        #+#    #+#                */
/*   Updated: 2025/02/18 02:50:06 by jodavis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_stack(t_list **front_s)
{
	t_list	*temp;

	if (!front_s)
		return ;
	if (!*front_s || !(*front_s)->next)
		return ;
	temp = (*front_s)->next->next;
	ft_lstadd_front(front_s, (*front_s)->next);
	(*front_s)->next->next = temp;
}

void	swap_a(t_data *data)
{
	swap_stack(&data->front_a);
	ft_printf("sa\n");
}

void	swap_b(t_data *data)
{
	swap_stack(&data->front_b);
	ft_printf("sb\n");
}

void	swap_s(t_data *data)
{
	swap_stack(&data->front_a);
	swap_stack(&data->front_b);
	ft_printf("ss\n");
}

