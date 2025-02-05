/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   swap_fcts.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: jodavis <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2025/02/05 12:51:31 by jodavis        #+#    #+#                */
/*   Updated: 2025/02/05 15:15:53 by jodavis        ########   odam.nl        */
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
	swap_stack(front_a);
	swap_stack(front_b);
	if (!*front_a && !*front_b)
		return (0);
	else if (!*front_a)
		ft_printf("sb\n");
	else if (!*front_b)
		ft_printf("sa\n");
	else
		ft_printf("ss\n");
	return (1);
}
