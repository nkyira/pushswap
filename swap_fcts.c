/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   swap_fcts.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: jodavis <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2025/02/05 12:51:31 by jodavis        #+#    #+#                */
/*   Updated: 2025/02/05 16:00:22 by jodavis        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_stack(t_list **front_s)
{
	t_list	*temp;

	if (!*front_s || !(*front_s)->next)
		return ;
	temp = (*front_s)->next->next;
	ft_lstadd_front(front_s, (*front_s)->next);
	(*front_s)->next->next = temp;
}

int	swap(t_list **front_a, t_list **front_b)
{
	int	a_ok;
	int	b_ok;

	a_ok = (*front_a && (*front_a)->next);
	b_ok = (*front_b && (*front_b)->next);
	swap_stack(front_a);
	swap_stack(front_b);
	if (a_ok && b_ok)
		ft_printf("ss\n");
	else if (a_ok)
		ft_printf("sa\n");
	else if (b_ok)
		ft_printf("sb\n");
	else
		return (0);
	return (1);
}
